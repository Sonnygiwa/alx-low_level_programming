#include<stdio.h>

/**
 * main - Entry 
 *
 * Description: C program that  print all aplhabet letters except q and e
 * followed by a new line
 * Return: 0
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
