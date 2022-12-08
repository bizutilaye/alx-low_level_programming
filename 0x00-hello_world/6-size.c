#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: % bytes(s)\n", sizeof(char));
	printf("Size of an int: % bytes(s)\n", sizeof(int));
	printf("Size of a long int: % bytes(s)\n", sizeof(long int));
	printf("Size of a long long long int: % bytes(s)\n", sizeof(long long int));
	printf("Size of a float: % bytes(s)\n", sizeof(float));
}
