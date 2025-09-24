#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name;
    int English;
    int Korean;

    printf("이름, 영어점수, 국어점수를 각각 입력하세요: ");
    scanf("%c %d %d", name, &English, &Korean);

    printf("이름 영어 국어\n");
    printf("     성적 성적\n");
    printf("%c   %d   %d\n", name, English, Korean);

    return 0;
}
