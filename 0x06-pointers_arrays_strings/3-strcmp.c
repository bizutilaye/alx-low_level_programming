#include "main.h"

/**
 * _strcmp - compairs pointers two strings
 * @s1: A pointer of first string
 * @s2: A pointer of second string
 * Return: the difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
