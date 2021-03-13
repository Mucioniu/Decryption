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
static const char *ng0 = "F:/facultate/Anul III sem I/Arhitectura Calculatoarelor - REZOLVAT/tema 2/tema2_task3_checker/build/bin/scytale_decryption.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {250U, 0U};



static void Initial_52_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(52, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3272);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4232);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3592);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4072);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3912);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_64_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char t77[8];
    char t92[8];
    char t108[8];
    char t116[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    int t152;

LAB0:    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5880);
    *((int *)t2) = 1;
    t3 = (t0 + 5592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t6) = 1;

LAB60:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2232U);
    t7 = *((char **)t5);
    t5 = (t0 + 2392U);
    t8 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t7, 8, t8, 8);
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t6, 32, t5, 32);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    t22 = (t30 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t30);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB85;

LAB82:    if (t18 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t36) = 1;

LAB85:    t29 = (t36 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t36);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB86;

LAB87:
LAB88:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);

LAB13:    xsi_set_current_line(66, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2792);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB22;

LAB23:    memcpy(t45, t30, 8);

LAB24:    memset(t77, 0, 8);
    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t78) != 0)
        goto LAB34;

LAB35:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = (!(t86));
    t88 = *((unsigned int *)t85);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB36;

LAB37:    memcpy(t116, t77, 8);

LAB38:    t144 = (t116 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t116);
    t148 = (t147 & t146);
    t149 = (t148 != 0);
    if (t149 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(71, ng0);

LAB54:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 4392);
    t4 = (t0 + 4392);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 4392);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 4232);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t34, 6, 2);
    t35 = (t6 + 4);
    t9 = *((unsigned int *)t35);
    t69 = (!(t9));
    t38 = (t30 + 4);
    t10 = *((unsigned int *)t38);
    t70 = (!(t10));
    t135 = (t69 && t70);
    if (t135 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 6, t5, 32);
    t7 = (t0 + 4232);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 6);

LAB52:    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = (t0 + 3912);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng1)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t34, 32, t35, 32);
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t38) != 0)
        goto LAB27;

LAB28:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t30 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t37) = 1;
    goto LAB28;

LAB27:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB29:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t30 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t30);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB31;

LAB32:    *((unsigned int *)t77) = 1;
    goto LAB35;

LAB34:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB35;

LAB36:    t90 = (t0 + 1912U);
    t91 = *((char **)t90);
    t90 = ((char*)((ng1)));
    memset(t92, 0, 8);
    t93 = (t91 + 4);
    t94 = (t90 + 4);
    t95 = *((unsigned int *)t91);
    t96 = *((unsigned int *)t90);
    t97 = (t95 ^ t96);
    t98 = *((unsigned int *)t93);
    t99 = *((unsigned int *)t94);
    t100 = (t98 ^ t99);
    t101 = (t97 | t100);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t94);
    t104 = (t102 | t103);
    t105 = (~(t104));
    t106 = (t101 & t105);
    if (t106 != 0)
        goto LAB42;

LAB39:    if (t104 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t92) = 1;

LAB42:    memset(t108, 0, 8);
    t109 = (t92 + 4);
    t110 = *((unsigned int *)t109);
    t111 = (~(t110));
    t112 = *((unsigned int *)t92);
    t113 = (t112 & t111);
    t114 = (t113 & 1U);
    if (t114 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t109) != 0)
        goto LAB45;

LAB46:    t117 = *((unsigned int *)t77);
    t118 = *((unsigned int *)t108);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = (t77 + 4);
    t121 = (t108 + 4);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t120);
    t124 = *((unsigned int *)t121);
    t125 = (t123 | t124);
    *((unsigned int *)t122) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 != 0);
    if (t127 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB38;

LAB41:    t107 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t108) = 1;
    goto LAB46;

LAB45:    t115 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB46;

LAB47:    t128 = *((unsigned int *)t116);
    t129 = *((unsigned int *)t122);
    *((unsigned int *)t116) = (t128 | t129);
    t130 = (t77 + 4);
    t131 = (t108 + 4);
    t132 = *((unsigned int *)t130);
    t133 = (~(t132));
    t134 = *((unsigned int *)t77);
    t135 = (t134 & t133);
    t136 = *((unsigned int *)t131);
    t137 = (~(t136));
    t138 = *((unsigned int *)t108);
    t139 = (t138 & t137);
    t140 = (~(t135));
    t141 = (~(t139));
    t142 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t142 & t140);
    t143 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t143 & t141);
    goto LAB49;

LAB50:    xsi_set_current_line(67, ng0);

LAB53:    xsi_set_current_line(68, ng0);
    t150 = ((char*)((ng2)));
    t151 = (t0 + 3112);
    xsi_vlogvar_assign_value(t151, t150, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB52;

LAB55:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t139 = (t11 - t12);
    t152 = (t139 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t30), t152);
    goto LAB56;

LAB59:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(76, ng0);

LAB64:    xsi_set_current_line(77, ng0);
    t28 = (t0 + 3272);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t38 = (t34 + 4);
    t44 = (t35 + 4);
    t31 = *((unsigned int *)t34);
    t32 = *((unsigned int *)t35);
    t33 = (t31 ^ t32);
    t39 = *((unsigned int *)t38);
    t40 = *((unsigned int *)t44);
    t41 = (t39 ^ t40);
    t42 = (t33 | t41);
    t43 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t44);
    t47 = (t43 | t46);
    t48 = (~(t47));
    t52 = (t42 & t48);
    if (t52 != 0)
        goto LAB68;

LAB65:    if (t47 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t30) = 1;

LAB68:    t50 = (t30 + 4);
    t53 = *((unsigned int *)t50);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(90, ng0);

LAB81:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB71:    goto LAB63;

LAB67:    t49 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(77, ng0);

LAB72:    xsi_set_current_line(78, ng0);
    t51 = ((char*)((ng2)));
    t59 = (t0 + 2952);
    xsi_vlogvar_assign_value(t59, t51, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4392);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 4392);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 3752);
    t34 = (t29 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t35, 32, 1);
    t38 = (t0 + 2792);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2232U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t7, 8);
    t5 = (t0 + 3752);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3592);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3432);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2392U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB76;

LAB73:    if (t18 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB76:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB71;

LAB75:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(84, ng0);

LAB80:    xsi_set_current_line(85, ng0);
    t28 = (t0 + 4072);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t34, 32, t35, 32);
    t38 = (t0 + 4072);
    xsi_vlogvar_assign_value(t38, t30, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB79;

LAB84:    t28 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(94, ng0);

LAB89:    xsi_set_current_line(95, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 3112);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB88;

}


extern void uut_m_00000000003133351971_1847898507_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_64_1};
	xsi_register_didat("uut_m_00000000003133351971_1847898507", "isim/tester.exe.sim/uut/m_00000000003133351971_1847898507.didat");
	xsi_register_executes(pe);
}
