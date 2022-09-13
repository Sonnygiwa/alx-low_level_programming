#include "main.h"

/**
 * print_alphabet - printing alphabet lowercase
 * Description: C program function that prints
 * the alphabets in lowercase followed by new line
 *Return: 0
 */
void print_alphabet(void) /* using void print_alphabet */
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
