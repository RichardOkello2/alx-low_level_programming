#include <stdio.h>
/**
 * main - print all possible digits sperated by ,
 * numbers in ascending orders
 * use putchar
 * Return: 0
 */
int main(voi)
{
	int n = 48;
	int com = 44;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(com);
			putchar(32);
		}
		n += 1;
	}
putchar('\n');
return (0);
}
