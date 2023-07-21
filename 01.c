#include <stdio.h>
// 무조건 적어 줘야해용 , 안적어줘도 printf,scanf는 된다고 해용

// 1 줄 주석 이에용

/* 이거는 여러 줄
주석 이에용 */

int main(void)
{
    printf("%s, %s %s\n", "\"Hello", "C", "Language\"" /* 여기는 범위 주석이에용 */);
    // \n을 띄워서 사용하면 보이지는 않지만 공백이 추가되어서 출력돼용
    int a = 1 + 2;
    return 0;
}
