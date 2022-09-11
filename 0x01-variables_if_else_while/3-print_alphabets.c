#include <stdio.h>

/**
 * main - entry
 * Description: C program that  prints the alphabet in lowercase,
 * and uppercase followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putcha (alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
