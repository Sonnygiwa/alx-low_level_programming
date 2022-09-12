#include <stdio.h>

/**
 * main - main function
 * Description: C program that prints all possible different
 * combinations of two digits
 * with Numbers seperated by , followed by a space
 * numbers printed in ascending order, with two digits
 * using only putchar function
 * Return: 0
*/
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10; 

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		++a;
	}
	putchar('\n');
	return (0);
}
