#include <stdio.h>

int main(void)
{
	//1330
	/*int A, B;

	scanf_s("%d %d", &A, &B);
	if (A > B)
	{
		putchar('>');
	}
	else if (A < B)
	{
		putchar('<');
	}
	else
	{
		printf("==");
	}*/

	//9498
	/*int A;

	scanf_s("%d", &A);
	A <= 100;
	if (A >= 90)
	{
		putchar('A');
	}
	else if (A >= 80)
	{
		putchar('B');
	}
	else if (A >= 70)
	{
		putchar('C');
	}
	else if (A >= 60)
	{
		putchar('D');
	}
	else
	{
		putchar('F');
	}*/

	//2753
	int A;
	scanf_s("%d", &A);
	if (A % 4 == 0)
	{
		if (A % 100 != 0 || A % 400 == 0)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("0\n");
	}

	//14681
	//Ç®±â

	return 0;
}