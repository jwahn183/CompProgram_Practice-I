#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name1[4]; // 알파벳 3글자 이하 -> 배열 사용 -> [4]인 이유? -> 배열의 마지막 원소로 '널문자 \0' 존재 -> 그래서 3 아닌 4로
	printf("첫번째 학생의 이름은?");
	scanf("%s", name1); // 배열 이름 자체가 이미 주소의 위치를 뜻함
	char name2[4];
	printf("두번째 학생의 이름은?");
	scanf("%s", name2);

	int English1; // 성적을 0~100 자연수로 제한하는 방법이 있을까?
	printf("첫번째 학생의 영어 성적은?");
	scanf("%d", &English1);
	int English2;
	printf("두번째 학생의 영어 성적은?");
	scanf("%d", &English2);

	int Korean1;
	printf("첫번째 학생의 국어 성적은?");
	scanf("%d", &Korean1);
	int Korean2;
	printf("두번째 학생의 국어 성적은?");
	scanf("%d", &Korean2);

	printf("이름: %s", name1);
	printf("영어점수: %d", English1);
	printf("국어점수: %d", Korean1);

	printf("이름: %s", name2);
	printf("영어점수: %d", English2);
	printf("국어점수: %d", Korean2);

	return (0);

}