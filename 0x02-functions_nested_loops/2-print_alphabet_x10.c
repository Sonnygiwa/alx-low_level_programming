#include "main.h"

/**
 * print_alphabet_x10 - C program that prints 10 times the alphabet
 * in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;
	while (y <= 9)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			++x;
		}
		_putchar(10);
		++y;
	}
}
