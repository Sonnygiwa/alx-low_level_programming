#include "main.h"

/**
 * main - main function
 * Description: C program that prints _putchar
 * followed by a new
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar";
	int times = 0;

	while (times < 8)
	{
		_putchar(c[times]);
		times++;
	}
	_putchar('\n');
	return (0);
}
