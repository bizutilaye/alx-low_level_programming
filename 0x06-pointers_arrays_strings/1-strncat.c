#include "main.h"
/**
 * _strncat - This function appends the src string to the dest sring it will use at most n bytes from src
 * @dest: the string to be uppend on
 * @src: the string to be appendto dest
 * @n: the number of bytes from src
 * Return: A pointer to thr resualt string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
