#include "main.h"
/**
 * print_alphabet_×10 - makes alphabet 10 times
 * Return: void
 */
void print_alphabet_×10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
