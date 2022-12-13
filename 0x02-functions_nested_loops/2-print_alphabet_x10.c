#include "main.h"
/**
 * print_alphabet_x10 - 10times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	int len;

	for (ten = 0; ten <= 9; ten++)
	{
		for (len = 'a'; len <= 'z'; len++)
		{
			_putchar(len);
		}
		_putchar('\n');
	}
}
