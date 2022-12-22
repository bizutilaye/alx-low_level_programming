#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse ordr
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
