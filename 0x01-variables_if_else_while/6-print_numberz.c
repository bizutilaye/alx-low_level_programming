#include <stdio.h>
/**
 * main - print single digit
 * Return: Always 0
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n);
	return (0);
