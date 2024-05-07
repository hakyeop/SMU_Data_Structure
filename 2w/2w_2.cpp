#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char s1[50];
	int cnt = 0;

	printf("문자열을 입력하세요 : ");
	scanf("%s", &s1);

	printf("\n입력된 문자열은\n");
	printf("\"%s\"\n", s1);
	printf("입니다.\n");

	while (1)
	{
		if (s1[cnt] == '\0')
			break;
		else
			cnt++;
	}
	printf("\n입력된 문자열의 길이 = %d\n", cnt);
}
