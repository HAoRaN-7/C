// 提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量
#include <stdio.h>

int main(void)
{
    float cup;

    printf("Enter the number of cups: ");
    scanf("%f", &cup);
    printf("This capacity is equivalent to:\n");
    printf("%f pints\n%f ounces\n%f tablespoons\n%f teaspoons\n",
            cup / 2, cup * 8, cup * 16, cup * 48);
    /* 1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺 */

    return 0;
}