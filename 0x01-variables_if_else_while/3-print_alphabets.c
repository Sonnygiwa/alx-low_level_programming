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

	char ALPHABET = 'A';

	while  (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}

	putchar('\n');
	return (0);
}
