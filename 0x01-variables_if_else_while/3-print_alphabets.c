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
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
