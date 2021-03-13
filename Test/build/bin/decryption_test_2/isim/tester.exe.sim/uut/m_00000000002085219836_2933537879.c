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
static const char *ng0 = "F:/facultate/Anul III sem I/Arhitectura Calculatoarelor - REZOLVAT/tema 2/tema2_task3_checker/build/bin/decryption_regfile.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {65535U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {18U, 0U};
static unsigned int ng10[] = {20U, 0U};



static void Always_49_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t55[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5872);
    *((int *)t2) = 1;
    t3 = (t0 + 4592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(57, ng0);

LAB22:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB71;

LAB68:    if (t18 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t4) = 1;

LAB71:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(121, ng0);

LAB109:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB74:
LAB25:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3640);
    t23 = (t0 + 3640);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3640);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t22 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 3640);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t23 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t32 = (!(t7));
    t25 = (t21 + 4);
    t8 = *((unsigned int *)t25);
    t35 = (!(t8));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 3640);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t23 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t32 = (!(t7));
    t25 = (t21 + 4);
    t8 = *((unsigned int *)t25);
    t35 = (!(t8));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 3640);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t23 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t32 = (!(t7));
    t25 = (t21 + 4);
    t8 = *((unsigned int *)t25);
    t35 = (!(t8));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB20;

LAB21:    goto LAB12;

LAB14:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB15;

LAB16:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t39 = (t9 - t10);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t39 = (t9 - t10);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB19;

LAB20:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t39 = (t9 - t10);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(58, ng0);

LAB26:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 1640U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t31 = (t17 ^ t18);
    t34 = (t16 | t31);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t41 = (t37 | t38);
    t42 = (~(t41));
    t43 = (t34 & t42);
    if (t43 != 0)
        goto LAB30;

LAB27:    if (t41 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t4) = 1;

LAB30:    t20 = (t4 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB40;

LAB37:    if (t18 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t4) = 1;

LAB40:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB50;

LAB47:    if (t18 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t4) = 1;

LAB50:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t4) = 1;

LAB60:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(83, ng0);

LAB67:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB63:
LAB53:
LAB43:
LAB33:    goto LAB25;

LAB29:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(59, ng0);

LAB34:    xsi_set_current_line(60, ng0);
    t23 = (t0 + 2120U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t49 = *((unsigned int *)t24);
    t50 = (t49 >> 0);
    *((unsigned int *)t22) = t50;
    t51 = *((unsigned int *)t25);
    t52 = (t51 >> 0);
    *((unsigned int *)t23) = t52;
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & 3U);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & 3U);
    t26 = ((char*)((ng1)));
    xsi_vlogtype_concat(t21, 16, 16, 2U, t26, 14, t22, 2);
    t27 = (t0 + 3640);
    t28 = (t0 + 3640);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t33 = (t0 + 3640);
    t57 = (t33 + 64U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t30, t58, 2, 1, t59, 32, 1);
    t60 = (t55 + 4);
    t61 = *((unsigned int *)t60);
    t32 = (!(t61));
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t62);
    t35 = (!(t63));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB35:    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t39 = (t64 - t65);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t27, t21, 0, *((unsigned int *)t56), t40, 0LL);
    goto LAB36;

LAB39:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(65, ng0);

LAB44:    xsi_set_current_line(66, ng0);
    t19 = (t0 + 2120U);
    t20 = *((char **)t19);
    t19 = (t0 + 3640);
    t23 = (t0 + 3640);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3640);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t44 = *((unsigned int *)t30);
    t32 = (!(t44));
    t33 = (t22 + 4);
    t45 = *((unsigned int *)t33);
    t35 = (!(t45));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB43;

LAB45:    t46 = *((unsigned int *)t21);
    t47 = *((unsigned int *)t22);
    t39 = (t46 - t47);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB46;

LAB49:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(71, ng0);

LAB54:    xsi_set_current_line(72, ng0);
    t19 = (t0 + 2120U);
    t20 = *((char **)t19);
    t19 = (t0 + 3640);
    t23 = (t0 + 3640);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3640);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t44 = *((unsigned int *)t30);
    t32 = (!(t44));
    t33 = (t22 + 4);
    t45 = *((unsigned int *)t33);
    t35 = (!(t45));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB55:    t46 = *((unsigned int *)t21);
    t47 = *((unsigned int *)t22);
    t39 = (t46 - t47);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB56;

LAB59:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(77, ng0);

LAB64:    xsi_set_current_line(78, ng0);
    t19 = (t0 + 2120U);
    t20 = *((char **)t19);
    t19 = (t0 + 3640);
    t23 = (t0 + 3640);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3640);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t44 = *((unsigned int *)t30);
    t32 = (!(t44));
    t33 = (t22 + 4);
    t45 = *((unsigned int *)t33);
    t35 = (!(t45));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB63;

LAB65:    t46 = *((unsigned int *)t21);
    t47 = *((unsigned int *)t22);
    t39 = (t46 - t47);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB66;

LAB70:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(89, ng0);

LAB75:    xsi_set_current_line(90, ng0);
    t19 = (t0 + 1640U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t23 = (t20 + 4);
    t24 = (t19 + 4);
    t44 = *((unsigned int *)t20);
    t45 = *((unsigned int *)t19);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t23);
    t48 = *((unsigned int *)t24);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t24);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t61 = (t50 & t54);
    if (t61 != 0)
        goto LAB79;

LAB76:    if (t53 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t21) = 1;

LAB79:    t26 = (t21 + 4);
    t63 = *((unsigned int *)t26);
    t64 = (~(t63));
    t65 = *((unsigned int *)t21);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB87;

LAB84:    if (t18 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t4) = 1;

LAB87:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB95;

LAB92:    if (t18 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t4) = 1;

LAB95:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t31 = (~(t18));
    t34 = (t15 & t31);
    if (t34 != 0)
        goto LAB103;

LAB100:    if (t18 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t4) = 1;

LAB103:    t13 = (t4 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t38);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(114, ng0);

LAB108:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB106:
LAB98:
LAB90:
LAB82:    goto LAB74;

LAB78:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(90, ng0);

LAB83:    xsi_set_current_line(91, ng0);
    t27 = (t0 + 3640);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3640);
    t33 = (t30 + 72U);
    t57 = *((char **)t33);
    t58 = (t0 + 3640);
    t59 = (t58 + 64U);
    t60 = *((char **)t59);
    t62 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t22, 16, t29, t57, t60, 2, 1, t62, 32, 1);
    t68 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t68, t22, 0, 0, 16, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB82;

LAB86:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(96, ng0);

LAB91:    xsi_set_current_line(97, ng0);
    t19 = (t0 + 3640);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t0 + 3640);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 3640);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t21, 16, t23, t26, t29, 2, 1, t30, 32, 1);
    t33 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t33, t21, 0, 0, 16, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB90;

LAB94:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(102, ng0);

LAB99:    xsi_set_current_line(103, ng0);
    t19 = (t0 + 3640);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t0 + 3640);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 3640);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t21, 16, t23, t26, t29, 2, 1, t30, 32, 1);
    t33 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t33, t21, 0, 0, 16, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB98;

LAB102:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(108, ng0);

LAB107:    xsi_set_current_line(109, ng0);
    t19 = (t0 + 3640);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t0 + 3640);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 3640);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t21, 16, t23, t26, t29, 2, 1, t30, 32, 1);
    t33 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t33, t21, 0, 0, 16, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB106;

}

static void Cont_129_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3640);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3640);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6016);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 15);
    t26 = (t0 + 5888);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_130_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3640);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3640);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6080);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 15);
    t26 = (t0 + 5904);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_131_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3640);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3640);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6144);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 15);
    t26 = (t0 + 5920);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_132_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3640);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3640);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 7);
    t26 = (t0 + 5936);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void uut_m_00000000002085219836_2933537879_init()
{
	static char *pe[] = {(void *)Always_49_0,(void *)Cont_129_1,(void *)Cont_130_2,(void *)Cont_131_3,(void *)Cont_132_4};
	xsi_register_didat("uut_m_00000000002085219836_2933537879", "isim/tester.exe.sim/uut/m_00000000002085219836_2933537879.didat");
	xsi_register_executes(pe);
}
