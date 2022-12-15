#include "main.h"

/**
 * print_diagonal - drawes diagonal on the terminal
 * @n: number of time character
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('92');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
