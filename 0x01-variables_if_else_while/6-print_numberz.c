#include <stdio.h>

/**
 * main - Main Function
 * Description: C program that prints all single digit
 *  numbers of base 10 starting from 0 using  putchar
 * Return: 0
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
