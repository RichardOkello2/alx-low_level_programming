#include "main.h"
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	x = n;
	if ((num / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}