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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/facultate/Anul III sem I/Arhitectura Calculatoarelor - REZOLVAT/tema 2/tema2_task3_checker/build/bin/decryption_top.v";



static void Cont_86_0(char *t0)
{
    char t4[8];
    char t18[8];
    char t25[8];
    char t53[8];
    char t68[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5592U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (!(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t25, t4, 8);

LAB10:    memset(t53, 0, 8);
    t54 = (t25 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t25);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t54) != 0)
        goto LAB20;

LAB21:    t61 = (t53 + 4);
    t62 = *((unsigned int *)t53);
    t63 = (!(t62));
    t64 = *((unsigned int *)t61);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB22;

LAB23:    memcpy(t75, t53, 8);

LAB24:    t103 = (t0 + 8432);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t107, 0, 8);
    t108 = 1U;
    t109 = t108;
    t110 = (t75 + 4);
    t111 = *((unsigned int *)t75);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t110);
    t109 = (t109 & t112);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t114 | t108);
    t115 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t115 | t109);
    xsi_driver_vfirst_trans(t103, 0, 0);
    t116 = (t0 + 8352);
    *((int *)t116) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 5752U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t17 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB14:    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t4 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB13:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB15:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t4);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB17;

LAB18:    *((unsigned int *)t53) = 1;
    goto LAB21;

LAB20:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB21;

LAB22:    t66 = (t0 + 5912U);
    t67 = *((char **)t66);
    memset(t68, 0, 8);
    t66 = (t67 + 4);
    t69 = *((unsigned int *)t66);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t66) != 0)
        goto LAB27;

LAB28:    t76 = *((unsigned int *)t53);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = (t53 + 4);
    t80 = (t68 + 4);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t80);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB27:    t74 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB29:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t75) = (t87 | t88);
    t89 = (t53 + 4);
    t90 = (t68 + 4);
    t91 = *((unsigned int *)t89);
    t92 = (~(t91));
    t93 = *((unsigned int *)t53);
    t94 = (t93 & t92);
    t95 = *((unsigned int *)t90);
    t96 = (~(t95));
    t97 = *((unsigned int *)t68);
    t98 = (t97 & t96);
    t99 = (~(t94));
    t100 = (~(t98));
    t101 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t101 & t99);
    t102 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t102 & t100);
    goto LAB31;

}


extern void uut_m_00000000002094636358_3576250209_init()
{
	static char *pe[] = {(void *)Cont_86_0};
	xsi_register_didat("uut_m_00000000002094636358_3576250209", "isim/tester.exe.sim/uut/m_00000000002094636358_3576250209.didat");
	xsi_register_executes(pe);
}
