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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/counter_down.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_3702257057_3212880686_p_0(char *t0)
{
    char t16[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t4 = (t0 + 5300U);
    t9 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t8, t4, 0);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5300U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t16, t4, t2, 1);
    t8 = (t16 + 12U);
    t17 = *((unsigned int *)t8);
    t18 = (1U * t17);
    t1 = (11U != t18);
    if (t1 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 3336);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 11U);
    xsi_driver_first_trans_fast(t10);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(18, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t10 = (t0 + 3336);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 11U);
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB11:    xsi_size_not_matching(11U, t18, 0);
    goto LAB12;

}

static void work_a_3702257057_3212880686_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5300U);
    t3 = (t0 + 5347);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 9;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (9 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 3400);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 3256);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 3400);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_3702257057_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3702257057_3212880686_p_0,(void *)work_a_3702257057_3212880686_p_1};
	xsi_register_didat("work_a_3702257057_3212880686", "isim/system_test_isim_beh.exe.sim/work/a_3702257057_3212880686.didat");
	xsi_register_executes(pe);
}
