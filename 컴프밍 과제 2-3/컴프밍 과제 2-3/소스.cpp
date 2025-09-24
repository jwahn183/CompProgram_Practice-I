#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Eng, Kor;
	char Name;
	int Sum, Avg;

	printf("영어:");
	scanf("%d", &Eng);
	printf("국어:");
	scanf("%d", &Kor);
	printf("이름:");
	scanf(" %c", &Name); //%c 앞에 띄어쓰기, white space

	Sum = Eng + Kor;
	Avg = (Eng + Kor) / 2;

	printf("이름 영어 국어 전체 평균\n");
	printf("     성적 성적 성적 성적\n");
	printf("%c   %d   %d   %d   %d\n", Name, Eng, Kor, Sum, Avg);

	return (0);

}