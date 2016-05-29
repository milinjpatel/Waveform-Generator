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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/Controller.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1208337864_3212880686_p_0(char *t0)
{
    char t17[16];
    char t18[16];
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
    char *t14;
    char *t15;
    char *t16;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    static char *nl0[] = {&&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24};

LAB0:    xsi_set_current_line(23, ng0);
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
LAB3:    t1 = (t0 + 5392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 5472);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t2 = (t0 + 5536);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5600);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t1 = (t0 + 5664);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t1 = (t0 + 5728);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    goto LAB3;

LAB20:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 3912U);
    t6 = *((char **)t5);
    t4 = *((unsigned char *)t6);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB30;

LAB31:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB34;

LAB35:
LAB26:    goto LAB19;

LAB21:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 5920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB22:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB23:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB39:    goto LAB19;

LAB24:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB25:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 2312U);
    t7 = *((char **)t5);
    t5 = (t0 + 5792);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 12U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 9146);
    t5 = (t0 + 5856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5600);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 5792);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memcpy(t14, t5, 12U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 9150);
    t5 = (t0 + 5856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 5920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 5536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB30:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 9154);
    t8 = ((IEEE_P_2592010699) + 4024);
    t14 = (t0 + 8964U);
    t15 = (t18 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t20;
    t7 = xsi_base_array_concat(t7, t17, t8, (char)97, t5, t14, (char)97, t1, t18, (char)101);
    t20 = (8U + 4U);
    t9 = (12U != t20);
    if (t9 == 1)
        goto LAB32;

LAB33:    t16 = (t0 + 5792);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 12U);
    xsi_driver_first_trans_fast_port(t16);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 9158);
    t5 = (t0 + 5856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 5920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 5664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB32:    xsi_size_not_matching(12U, t20, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 9162);
    t8 = ((IEEE_P_2592010699) + 4024);
    t14 = (t0 + 8980U);
    t15 = (t18 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t20;
    t7 = xsi_base_array_concat(t7, t17, t8, (char)97, t5, t14, (char)97, t1, t18, (char)101);
    t20 = (8U + 4U);
    t9 = (12U != t20);
    if (t9 == 1)
        goto LAB36;

LAB37:    t16 = (t0 + 5792);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 12U);
    xsi_driver_first_trans_fast_port(t16);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 9166);
    t5 = (t0 + 5856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 5920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 5728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB36:    xsi_size_not_matching(12U, t20, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 5472);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

}


extern void work_a_1208337864_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1208337864_3212880686_p_0};
	xsi_register_didat("work_a_1208337864_3212880686", "isim/system_test_isim_beh.exe.sim/work/a_1208337864_3212880686.didat");
	xsi_register_executes(pe);
}
