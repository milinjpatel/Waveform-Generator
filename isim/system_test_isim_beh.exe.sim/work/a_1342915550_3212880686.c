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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/SPI_Interface.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_1342915550_3212880686_p_0(char *t0)
{
    char t36[16];
    char t37[16];
    char t40[16];
    char t43[16];
    char t48[16];
    char t61[16];
    char t63[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t38;
    unsigned int t39;
    int t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    char *t64;
    char *t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 5624);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(25, ng0);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 3272U);
    t15 = *((char **)t7);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)3);
    t12 = t17;

LAB19:    if (t12 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB10;

LAB12:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 9228U);
    t5 = (t0 + 9318);
    t7 = (t36 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t23 = (4 - 0);
    t22 = (t23 * 1);
    t22 = (t22 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t22;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t36);
    if (t3 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t22 = (31 - 30);
    t24 = (t22 * 1U);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t37 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 30;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t23 = (0 - 30);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t5 = xsi_base_array_concat(t5, t36, t6, (char)97, t1, t37, (char)99, (unsigned char)2, (char)101);
    t27 = (31U + 1U);
    t3 = (32U != t27);
    if (t3 == 1)
        goto LAB40;

LAB41:    t8 = (t0 + 5944);
    t15 = (t8 + 56U);
    t18 = *((char **)t15);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 9228U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t36 + 12U);
    t22 = *((unsigned int *)t6);
    t24 = (1U * t22);
    t3 = (5U != t24);
    if (t3 == 1)
        goto LAB42;

LAB43:    t7 = (t0 + 5816);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB10;

LAB14:    xsi_set_current_line(25, ng0);
    t7 = (t0 + 5688);
    t18 = (t7 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 5752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 9313);
    t5 = (t0 + 5816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(27, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    if (-1 == 1)
        goto LAB20;

LAB21:    t22 = 22;

LAB22:    t23 = (t22 - 22);
    t24 = (t23 * 1);
    t25 = (1U * t24);
    t5 = (t2 + t25);
    t26 = (22 - 31);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t28 = (1U * t27);
    memset(t5, (unsigned char)2, t28);
    t6 = xsi_get_transient_memory(2U);
    memset(t6, 0, 2U);
    t7 = t6;
    if (-1 == 1)
        goto LAB23;

LAB24:    t29 = 20;

LAB25:    t30 = (t29 - 20);
    t31 = (t30 * 1);
    t32 = (1U * t31);
    t8 = (t7 + t32);
    t33 = (20 - 21);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t35 = (1U * t34);
    memset(t8, (unsigned char)3, t35);
    t18 = ((IEEE_P_2592010699) + 4024);
    t19 = (t37 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 22;
    t20 = (t19 + 4U);
    *((int *)t20) = 31;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t38 = (31 - 22);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t39;
    t20 = (t40 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 20;
    t21 = (t20 + 4U);
    *((int *)t21) = 21;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t41 = (21 - 20);
    t39 = (t41 * 1);
    t39 = (t39 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t39;
    t15 = xsi_base_array_concat(t15, t36, t18, (char)97, t1, t37, (char)97, t6, t40, (char)101);
    t21 = (t0 + 1832U);
    t42 = *((char **)t21);
    t44 = ((IEEE_P_2592010699) + 4024);
    t45 = (t0 + 9196U);
    t21 = xsi_base_array_concat(t21, t43, t44, (char)97, t15, t36, (char)97, t42, t45, (char)101);
    t46 = (t0 + 1672U);
    t47 = *((char **)t46);
    t49 = ((IEEE_P_2592010699) + 4024);
    t50 = (t0 + 9180U);
    t46 = xsi_base_array_concat(t46, t48, t49, (char)97, t21, t43, (char)97, t47, t50, (char)101);
    t51 = xsi_get_transient_memory(4U);
    memset(t51, 0, 4U);
    t52 = t51;
    if (-1 == 1)
        goto LAB26;

LAB27:    t39 = 0;

LAB28:    t53 = (t39 - 0);
    t54 = (t53 * 1);
    t55 = (1U * t54);
    t56 = (t52 + t55);
    t57 = (0 - 3);
    t58 = (t57 * -1);
    t58 = (t58 + 1);
    t59 = (1U * t58);
    memset(t56, (unsigned char)2, t59);
    t62 = ((IEEE_P_2592010699) + 4024);
    t64 = (t63 + 0U);
    t65 = (t64 + 0U);
    *((int *)t65) = 0;
    t65 = (t64 + 4U);
    *((int *)t65) = 3;
    t65 = (t64 + 8U);
    *((int *)t65) = 1;
    t66 = (3 - 0);
    t67 = (t66 * 1);
    t67 = (t67 + 1);
    t65 = (t64 + 12U);
    *((unsigned int *)t65) = t67;
    t60 = xsi_base_array_concat(t60, t61, t62, (char)97, t46, t48, (char)97, t51, t63, (char)101);
    t67 = (10U + 2U);
    t68 = (t67 + 4U);
    t69 = (t68 + 12U);
    t70 = (t69 + 4U);
    t3 = (32U != t70);
    if (t3 == 1)
        goto LAB29;

LAB30:    t65 = (t0 + 5944);
    t71 = (t65 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memcpy(t74, t60, 32U);
    xsi_driver_first_trans_fast(t65);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    t12 = (unsigned char)1;
    goto LAB19;

LAB20:    t22 = 31;
    goto LAB22;

LAB23:    t29 = 21;
    goto LAB25;

LAB26:    t39 = 3;
    goto LAB28;

LAB29:    xsi_size_not_matching(32U, t70, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 5688);
    t15 = (t8 + 56U);
    t18 = *((char **)t15);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t22 = (31 - 30);
    t24 = (t22 * 1U);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t37 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 30;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t23 = (0 - 30);
    t27 = (t23 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t5 = xsi_base_array_concat(t5, t36, t6, (char)97, t1, t37, (char)99, (unsigned char)2, (char)101);
    t27 = (31U + 1U);
    t3 = (32U != t27);
    if (t3 == 1)
        goto LAB36;

LAB37:    t8 = (t0 + 5944);
    t15 = (t8 + 56U);
    t18 = *((char **)t15);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 9228U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t36 + 12U);
    t22 = *((unsigned int *)t6);
    t24 = (1U * t22);
    t3 = (5U != t24);
    if (t3 == 1)
        goto LAB38;

LAB39:    t7 = (t0 + 5816);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB36:    xsi_size_not_matching(32U, t27, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(5U, t24, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(32U, t27, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(5U, t24, 0);
    goto LAB43;

}

static void work_a_1342915550_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6008);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5512);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1342915550_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 6072);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 5528);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1342915550_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    static char *nl0[] = {&&LAB6, &&LAB6, &&LAB5};

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(36, ng0);

LAB9:    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t5 = (t0 + 6136);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB6:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    t3 = (t0 + 5544);
    *((int *)t3) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}


extern void work_a_1342915550_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1342915550_3212880686_p_0,(void *)work_a_1342915550_3212880686_p_1,(void *)work_a_1342915550_3212880686_p_2,(void *)work_a_1342915550_3212880686_p_3};
	xsi_register_didat("work_a_1342915550_3212880686", "isim/system_test_isim_beh.exe.sim/work/a_1342915550_3212880686.didat");
	xsi_register_executes(pe);
}
