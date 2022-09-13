#include "main.h"

/**
 * print_alphabet_x10 - C program that prints 10 times the alphabet
 * in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int times;

	times = 0;
	while (times <= 9)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			++alphabet;
		}
		_putchar(10);
		++time;
	}
}
