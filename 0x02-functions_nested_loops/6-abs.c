#include "main.h"
/**
 * -abs - Computes the absolute value of and integer.
 *  @c: The number to be computed.
 *  Return: Absolute value of numver ot zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		abs_val = c * -1;
		return (abs_val);
	}
return (c);
}
