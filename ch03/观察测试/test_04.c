// 上溢与下溢  下溢没太理解
#include <stdio.h>

int main(void)
{
    float toobig = 3.4e38 * 100.0f;

    printf("%e\n", toobig);

    return 0;
}