/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    reference_m_00000000000107453014_3549481560_init();
    reference_m_00000000001521514474_4015184218_init();
    reference_m_00000000002092188398_3232292778_init();
    reference_m_00000000000816262850_2026737544_init();
    reference_m_00000000001443816603_0804049074_init();
    reference_m_00000000002111280355_4238855196_init();
    reference_m_00000000002833713602_3472087807_init();
    uut_m_00000000002085219836_2933537879_init();
    uut_m_00000000002320651513_2360637657_init();
    uut_m_00000000001387454741_1280040376_init();
    uut_m_00000000003133351971_1847898507_init();
    uut_m_00000000002876238848_2105590523_init();
    uut_m_00000000000603961554_2211453954_init();
    uut_m_00000000002094636358_3576250209_init();
    tester_m_00000000000468845717_2613777659_init();
    test_m_00000000003363540012_1985558087_init();


    xsi_register_tops("test_m_00000000003363540012_1985558087");


    return xsi_run_simulation(argc, argv);

}
