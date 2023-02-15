// 提示用户输入身高（英寸），然后以厘米为单位显示身高
#include <stdio.h>

int main(void)
{
    int height;

    printf("Enter you height in inches: ");
    scanf("%d", &height);
    printf("In centimeters, your height would be: %f", height * 2.54);
    /* 1英寸相当于2.54厘米 */

    return 0;
}