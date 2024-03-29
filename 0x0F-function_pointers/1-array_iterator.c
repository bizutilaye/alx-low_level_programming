#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print eache element of an array in new line
 * @array: an array
 * @size: how many element to print
 * @action: pointers to print in regular or hex
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
