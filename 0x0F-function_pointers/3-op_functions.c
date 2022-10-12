#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - ...
 * op_sub - ...
 * op_mul - ...
 * op_div - ...
 * op_mod - ...
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op-add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
