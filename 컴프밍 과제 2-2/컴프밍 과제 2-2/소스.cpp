#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int a1, a2, a3, a4, a5;
	int reverse;

	printf("5자리 자연수를 입력해주세요");
	scanf("%d", &a);

	a1 = a % 10;
	a2 = (a / 10) % 10;
	a3 = (a / 100) % 10;
	a4 = (a / 1000) % 10;
	a5 = (a / 10000);

	reverse = a1 * 10000 + a2 * 1000 + a3 * 100 + a4 * 10 + a5;

	printf("역순의 자연수는 다음과 같습니다 : %d\n", reverse);

	return(0);

}