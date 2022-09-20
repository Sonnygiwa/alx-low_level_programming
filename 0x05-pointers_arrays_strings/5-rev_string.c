#include <stdio.h>
#include "main.h"

/**
 * rev_string - main function.
 * @s: Pointer, the string to print
 * Description: This function reverses a string.
 * Return: void
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;

	return (a);
}
