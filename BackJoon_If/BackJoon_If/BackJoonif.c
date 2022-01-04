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
	/*int A;
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
	}*/

	//14681
	//int x = 0;
	//int y = 0;
	//scanf_s("%d %d", &x, &y);
	//if (x > 0 && y > 0)
	//{
	//	printf("1");
	//}
	//else if (x < 0 && y> 0)
	//{
	//	printf("2");
	//}
	//else if (x < 0 && y < 0)
	//{
	//	printf("3");
	//}
	//else
	//{
	//	printf("4");
	//}


	//2884 //Èûµé¾ú´Ù
	int Hour = 0;
	int Min = 0;

	scanf_s("%d %d", &Hour, &Min);

	Min = Min - 45;
	if (Min > 59)
	{
		Hour = Hour + (Min / 60);
		Min = Min % 60;
	}
	else if (Min < 0)
	{
		Hour = Hour - 1;
		Min = 60 + Min;
	}

	if (Hour > 23)
	{
		Hour = Hour % 24;
	}
	else if (Hour < 0)
	{
		Hour = 24 + Hour;
	}

	printf("%d %d", Hour, Min);

	return 0;
}