// C语言将字符常量视为int类型而不是char类型
#include <stdio.h>

int main(void)
{
    char grade = 'FATE';   /* 存储在32位的存储单元中，但只有后8位有效 */
    
    printf("%c", grade);

    return 0;
}