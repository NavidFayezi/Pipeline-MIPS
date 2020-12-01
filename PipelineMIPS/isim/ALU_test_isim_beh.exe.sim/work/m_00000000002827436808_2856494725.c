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
static const char *ng0 = "C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/ALU_test.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "ADD succeeded";
static const char *ng4 = "ADD Failed";
static int ng5[] = {5, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static const char *ng8 = "SUB Failed";
static const char *ng9 = "NOT Failed";
static const char *ng10 = "SL Failed";
static const char *ng11 = "SR Failed";
static const char *ng12 = "AND Failed";
static const char *ng13 = "OR Failed";
static const char *ng14 = "SLT Failed";



static void Initial_45_0(char *t0)
{
    char t4[8];
    char t26[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    char *t43;
    char *t44;
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
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB14;

LAB13:    if (t16 != 0)
        goto LAB15;

LAB16:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB8:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB19;

LAB20:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB22;

LAB21:    if (t16 != 0)
        goto LAB23;

LAB24:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB23:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB27;

LAB28:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 3);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t19 = (t4 + 4);
    t20 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB31;

LAB30:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 65535U);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t14 & 65535U);
    memset(t26, 0, 8);
    t27 = (t3 + 4);
    t28 = (t4 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t27);
    t21 = *((unsigned int *)t28);
    t22 = (t18 ^ t21);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t28);
    t29 = (t24 | t25);
    t30 = (~(t29));
    t31 = (t23 & t30);
    if (t31 != 0)
        goto LAB33;

LAB32:    if (t29 != 0)
        goto LAB34;

LAB35:    t33 = (t26 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB31:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t20);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t19);
    t12 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t11 | t12);
    goto LAB30;

LAB33:    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB34:    t32 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(64, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB38;

LAB39:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t19 = (t0 + 1768);
    t20 = (t19 + 56U);
    t27 = *((char **)t20);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 16, t6, 16, t27, 16);
    memset(t26, 0, 8);
    t28 = (t3 + 4);
    t32 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t28);
    t11 = *((unsigned int *)t32);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t28);
    t15 = *((unsigned int *)t32);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB42;

LAB41:    if (t16 != 0)
        goto LAB43;

LAB44:    t39 = (t26 + 4);
    t21 = *((unsigned int *)t39);
    t22 = (~(t21));
    t23 = *((unsigned int *)t26);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB42:    *((unsigned int *)t26) = 1;
    goto LAB44;

LAB43:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(68, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB47;

LAB48:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t19 = (t0 + 1768);
    t20 = (t19 + 56U);
    t27 = *((char **)t20);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 16, t6, 16, t27, 16);
    memset(t26, 0, 8);
    t28 = (t3 + 4);
    t32 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t28);
    t11 = *((unsigned int *)t32);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t28);
    t15 = *((unsigned int *)t32);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB51;

LAB50:    if (t16 != 0)
        goto LAB52;

LAB53:    t39 = (t26 + 4);
    t21 = *((unsigned int *)t39);
    t22 = (~(t21));
    t23 = *((unsigned int *)t26);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    *((unsigned int *)t26) = 1;
    goto LAB53;

LAB52:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB56;

LAB57:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t19 = (t0 + 1768);
    t20 = (t19 + 56U);
    t27 = *((char **)t20);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t27);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t28 = (t6 + 4);
    t32 = (t27 + 4);
    t33 = (t4 + 4);
    t10 = *((unsigned int *)t28);
    t11 = *((unsigned int *)t32);
    t12 = (t10 | t11);
    *((unsigned int *)t33) = t12;
    t13 = *((unsigned int *)t33);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB59;

LAB60:
LAB61:    memset(t26, 0, 8);
    t43 = (t3 + 4);
    t44 = (t4 + 4);
    t38 = *((unsigned int *)t3);
    t45 = *((unsigned int *)t4);
    t46 = (t38 ^ t45);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t44);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB63;

LAB62:    if (t53 != 0)
        goto LAB64;

LAB65:    t57 = (t26 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t26);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB59:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t33);
    *((unsigned int *)t4) = (t15 | t16);
    t39 = (t6 + 4);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    t21 = *((unsigned int *)t39);
    t22 = (~(t21));
    t23 = *((unsigned int *)t27);
    t24 = (~(t23));
    t25 = *((unsigned int *)t40);
    t29 = (~(t25));
    t41 = (t18 & t22);
    t42 = (t24 & t29);
    t30 = (~(t41));
    t31 = (~(t42));
    t34 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t34 & t30);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t30);
    t37 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t37 & t31);
    goto LAB61;

LAB63:    *((unsigned int *)t26) = 1;
    goto LAB65;

LAB64:    t56 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB68;

LAB69:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 3);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t19 = (t0 + 1768);
    t20 = (t19 + 56U);
    t27 = *((char **)t20);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t27);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t28 = (t6 + 4);
    t32 = (t27 + 4);
    t33 = (t4 + 4);
    t10 = *((unsigned int *)t28);
    t11 = *((unsigned int *)t32);
    t12 = (t10 | t11);
    *((unsigned int *)t33) = t12;
    t13 = *((unsigned int *)t33);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB71;

LAB72:
LAB73:    memset(t26, 0, 8);
    t43 = (t3 + 4);
    t44 = (t4 + 4);
    t34 = *((unsigned int *)t3);
    t35 = *((unsigned int *)t4);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t45 = (t37 ^ t38);
    t46 = (t36 | t45);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t44);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB75;

LAB74:    if (t49 != 0)
        goto LAB76;

LAB77:    t57 = (t26 + 4);
    t52 = *((unsigned int *)t57);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (t54 & t53);
    t58 = (t55 != 0);
    if (t58 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB71:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t33);
    *((unsigned int *)t4) = (t15 | t16);
    t39 = (t6 + 4);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t18 = (~(t17));
    t21 = *((unsigned int *)t6);
    t41 = (t21 & t18);
    t22 = *((unsigned int *)t40);
    t23 = (~(t22));
    t24 = *((unsigned int *)t27);
    t42 = (t24 & t23);
    t25 = (~(t41));
    t29 = (~(t42));
    t30 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t30 & t25);
    t31 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t31 & t29);
    goto LAB73;

LAB75:    *((unsigned int *)t26) = 1;
    goto LAB77;

LAB76:    t56 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(80, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    goto LAB80;

LAB81:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB84;

LAB83:    if (t16 != 0)
        goto LAB85;

LAB86:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB87;

LAB88:
LAB89:    goto LAB1;

LAB84:    *((unsigned int *)t4) = 1;
    goto LAB86;

LAB85:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    goto LAB89;

}


extern void work_m_00000000002827436808_2856494725_init()
{
	static char *pe[] = {(void *)Initial_45_0};
	xsi_register_didat("work_m_00000000002827436808_2856494725", "isim/ALU_test_isim_beh.exe.sim/work/m_00000000002827436808_2856494725.didat");
	xsi_register_executes(pe);
}
