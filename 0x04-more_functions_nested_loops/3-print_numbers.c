#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 * using _putchar twice
 * @n - the variable
 * Return: 0
 */

void print_numbers(void)
{
	char n = '0';
	
	while (n <= '9')
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return;
}
