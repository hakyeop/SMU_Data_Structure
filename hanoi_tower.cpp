#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hanoi(int, char, char, char);

void hanoi(int i, char start, char work, char target)
{
	if (i == 1)
	{
		printf("%c에서 원반 1를(을) %c로 옮김\n", start, target);
	}
	else
	{
		hanoi(i - 1, start, target, work);
		printf("%c에서 원반 %d를(을) %c로 옮김\n", start, i, target);
		hanoi(i - 1, work, start, target);
	}
}

int main()
{
	hanoi(3, 'A', 'B', 'C');
}

