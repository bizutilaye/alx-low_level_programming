#include "main.h"
/**
 * print_last_digit- print last digit
 * @n: the number
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int last, p;

	last = n % 10;

	if (last < 0)
		last = -last;
	p = '0' + last;
	_putchar(p);
	return (last);
}
