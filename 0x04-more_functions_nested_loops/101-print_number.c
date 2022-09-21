#include "main.h"

/**
 * print_number - printing an integer.
 * @n: integer variable.
 * Return: none
 */

void print_number(int n)
{
	unsigned int num = n;

	/*checkding negative ineteger*/
	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + 48);
}
