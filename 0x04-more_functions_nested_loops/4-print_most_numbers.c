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
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
			continue;
		putchar((c % 10) + '0');
	}
	putchar('\n');
}
