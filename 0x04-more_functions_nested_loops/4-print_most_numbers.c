#include "main.h"

/**
 * print_most_numbers - print numbers 0 - 9 except 2and 4
 * Return: no return value
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
