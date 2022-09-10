#include <stdio.h>
/**
 * main - program prints lowercase in reverse followed by new line
 * You are to use onl putchar twice
 * Return: 0
 */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n -= 1;
	}
	putchar('\n');
	return (0);
}
