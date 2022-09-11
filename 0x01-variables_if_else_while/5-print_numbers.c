#include<stdio.h>

/**
 * main - Main function
 * Description: C program that print all single digit numbers
 * of base 10 starting from 0 followed by new line
 * Return: 0
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
