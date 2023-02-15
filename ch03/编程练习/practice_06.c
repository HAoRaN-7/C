// 提示用户输入水的夸脱数，并显示水分子的数量
#include <stdio.h>

int main(void)
{
    int quart;

    printf("Enter the quart of water: ");
    scanf("%d", &quart);
    printf("%d quarts of water includes %e water molecules",
            quart, quart * 950 / 3.e-23);
    /* 1个水分子的质量约为3.0e-23克，1夸脱水大约是950克 */

    return 0;
}