#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	long int b, f;

	b = 612852475143;
	for (f = 2; f <= b; f++)
	{
		if (b % f == 0)
		{
			b /= f;
			f--;
		}
	}
	printf("%ld\n", f);
	return (0);
}
