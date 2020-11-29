#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	int b = 0;
	scanf("%d", &b);
	if (b % 400 == 0)
		printf("闰年\n");
	else if (b % 4 == 0 && b % 100 != 0)
		printf("闰年\n");
	else
		printf("非闰年\n");

	return 0;
}