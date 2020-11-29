#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a =0;
	scanf("%d", &a);
	int b = a / 10;
	
	switch (b)
	{
	case 9:
	case 10:
		printf("A");
		break;
	case 8:
		printf("B"); 
		break;
	case 7:
			printf("C");
			break;
	case 6:
		printf("D");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("E");
		break;


	}

	return 0;
}


