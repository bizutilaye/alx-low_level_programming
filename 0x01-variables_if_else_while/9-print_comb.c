#include <stdio.h>
/**
 * main - All possiblities
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putcher(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
