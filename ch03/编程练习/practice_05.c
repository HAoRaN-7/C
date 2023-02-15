// 提示用户输入年龄，然后显示该年龄对应的秒数
#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("The number of seconds corresponding to your age is: %e",
            age * 3.156e7);
    /* 一年大约有3.156e7秒 */

    return 0;
}