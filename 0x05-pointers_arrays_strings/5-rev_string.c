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
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	i = 0;
	half = len / 2

		while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
