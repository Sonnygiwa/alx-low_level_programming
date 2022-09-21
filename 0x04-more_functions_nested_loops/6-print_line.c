#include "main.h"

/**
 * print_line - draws straight line in the terminal
 * @n: straight line
 * Return: no return.
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; ++line)
	{
		putchar(95);
	}
	putchar('\n');
}
