#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: string to print
 * Return: void
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
