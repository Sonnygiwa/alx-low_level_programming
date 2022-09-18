#include "main.h"

/**
 *print_numbers - print numbers from 0-9
 *Return: always 0
*/

void print_numbers(void)
{
	char a = '0';
	while (a <= '9')
	{
		_putchar (a);
		n++;
	}
	_putchar ('\n');
	return;
}
