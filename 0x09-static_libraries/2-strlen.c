#include "main.h"
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: pointer to the string
 * Return: void
*/

int _strlen(char *s)
{
	int counting = 0;

	while (*s != '\0')
	{
		counting++;
		s++;
	}
	return (counting);
}
