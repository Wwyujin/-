#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	int b = 0;
	scanf("%d", &b);
	if (b % 400 == 0)
		printf("����\n");
	else if (b % 4 == 0 && b % 100 != 0)
		printf("����\n");
	else
		printf("������\n");

	return 0;
}