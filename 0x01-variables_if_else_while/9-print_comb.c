#include <stdio.h>

/**
 * main - Main function 
 * Description: C program that print combination of all single-digit numbers
 * using putchar and followed by a new line
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(48 + num);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}
	putchar('\n');

	return (0);
}
