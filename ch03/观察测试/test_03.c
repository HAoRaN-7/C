// 书写浮点型常量，可以省略小数部分 或 整数部分
#include <stdio.h>

int main(void)
{
    float x1 = 3.e16, x2 = .45e-6;

    printf("%e\n", x1);
    printf("%e\n", x2);
    /* 输出结果？？？ 无法表示，精度损失了？？？（以十进制显示） */

    return 0;
}