#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    char* s1 = malloc(sizeof(char) * 100);
    char* s2 = malloc(sizeof(char) * 100);
    char* s3 = malloc(sizeof(char) * 100);
    char* s4 = malloc(sizeof(char) * 100);

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);
    scanf("%s", s4);

    printf("\n\n%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);

    free(s1);
    free(s2);
    free(s3);
    free(s4);

    return 0;
}