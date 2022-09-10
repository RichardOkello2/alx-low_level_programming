#include <stdio.h>
/**
 * main - program prints base 16 in lowercase
 * You can only use putchar function
 * Return: 0
 */
int main(void)
{
	int n = 48;
	int l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++
	}
	putchar('\n');
	return (0);
}
