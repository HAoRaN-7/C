// 通过试验观察系统如何处理整数的上溢、浮点数的上溢和下溢
#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    float j = 3.e38;
    float k = 0.1234e-38;

    printf("i = %d; i + 1 = %d\n", i, i + 1);
    printf("j = %e; j * 10 = %e\n", j, j * 10.0f);
    printf("k = %e; j / 10 = %e\n", k, k / 10.0f);
    /* 扩展：test_06.c */

    return 0;
}