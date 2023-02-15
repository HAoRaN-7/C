// 程序清单3.4 print2.c -- 更多printf()的特性
#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;  /* int为32位和short为16位的系统 */
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    /* 查看不同整数类型所占字节数 */
    printf("sizeof(short int) = %zd\n", sizeof(short int));
    printf("sizeof(int) = %zd\n", sizeof(int));
    printf("sizeof(long int) = %zd\n", sizeof(long int));
    printf("sizeof(long long int) = %zd\n", sizeof(long long int));

    return 0;
}