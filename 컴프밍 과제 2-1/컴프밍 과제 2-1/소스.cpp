#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e; 
	int reverse;

	printf("만의 자리를 입력해주세요");
	scanf("%d, ", &a);

	printf("천의 자리를 입력해주세요");
	scanf("%d, ", &b);

	printf("백의 자리를 입력해주세요");
	scanf("%d, ", &c);

	printf("십의 자리를 입력해주세요");
	scanf("%d, ", &d);

	printf("일의 자리를 입력해주세요");
	scanf("%d, ", &e);

	reverse = e * 10000 + d * 1000 + c * 100 + b * 10 + a;

	printf("역순의 자연수는 다음과 같습니다 : %d\n", reverse);

	return(0);

}