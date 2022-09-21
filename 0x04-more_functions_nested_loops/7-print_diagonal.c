#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal.
 * @n: diagonal line integer
 * Return: no return.
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; ++x)
	{
		for (y = 0; y < x; y++)
		{
			putchar(' ');
		}

		putchar(92);
		if (x < (n - 1))
			putchar('\n');
	}
	putchar('\n');
}
