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
static const char *ng0 = "C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Cache.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {74, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};
static int ng6[] = {63, 0};
static int ng7[] = {73, 0};
static int ng8[] = {64, 0};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {65535U, 65535U};



static void Initial_27_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2088);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t22, 32, 1);
    t24 = (t0 + 2088);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t23, t26, 2, t27, 32, 1);
    t28 = (t14 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    t35 = (t23 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t39 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t23);
    t41 = (t39 + t40);
    xsi_vlogvar_assign_value(t13, t12, 0, t41, 1);
    goto LAB7;

}

static void Always_34_1(char *t0)
{
    char t6[16];
    char t15[8];
    char t16[8];
    char t23[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    char *t52;
    unsigned int t53;
    int t54;
    int t55;
    char *t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t70;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3984);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    xsi_vlog_unsigned_case_noteq(t6, 64, t5, 64, t4, 64);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    t13 = (t0 + 2088);
    t17 = (t0 + 2088);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2088);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 3);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 3);
    *((unsigned int *)t24) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 7U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 7U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t23, 3, 2);
    t36 = (t0 + 2088);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    t40 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t15 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t16 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    t52 = (t34 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    t55 = (t51 && t54);
    t56 = (t35 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 6);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 1023U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 1023U);
    t5 = (t0 + 2088);
    t7 = (t0 + 2088);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t17 = (t0 + 2088);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t33, 0, 8);
    t20 = (t33 + 4);
    t22 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    t29 = (t28 >> 3);
    *((unsigned int *)t33) = t29;
    t30 = *((unsigned int *)t22);
    t31 = (t30 >> 3);
    *((unsigned int *)t20) = t31;
    t32 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t32 & 7U);
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & 7U);
    xsi_vlog_generic_convert_array_indices(t16, t23, t14, t19, 2, 1, t33, 3, 2);
    t24 = (t0 + 2088);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t36 = ((char*)((ng7)));
    t37 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t34, t35, t69, ((int*)(t26)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t16 + 4);
    t45 = *((unsigned int *)t38);
    t43 = (!(t45));
    t39 = (t23 + 4);
    t49 = *((unsigned int *)t39);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t34 + 4);
    t53 = *((unsigned int *)t40);
    t50 = (!(t53));
    t51 = (t47 && t50);
    t41 = (t35 + 4);
    t57 = *((unsigned int *)t41);
    t54 = (!(t57));
    t55 = (t51 && t54);
    t44 = (t69 + 4);
    t60 = *((unsigned int *)t44);
    t58 = (!(t60));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2088);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    memset(t23, 0, 8);
    t18 = (t23 + 4);
    t20 = (t19 + 4);
    t8 = *((unsigned int *)t19);
    t9 = (t8 >> 3);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 3);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 7U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 7U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t7, t17, 2, 1, t23, 3, 2);
    t21 = (t0 + 2088);
    t22 = (t21 + 72U);
    t24 = *((char **)t22);
    t25 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t33, t24, 2, t25, 32, 1);
    t26 = (t15 + 4);
    t28 = *((unsigned int *)t26);
    t43 = (!(t28));
    t36 = (t16 + 4);
    t29 = *((unsigned int *)t36);
    t46 = (!(t29));
    t47 = (t43 && t46);
    t37 = (t33 + 4);
    t30 = *((unsigned int *)t37);
    t50 = (!(t30));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB14;

LAB15:    goto LAB8;

LAB10:    t60 = *((unsigned int *)t35);
    t61 = (t60 + 0);
    t62 = *((unsigned int *)t16);
    t63 = *((unsigned int *)t34);
    t64 = (t62 + t63);
    t65 = *((unsigned int *)t33);
    t66 = *((unsigned int *)t34);
    t67 = (t65 - t66);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t13, t14, t61, t64, t68, 0LL);
    goto LAB11;

LAB12:    t62 = *((unsigned int *)t69);
    t61 = (t62 + 0);
    t63 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t35);
    t64 = (t63 + t65);
    t66 = *((unsigned int *)t34);
    t70 = *((unsigned int *)t35);
    t67 = (t66 - t70);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t5, t15, t61, t64, t68, 0LL);
    goto LAB13;

LAB14:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t33);
    t54 = (t31 + t32);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, t54, 1, 0LL);
    goto LAB15;

}

static void Always_45_2(char *t0)
{
    char t7[24];
    char t14[8];
    char t24[8];
    char t34[8];
    char t44[8];
    char t63[24];
    char t70[8];
    char t80[8];
    char t86[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 3);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 3);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 75, t6, t10, t13, 2, 1, t14, 3, 2);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t26 = (t7 + 16);
    t27 = (t7 + 20);
    t28 = *((unsigned int *)t26);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t25) = t31;
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 1023U);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 1023U);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 6);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 6);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 1023U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 1023U);
    memset(t44, 0, 8);
    t45 = (t24 + 4);
    t46 = (t34 + 4);
    t47 = *((unsigned int *)t24);
    t48 = *((unsigned int *)t34);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB9;

LAB6:    if (t56 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t44) = 1;

LAB9:    t60 = (t0 + 2088);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t64 = (t0 + 2088);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 2088);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t71 = (t0 + 1048U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 3);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 3);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 7U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 7U);
    xsi_vlog_generic_get_array_select_value(t63, 75, t62, t66, t69, 2, 1, t70, 3, 2);
    t81 = (t0 + 2088);
    t82 = (t81 + 72U);
    t83 = *((char **)t82);
    t84 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t80, 32, t63, t83, 2, t84, 32, 1);
    t85 = ((char*)((ng4)));
    memset(t86, 0, 8);
    t87 = (t80 + 4);
    t88 = (t85 + 4);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t85);
    t91 = (t89 ^ t90);
    t92 = *((unsigned int *)t87);
    t93 = *((unsigned int *)t88);
    t94 = (t92 ^ t93);
    t95 = (t91 | t94);
    t96 = *((unsigned int *)t87);
    t97 = *((unsigned int *)t88);
    t98 = (t96 | t97);
    t99 = (~(t98));
    t100 = (t95 & t99);
    if (t100 != 0)
        goto LAB13;

LAB10:    if (t98 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t86) = 1;

LAB13:    t103 = *((unsigned int *)t44);
    t104 = *((unsigned int *)t86);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t44 + 4);
    t107 = (t86 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB14;

LAB15:
LAB16:    t134 = (t102 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t102);
    t138 = (t137 & t136);
    t139 = (t138 != 0);
    if (t139 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(60, ng0);

LAB49:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB19:    goto LAB2;

LAB8:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB9;

LAB12:    t101 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB13;

LAB14:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t44 + 4);
    t117 = (t86 + 4);
    t118 = *((unsigned int *)t44);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t86);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB16;

LAB17:    xsi_set_current_line(48, ng0);

LAB20:    xsi_set_current_line(49, ng0);
    t140 = ((char*)((ng4)));
    t141 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t141, t140, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 1);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t5 = ((char*)((ng9)));
    memset(t24, 0, 8);
    t6 = (t14 + 4);
    t8 = (t5 + 4);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t5);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t8);
    t33 = (t31 ^ t32);
    t38 = (t30 | t33);
    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t8);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB24;

LAB21:    if (t41 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t24) = 1;

LAB24:    t10 = (t24 + 4);
    t47 = *((unsigned int *)t10);
    t48 = (~(t47));
    t49 = *((unsigned int *)t24);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 1);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t5 = ((char*)((ng10)));
    memset(t24, 0, 8);
    t6 = (t14 + 4);
    t8 = (t5 + 4);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t5);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t8);
    t33 = (t31 ^ t32);
    t38 = (t30 | t33);
    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t8);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB31;

LAB28:    if (t41 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t24) = 1;

LAB31:    t10 = (t24 + 4);
    t47 = *((unsigned int *)t10);
    t48 = (~(t47));
    t49 = *((unsigned int *)t24);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 1);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t5 = ((char*)((ng11)));
    memset(t24, 0, 8);
    t6 = (t14 + 4);
    t8 = (t5 + 4);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t5);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t8);
    t33 = (t31 ^ t32);
    t38 = (t30 | t33);
    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t8);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB38;

LAB35:    if (t41 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t24) = 1;

LAB38:    t10 = (t24 + 4);
    t47 = *((unsigned int *)t10);
    t48 = (~(t47));
    t49 = *((unsigned int *)t24);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 1);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);
    t5 = ((char*)((ng12)));
    memset(t24, 0, 8);
    t6 = (t14 + 4);
    t8 = (t5 + 4);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t5);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t8);
    t33 = (t31 ^ t32);
    t38 = (t30 | t33);
    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t8);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB45;

LAB42:    if (t41 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t24) = 1;

LAB45:    t10 = (t24 + 4);
    t47 = *((unsigned int *)t10);
    t48 = (~(t47));
    t49 = *((unsigned int *)t24);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB19;

LAB23:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2088);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t52 = *((unsigned int *)t36);
    t53 = (t52 >> 3);
    *((unsigned int *)t34) = t53;
    t54 = *((unsigned int *)t37);
    t55 = (t54 >> 3);
    *((unsigned int *)t35) = t55;
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & 7U);
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 75, t13, t17, t27, 2, 1, t34, 3, 2);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t7 + 4);
    t58 = *((unsigned int *)t7);
    t74 = (t58 >> 0);
    *((unsigned int *)t44) = t74;
    t75 = *((unsigned int *)t46);
    t76 = (t75 >> 0);
    *((unsigned int *)t45) = t76;
    t77 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t77 & 65535U);
    t78 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t78 & 65535U);
    t59 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t59, t44, 0, 0, 16, 0LL);
    goto LAB27;

LAB30:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2088);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t52 = *((unsigned int *)t36);
    t53 = (t52 >> 3);
    *((unsigned int *)t34) = t53;
    t54 = *((unsigned int *)t37);
    t55 = (t54 >> 3);
    *((unsigned int *)t35) = t55;
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & 7U);
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 75, t13, t17, t27, 2, 1, t34, 3, 2);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t7 + 4);
    t58 = *((unsigned int *)t7);
    t74 = (t58 >> 16);
    *((unsigned int *)t44) = t74;
    t75 = *((unsigned int *)t46);
    t76 = (t75 >> 16);
    *((unsigned int *)t45) = t76;
    t77 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t77 & 65535U);
    t78 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t78 & 65535U);
    t59 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t59, t44, 0, 0, 16, 0LL);
    goto LAB34;

LAB37:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2088);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t52 = *((unsigned int *)t36);
    t53 = (t52 >> 3);
    *((unsigned int *)t34) = t53;
    t54 = *((unsigned int *)t37);
    t55 = (t54 >> 3);
    *((unsigned int *)t35) = t55;
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & 7U);
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 75, t13, t17, t27, 2, 1, t34, 3, 2);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t7 + 8);
    t59 = (t7 + 12);
    t58 = *((unsigned int *)t46);
    t74 = (t58 >> 0);
    *((unsigned int *)t44) = t74;
    t75 = *((unsigned int *)t59);
    t76 = (t75 >> 0);
    *((unsigned int *)t45) = t76;
    t77 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t77 & 65535U);
    t78 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t78 & 65535U);
    t60 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t60, t44, 0, 0, 16, 0LL);
    goto LAB41;

LAB44:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2088);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t52 = *((unsigned int *)t36);
    t53 = (t52 >> 3);
    *((unsigned int *)t34) = t53;
    t54 = *((unsigned int *)t37);
    t55 = (t54 >> 3);
    *((unsigned int *)t35) = t55;
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & 7U);
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 75, t13, t17, t27, 2, 1, t34, 3, 2);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t7 + 8);
    t59 = (t7 + 12);
    t58 = *((unsigned int *)t46);
    t74 = (t58 >> 16);
    *((unsigned int *)t44) = t74;
    t75 = *((unsigned int *)t59);
    t76 = (t75 >> 16);
    *((unsigned int *)t45) = t76;
    t77 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t77 & 65535U);
    t78 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t78 & 65535U);
    t60 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t60, t44, 0, 0, 16, 0LL);
    goto LAB48;

}


extern void work_m_00000000002628495417_2386836622_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_34_1,(void *)Always_45_2};
	xsi_register_didat("work_m_00000000002628495417_2386836622", "isim/MIPS_test_isim_beh.exe.sim/work/m_00000000002628495417_2386836622.didat");
	xsi_register_executes(pe);
}
