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
static const char *ng0 = "C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Instruction_memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {50, 0};
static unsigned int ng3[] = {144U, 0U};
static unsigned int ng4[] = {4U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};
static int ng8[] = {5, 0};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {7U, 0U};



static void Initial_29_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
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
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
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
LAB4:    xsi_set_current_line(33, ng0);

LAB6:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2088);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 2248);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t19, 32, t20, 32);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t15, 32, 1);
    t21 = (t5 + 4);
    t7 = *((unsigned int *)t21);
    t27 = (!(t7));
    t22 = (t14 + 4);
    t8 = *((unsigned int *)t22);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB10;

}

static void Always_43_1(char *t0)
{
    char t7[8];
    char t30[16];
    char t32[8];
    char t39[8];
    char t41[8];
    char t54[8];
    char t61[8];
    char t63[8];
    char t76[8];
    char t83[8];
    char t85[8];
    char t98[8];
    char t105[8];
    char t107[8];
    char t120[8];
    char t127[8];
    char t129[8];
    char t142[8];
    char t149[8];
    char t151[8];
    char t164[8];
    char t171[8];
    char t173[8];
    char t186[8];
    char t193[8];
    char t195[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t128;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t172;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t194;
    char *t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
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
        goto LAB7;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB9:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t7) = 1;

LAB17:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 6, t5, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 6);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t7) = 1;

LAB24:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 6);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    goto LAB12;

LAB16:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(52, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t29, 0, 0, 16);
    goto LAB20;

LAB23:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(55, ng0);

LAB28:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 2088);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t33 = (t0 + 2088);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 2088);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng9)));
    t42 = (t0 + 1048U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 3);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 3);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 8191U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 8191U);
    xsi_vlogtype_concat(t39, 16, 16, 2U, t41, 13, t40, 3);
    xsi_vlog_generic_get_array_select_value(t32, 8, t31, t35, t38, 2, 1, t39, 16, 2);
    t51 = (t0 + 2088);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t55 = (t0 + 2088);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 2088);
    t59 = (t58 + 64U);
    t60 = *((char **)t59);
    t62 = ((char*)((ng10)));
    t64 = (t0 + 1048U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t66 = (t65 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (t67 >> 3);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 3);
    *((unsigned int *)t64) = t70;
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 8191U);
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 8191U);
    xsi_vlogtype_concat(t61, 16, 16, 2U, t63, 13, t62, 3);
    xsi_vlog_generic_get_array_select_value(t54, 8, t53, t57, t60, 2, 1, t61, 16, 2);
    t73 = (t0 + 2088);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t77 = (t0 + 2088);
    t78 = (t77 + 72U);
    t79 = *((char **)t78);
    t80 = (t0 + 2088);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t84 = ((char*)((ng11)));
    t86 = (t0 + 1048U);
    t87 = *((char **)t86);
    memset(t85, 0, 8);
    t86 = (t85 + 4);
    t88 = (t87 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (t89 >> 3);
    *((unsigned int *)t85) = t90;
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 3);
    *((unsigned int *)t86) = t92;
    t93 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t93 & 8191U);
    t94 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t94 & 8191U);
    xsi_vlogtype_concat(t83, 16, 16, 2U, t85, 13, t84, 3);
    xsi_vlog_generic_get_array_select_value(t76, 8, t75, t79, t82, 2, 1, t83, 16, 2);
    t95 = (t0 + 2088);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t99 = (t0 + 2088);
    t100 = (t99 + 72U);
    t101 = *((char **)t100);
    t102 = (t0 + 2088);
    t103 = (t102 + 64U);
    t104 = *((char **)t103);
    t106 = ((char*)((ng12)));
    t108 = (t0 + 1048U);
    t109 = *((char **)t108);
    memset(t107, 0, 8);
    t108 = (t107 + 4);
    t110 = (t109 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (t111 >> 3);
    *((unsigned int *)t107) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 3);
    *((unsigned int *)t108) = t114;
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 8191U);
    t116 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t116 & 8191U);
    xsi_vlogtype_concat(t105, 16, 16, 2U, t107, 13, t106, 3);
    xsi_vlog_generic_get_array_select_value(t98, 8, t97, t101, t104, 2, 1, t105, 16, 2);
    t117 = (t0 + 2088);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t121 = (t0 + 2088);
    t122 = (t121 + 72U);
    t123 = *((char **)t122);
    t124 = (t0 + 2088);
    t125 = (t124 + 64U);
    t126 = *((char **)t125);
    t128 = ((char*)((ng4)));
    t130 = (t0 + 1048U);
    t131 = *((char **)t130);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t132 = (t131 + 4);
    t133 = *((unsigned int *)t131);
    t134 = (t133 >> 3);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 3);
    *((unsigned int *)t130) = t136;
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 8191U);
    t138 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t138 & 8191U);
    xsi_vlogtype_concat(t127, 16, 16, 2U, t129, 13, t128, 3);
    xsi_vlog_generic_get_array_select_value(t120, 8, t119, t123, t126, 2, 1, t127, 16, 2);
    t139 = (t0 + 2088);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    t143 = (t0 + 2088);
    t144 = (t143 + 72U);
    t145 = *((char **)t144);
    t146 = (t0 + 2088);
    t147 = (t146 + 64U);
    t148 = *((char **)t147);
    t150 = ((char*)((ng13)));
    t152 = (t0 + 1048U);
    t153 = *((char **)t152);
    memset(t151, 0, 8);
    t152 = (t151 + 4);
    t154 = (t153 + 4);
    t155 = *((unsigned int *)t153);
    t156 = (t155 >> 3);
    *((unsigned int *)t151) = t156;
    t157 = *((unsigned int *)t154);
    t158 = (t157 >> 3);
    *((unsigned int *)t152) = t158;
    t159 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t159 & 8191U);
    t160 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t160 & 8191U);
    xsi_vlogtype_concat(t149, 16, 16, 2U, t151, 13, t150, 3);
    xsi_vlog_generic_get_array_select_value(t142, 8, t141, t145, t148, 2, 1, t149, 16, 2);
    t161 = (t0 + 2088);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    t165 = (t0 + 2088);
    t166 = (t165 + 72U);
    t167 = *((char **)t166);
    t168 = (t0 + 2088);
    t169 = (t168 + 64U);
    t170 = *((char **)t169);
    t172 = ((char*)((ng14)));
    t174 = (t0 + 1048U);
    t175 = *((char **)t174);
    memset(t173, 0, 8);
    t174 = (t173 + 4);
    t176 = (t175 + 4);
    t177 = *((unsigned int *)t175);
    t178 = (t177 >> 3);
    *((unsigned int *)t173) = t178;
    t179 = *((unsigned int *)t176);
    t180 = (t179 >> 3);
    *((unsigned int *)t174) = t180;
    t181 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t181 & 8191U);
    t182 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t182 & 8191U);
    xsi_vlogtype_concat(t171, 16, 16, 2U, t173, 13, t172, 3);
    xsi_vlog_generic_get_array_select_value(t164, 8, t163, t167, t170, 2, 1, t171, 16, 2);
    t183 = (t0 + 2088);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    t187 = (t0 + 2088);
    t188 = (t187 + 72U);
    t189 = *((char **)t188);
    t190 = (t0 + 2088);
    t191 = (t190 + 64U);
    t192 = *((char **)t191);
    t194 = ((char*)((ng15)));
    t196 = (t0 + 1048U);
    t197 = *((char **)t196);
    memset(t195, 0, 8);
    t196 = (t195 + 4);
    t198 = (t197 + 4);
    t199 = *((unsigned int *)t197);
    t200 = (t199 >> 3);
    *((unsigned int *)t195) = t200;
    t201 = *((unsigned int *)t198);
    t202 = (t201 >> 3);
    *((unsigned int *)t196) = t202;
    t203 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t203 & 8191U);
    t204 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t204 & 8191U);
    xsi_vlogtype_concat(t193, 16, 16, 2U, t195, 13, t194, 3);
    xsi_vlog_generic_get_array_select_value(t186, 8, t185, t189, t192, 2, 1, t193, 16, 2);
    xsi_vlogtype_concat(t30, 64, 64, 8U, t186, 8, t164, 8, t142, 8, t120, 8, t98, 8, t76, 8, t54, 8, t32, 8);
    t205 = (t0 + 1608);
    xsi_vlogvar_assign_value(t205, t30, 0, 0, 64);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB27;

}


extern void work_m_00000000004060479182_2032185554_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000004060479182_2032185554", "isim/MIPS_test_isim_beh.exe.sim/work/m_00000000004060479182_2032185554.didat");
	xsi_register_executes(pe);
}
