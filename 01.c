#include <stdio.h>

int main(void)
{
    int num01, num02;

    printf("첫 번째 정수를 입력하세요 : ");
    scanf("%d", &num01);
    printf("두 번째 정수를 입력하세요 : ");
    scanf("%d", &num02);

    printf("합은 %d 입니다.\n", num01 + num02);
    return 0;
}
