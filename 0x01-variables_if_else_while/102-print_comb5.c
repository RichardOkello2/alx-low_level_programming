#include <stdio.h>
/**
 * main - prints all possible combinations of 2 digits
 * rang from 0 to 99
 * sperated by ,followed by space
 * printed wuth two digit as 01
 * Return: 0
 */
int main(void)
{
	int n1 = 48;
	int a = 0;
	int b;
	int com = 44;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + n1);
			putchar((a % 10) + n1);
			putchar(32);
			putchar((b / 10) + n1);
			putchar((b % 10) + n1);
			if (a != 98 || b != 99)
			{
				putchar(com);
				putchar(32);
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
