#include "main.h"

/**
 * print_square - printing a  squares.
 * @n: square size integer.
 * Return: no return.
 */

void print_square(int n)
{
	int i, b;

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < n; ++b)
		{
			putchar(35);
		}
		if (i != n - 1)
			putchar('\n');
	}
	putchar('\n');
}
