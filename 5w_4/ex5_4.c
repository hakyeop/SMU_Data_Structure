#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

int main()
{
	int result;
	char* express = "35*62/-";
	printf("���� ǥ��� : %s", express);

	result = evalPostfix(express);
	printf("\n\n ���� ��� => %d\n", result);

	getchar();
	return 0;
}