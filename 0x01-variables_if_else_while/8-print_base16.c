#include<stdio.h>
/**
 * main - Main fnction
 * Description: C program tha print numbers of base16 in lowercase
 * and followed by a new line
 * Return: 0
*/
int main(void)
{
	char num = '0';
	char letter  = 'a';

	while (num <= '9')
	{
		putchar(num);
		++num;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	return (0);
}

