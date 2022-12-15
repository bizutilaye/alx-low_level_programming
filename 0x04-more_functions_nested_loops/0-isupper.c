#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase
 * @c: input character
 * Return: 1 if it is an uppercase character otherwise, 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
