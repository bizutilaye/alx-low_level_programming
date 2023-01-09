#include "main.h"

/**
 * _strchr - value and string
 * @s: input
 * @c: input
 * Return: o or value
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
