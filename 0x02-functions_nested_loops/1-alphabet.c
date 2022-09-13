#include "main.h"

/**
 * void - void 
 * Description: C program function that prints
 * the alphabets in lowercase followed by new line
 *Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		++alphabet;
	}
	_putchar('\n');
}
