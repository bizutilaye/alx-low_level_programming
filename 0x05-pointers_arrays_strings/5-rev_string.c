#include "main.h"

/**
 * rev_string - a function that return a reversed string
 * @s: parameter s
 */

void rev_string(char *s)
{
	int start, end, temp, count = 0;


	while (s[count] != '\0')
	{
		count++;
	}

	end = count - 1;
	start = 0;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
