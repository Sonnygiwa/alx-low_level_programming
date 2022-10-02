#include "main.h"

/**
 *reverse_array - reverses the content of an array of integer
 *@a: pointer to integer
 *@n: number of elements in array
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}

