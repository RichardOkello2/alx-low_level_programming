#include "main.h"
/**
 * _isalpha: Checks for alphabetic character
 * @c: The cahracter to be checked
 * Rwturn: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
/* Return: 1 if c is alphabet */
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
