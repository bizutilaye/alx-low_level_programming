#include "main.h"
/**
 * strcat - concatenates strings
 * @dest: A pointer to the string to be concatenated up on
 * @src: The source string to be append
 * Return: Aconcatenated String
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}