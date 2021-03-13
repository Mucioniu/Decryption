# Decryption

Programul implementeaza un circuit secvential în Verilog care primește la intrare date criptate și va scoate pe ieșire informația decriptată. 
Modulul implementeaza 3 algoritmi de decriptare: Cezar, Scytale și ZigZag. Pe interfața de acces la registre se va configura ce algoritm de 
decriptare va fi folosit și care e cheia de decriptare.

Programul a fost realizat in Xilinx 14.7 ISE_DS care este necesar pentru rularea testelor de verificare. Exista doua foldere, unul contine 
programul propriu-zis, iar celalalt contine testele de verificare. In cadrul testelor click dreapta start_test.bat -> edit -> selectati calea 
catre aplicatia xilinx.

In poza implementation_design se afla schema in care au fost conectate modulele si registrele. De asemenea sunt oferite informatii suplimentare
despre cum functioneaza fiecare modul in parte, atat in pozele aferente cat si aici

Decryption_regfile

In decryption_regfile am creeat un vector de 4 registrii a cate 16 biti fiecare. Am creeat un bloc secvential care mai intai verifica
daca avem rst, iar apoi daca write-ul este activ, prin mai multe if-uri verificam adresa si scriem in vector pe pozitia corespunzatoare 
adresei, informatiile din wdata si se ridica semnalul de done. Cand read-ul este pe 1, verificam prin mai multe if-uri adresa se citeste 
din vector de la adresa corespunzatoare si se trimite pe semnalul de iesire rdata ridicandu-se pe 1 semnalul done. Si la read si la write
daca adresa este diferita de cele 4 se va ridica semnalul de eroare si done pe 1. Altminteri daca nu avem nici read nici write, tinem
semnalele done, error si rdata pe 0. La final am egalat informatia din vector spre semnalul corespunzator pozitie din vector, in ordine:
select, caesar_key, scytale_key, zigzag_key

Caesar_decryption

In modulul caesar am setat busy-ul tot timpul pe 0, am verificat daca reset-ul este activ, apoi cand citirea este pornita iesirea va fi
intrarea - key-ul primit de la Decryption_regfile tinand in acest timp valid_o pe 1.
Daca nu se primesc date setam valid_o pe 0.

Scytale_decryption
Cand valid_i e ridicat pe 1, citim caractere si le punem in vectorul v pana cand se citeste caracterul de oprire - START_DECRYPTION_TOKEN-. 
In momentul in care se citeste 8'hFA, busy devine 1. Pentru ca semnalul valid_o incepe cu un ciclu de ceas dupa semnalul busy, am folosit o 
variabila auxiliara, wait_valid, pentru a intarzia semalul. Cand ambele semnale sunt =1, putem incepe decriptarea textului si valid_o 
devine 1.
Am folosit un algoritm si am declarat urmatoarele variabile care au urmatoarele functionalitati:
- i esste indicele de la care citim caracterul din vectorul v. Acesta creste din N in N, insa pana cand se atinge valoarea maxima a unui ciclu 
de repetare. Un ciclu este egal cu numarul de coloane, anume M
- stop_scriere -> este un counter care se mareste de fiecare data cand este citit un caracter din v. Ne ajuta sa ne dam seama cand trebuie sa 
oprim algoritmul si sa resetam semnalele. Conditia de oprire este stop_scriere == key_N*key_M +1 (numarul elementelor din matrice + 1).
- detector_repetare -> variabile care ne ajuta sa ne dam seama cand este realizat un ciclu complet(s-a citit o linie din matrice).
-index_citire -> folosit pentru a reseta indicele i cand se realizeaza un ciclu 
complet.

Zigzag_decryption
Acelasi principiu ca la Scytale. Diferentaeste algoritmul
Am folosit un algoritm de division prin care am calculat catul si restul impartirii numarului de caractere(variabila index) la ciclul unei 
anumite chei(pentru fiecare cheie am initializat D cu alt numar). 
Pentru fiecare cheia am luat cate un row pentru fiecare linie ce reprezinta de fapt indicele de la care pornim de pe fiecare linie. Am luat 
aceste valori in functie de catul de la division. Restul ne ajuta sa vedem cum se modifica aceste valori de inceput. De asta am facut cazuri 
pentru fiecare cheie cu resturile corespunzatoare in functie de ciclu. Pentru scrierea propriu-zisa in data_o am luat acele valori si in functie
de randul la care ne aflam am extras caracterele. Am folosit cateva variabile auxiliare cum ar fi vizitat_2, vizitat_3 etc pentru a imi da seama
daca ar trebui sa merg pe linia de sus sau pe cea de jos.
nr_oprire este variabila care imi spune cand ma opresc si resetez valorile. 

Demux 
Am folosit 3 blocuri always: 2 secventiale pe frontul crescator al fiecarui ceas(mst sau sys) si unul combinational pentru a pune valorile.
Always clk_mst->In functie de cazul de select pe care ne aflam, se ridica semnalul de valid corespunzator(0,1 sau 2). Punem in vectorul v valorile din 
data_i.
Always clk_sys-> Observam ca ciclul ceasului sys este de 4 ori mai mic decat cel din mst si luam un counter care ne va spune ce pozitie 
luam din vectorul in care am pus caracterele astfel incat sa luam cate 4 biti din cei 32

Mux
In functie in cazul in care ne aflam pentru semnalul select (0-Caesar, 1-Scytale, 2-Zigzag), am pus in data output valorile corespunzatoare si 
am ridicat semnalul valid_o atunci cand si validul fiecarui modul era ridicat pe 1.

Modulul decryption_top
In acest modul am apelat fiecare modul folosit cu variabilele lor. In cazul in care acestea nu ni se deadeau, am declarat unele de 
lungimea corespunzatoare.
Am facut la final un sau logic intre semnalele de busy ale celor 3 module de algoritmi.