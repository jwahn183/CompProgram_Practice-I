#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Eng;
	int Kor;
	char Name;

	printf("영어:");
	scanf("%d", &Eng);
	printf("국어:");
	scanf("%d", &Kor);
	printf("이름:");
	scanf("%c", Name);

	printf("이름 영어 국어\n");
	printf("     성적 성적\n");
	printf("%c   %d   %d\n", Name, Eng, Kor);

	return 0;

}