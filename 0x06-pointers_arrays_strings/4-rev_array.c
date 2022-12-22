#include "main.h"
/**
 * reverse_array - Reverse the content of an array
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */


void reverse_array(int *a, int n)
{
	int temb, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
