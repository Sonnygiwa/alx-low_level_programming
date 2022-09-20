#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 * using _putchar twice
 * @n - the variable
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
