// 程序清单3.7 showf_pt.c -- 以两种方式显示float类型的值
#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);  /* C99特性 */
    printf("%f can be written %e\n", abet, abet);
    __mingw_printf("%Lf can be written %Le\n", dip, dip);  /* ？？？ */

    /* 查看不同浮点数类型所占的字节数 */
    printf("sizeof(float) = %zd\n", sizeof(float));
    printf("sizeof(double) = %zd\n", sizeof(double));
    printf("sizeof(long double) = %zd\n", sizeof(long double));

    return 0;
}