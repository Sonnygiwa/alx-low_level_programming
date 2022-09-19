#include "main.h"

/**
 * swap_int - swap variable values
 * @a: pointer int 1
 * @b: pointer int 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
