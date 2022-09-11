#include <stdio.h>

/**
 * main - C programming
 * Description: C program that prints various sizes
 * Return: 0
 */
int main(void)
{
	char g;
	int h;
	long int j;
	long long int k;
	float l;

	printf("Size of a char: %d byte(s)\n", sizeof(g));
	printf("Size of an int: %d byte(s)\n", sizeof(h));
	printf("Size of a long int: %d byte(s)\n", sizeof(j));
	printf("Size of a long long int: %d byte(s)\n", sizeof(k));
	printf("Size of float: %d byte(s)\n", sizeof(l));
	return (0);
}
