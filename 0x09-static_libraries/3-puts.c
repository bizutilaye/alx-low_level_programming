#include "main.h"
/**
 * _puts - a function
 * @str: a program to put a function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
