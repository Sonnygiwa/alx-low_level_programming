#include <stdio.h>

/**
 * main - Printing the size of various types
 *
 * Return: 0
 */

int main(void)
{
	char m;
	int n;
	long int o;
	long long int p;
	float q;

	printf("Size of a char: %d byte(s)\n", sizeof(m));
	printf("Size of int: %d byte(s)\n", sizeof(n));
	printf("Size of long int: %d byte(s)\n", sizeof(o));
	printf("Size of long long int: %d byte(s)\n", sizeof(p));
	printf("Size of float: %d byte(s)\n", sizeof(q));
	return (0);
}
