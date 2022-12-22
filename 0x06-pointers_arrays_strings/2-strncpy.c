#include "main.h"
/**
 * _strncpy - copy an inputed number
 * @dest: The buffer storing the string copy
 * @src: the source string to be copie
 *@n: The maximum number of bytes
 * Return: Apointer to the resualting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
