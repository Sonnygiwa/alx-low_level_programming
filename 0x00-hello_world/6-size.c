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

	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
