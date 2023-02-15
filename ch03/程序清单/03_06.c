// 程序清单3.6 altnames.c -- 可移植整数类型名
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32;

    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);

    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32); 
    /* 字符串拼接，等价于：printf("me32 = %" "d" "\n", me32);
    多个连续的字符串会合并成一个字符串 -- printf("me32 = %d\n", me32); */

    return 0;
}