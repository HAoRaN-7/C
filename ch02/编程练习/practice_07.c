// 编程练习07 -- smile 定义函数
#include <stdio.h>

void sml(void);

int main(void)
{
    sml(); sml(); sml();
    printf("\n");
    sml(); sml();
    printf("\n");
    sml();

    return 0;
}

void sml(void)
{
    printf("Smile!");
}