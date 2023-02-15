// 查看系统最大整数、最大浮点数、最小浮点数
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int biggest_int = INT_MAX;
    float biggest_flt = FLT_MAX;
    float smallest_flt = FLT_MIN;

    printf("%d\n", biggest_int);
    printf("%e\n", biggest_flt);
    printf("%e\n", smallest_flt);

    return 0;
}