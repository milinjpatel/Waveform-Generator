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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/counter13bit.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_2873140351_3212880686_p_0(char *t0)
{
    char t10[16];
    char t18[16];
    char t21[16];
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
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);

LAB6:    t2 = (t0 + 3240);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 3240);
    *((int *)t6) = 0;
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5304U);
    t6 = (t0 + 5353);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 12;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (12 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t6, t10);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5304U);
    t6 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t10, t4, t2, 1);
    t7 = (t10 + 12U);
    t14 = *((unsigned int *)t7);
    t29 = (1U * t14);
    t3 = (13U != t29);
    if (t3 == 1)
        goto LAB16;

LAB17:    t11 = (t0 + 3336);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 13U);
    xsi_driver_first_trans_fast(t11);

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

LAB11:    xsi_set_current_line(18, ng0);
    t12 = (t0 + 1032U);
    t15 = *((char **)t12);
    t12 = (t0 + 5366);
    t19 = ((IEEE_P_2592010699) + 4024);
    t20 = (t0 + 5288U);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 1;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (1 - 0);
    t14 = (t24 * 1);
    t14 = (t14 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t14;
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t15, t20, (char)97, t12, t21, (char)101);
    t14 = (11U + 2U);
    t5 = (13U != t14);
    if (t5 == 1)
        goto LAB14;

LAB15:    t23 = (t0 + 3336);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t17, 13U);
    xsi_driver_first_trans_fast(t23);
    goto LAB12;

LAB14:    xsi_size_not_matching(13U, t14, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(13U, t29, 0);
    goto LAB17;

}

static void work_a_2873140351_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5304U);
    t3 = (t0 + 5368);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 0);
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


extern void work_a_2873140351_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2873140351_3212880686_p_0,(void *)work_a_2873140351_3212880686_p_1};
	xsi_register_didat("work_a_2873140351_3212880686", "isim/sincos_test_isim_beh.exe.sim/work/a_2873140351_3212880686.didat");
	xsi_register_executes(pe);
}
