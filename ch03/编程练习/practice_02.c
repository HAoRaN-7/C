// 提示输入一个ASCII码值，然后打印输入的字符
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter a ASCII value(0 - 127): ");
    scanf("%d", &ch);
    printf("ASCII %d is %c", ch, ch);

    return 0;
}