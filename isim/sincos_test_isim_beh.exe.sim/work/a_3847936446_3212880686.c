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
static const char *ng0 = "C:/My Folder/Cal Poly Pomona/Homework/ECE424/lab3/ROM_address.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3847936446_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(19, ng0);

LAB3:    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 4848U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t2);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t5);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t10 = (t3 + t9);
    t11 = *((int *)t10);
    t12 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t1, t11, 12);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t14 = (t14 * 1U);
    t15 = (12U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 2872);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t12, 12U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 2792);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, t14, 0);
    goto LAB6;

}


extern void work_a_3847936446_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3847936446_3212880686_p_0};
	xsi_register_didat("work_a_3847936446_3212880686", "isim/sincos_test_isim_beh.exe.sim/work/a_3847936446_3212880686.didat");
	xsi_register_executes(pe);
}
