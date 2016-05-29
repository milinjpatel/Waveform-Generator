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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/counter_flag.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_0794905291_3212880686_p_0(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3400);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB19;

LAB20:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1192U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1672U);
    t14 = *((char **)t4);
    t4 = (t0 + 5608U);
    t15 = (t0 + 5643);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 7;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (7 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t22 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t4, t15, t17);
    if (t22 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5608U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t17, t4, t2, 1);
    t8 = (t17 + 12U);
    t21 = *((unsigned int *)t8);
    t27 = (1U * t21);
    t1 = (8U != t27);
    if (t1 == 1)
        goto LAB17;

LAB18:    t11 = (t0 + 3560);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t5, 8U);
    xsi_driver_first_trans_fast(t11);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(18, ng0);
    t19 = (t0 + 3496);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);
    goto LAB15;

LAB17:    xsi_size_not_matching(8U, t27, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t2 = (t0 + 5608U);
    t6 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t5, t2, 0);
    if (t6 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5608U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t17, t4, t2, 1);
    t8 = (t17 + 12U);
    t21 = *((unsigned int *)t8);
    t27 = (1U * t21);
    t1 = (8U != t27);
    if (t1 == 1)
        goto LAB24;

LAB25:    t11 = (t0 + 3560);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t5, 8U);
    xsi_driver_first_trans_fast(t11);

LAB22:    goto LAB9;

LAB21:    xsi_set_current_line(20, ng0);
    t8 = (t0 + 3496);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB22;

LAB24:    xsi_size_not_matching(8U, t27, 0);
    goto LAB25;

}

static void work_a_0794905291_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3416);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0794905291_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0794905291_3212880686_p_0,(void *)work_a_0794905291_3212880686_p_1};
	xsi_register_didat("work_a_0794905291_3212880686", "isim/system_test_isim_beh.exe.sim/work/a_0794905291_3212880686.didat");
	xsi_register_executes(pe);
}
