#include<stdio.h>

/**
 * main - Main function
 * Description: C program that prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: 0
*/

int main(void)
{
	char letter, newline;

	letter = 'z';
	newline = '\n';
	while (letter >= 'a')
	{
		putchar(letter);
		--letter;
	}
	putchar(newline);

	return (0);
}
