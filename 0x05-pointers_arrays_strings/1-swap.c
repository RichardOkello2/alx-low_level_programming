#include "main.h"

/**
 * swap_int - swaps the valur of two integers.
 * @a: the first intergers to be swapped
 * @b: The second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
