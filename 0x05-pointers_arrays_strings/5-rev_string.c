#include <stdio.h>
#include "main.h"

/**
 * rev_string - main function.
 * @s: Pointer, the string to print
 * Description: This function reverses a string.
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char st;

	for (a = 0; s[l] != '\0'; ++a);
	for (b = 0; b < a / 2; ++b)
	{
		st = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = st;
	}

}
