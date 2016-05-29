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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/counter6bit.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1064320044_3212880686_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB6:    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 3648);
    *((int *)t6) = 0;
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t5 = (t3 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB2;

LAB5:    t4 = (t0 + 1152U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 5948U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t6, t2, 1);
    t11 = (t10 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t8 = (6U != t13);
    if (t8 == 1)
        goto LAB14;

LAB15:    t14 = (t0 + 3760);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 6U);
    xsi_driver_first_trans_fast(t14);
    goto LAB12;

LAB14:    xsi_size_not_matching(6U, t13, 0);
    goto LAB15;

}

static void work_a_1064320044_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(19, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3664);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1064320044_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(20, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5948U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t1, t3, t2, 16);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (6U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 3888);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 6U);
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 3680);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, t7, 0);
    goto LAB6;

}


extern void work_a_1064320044_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1064320044_3212880686_p_0,(void *)work_a_1064320044_3212880686_p_1,(void *)work_a_1064320044_3212880686_p_2};
	xsi_register_didat("work_a_1064320044_3212880686", "isim/sincos_test_isim_beh.exe.sim/work/a_1064320044_3212880686.didat");
	xsi_register_executes(pe);
}
