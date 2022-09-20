#include"main.h"

/**
 * print_most_numbers - prints the numbers
 * from 0 to 9 with a new line
 * do not print 2 and 4 and
 * only use _putchar twice
 * Return: 0
*/

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			putchar('0' + n);
		}

		n++;
	}
	putchar('\n');

}
