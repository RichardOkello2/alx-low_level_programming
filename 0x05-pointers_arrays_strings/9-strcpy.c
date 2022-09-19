#include "main.h"
/**
 * _strcpy - copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest
 * @dest: a buffer to copy a string to.
 * @src: The source string to copy
 * Return: A pointer to the destination stei g @deat.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
