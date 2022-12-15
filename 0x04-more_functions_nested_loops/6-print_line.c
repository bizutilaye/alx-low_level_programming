#include "main.h"

/**
 * print_line - drawes a straight line in the terminal
 * @n: number of times for the _ line
 */
void print_line(n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
