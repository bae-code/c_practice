#include <stdio.h>

int main()
{

    int num1, num2, num3;            // 정수형 변수 선언해용
    num1 = 10, num2 = 20, num3 = 30; // 변수에 값을 할당해용

    printf("%d %d %d\n", num1, num2, num3); // 변수에 할당된 값을 %d로 출력해용
    // %d 는 10진수(decimal)의 서식 지정자에용
    return 0;
}

/*  변수 이름은 영문과 밑줄 문자로 시작할 수 있지만 숫자로 시작할 수 없습니다.
    또한, C 언어의 키워드는 변수 이름으로 사용할 수 없습니다.
    변수 여러 개는 자료형 변수1, 변수2, 변수3; 형식으로 선언합니다. */