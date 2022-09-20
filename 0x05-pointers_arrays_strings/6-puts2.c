#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			putchar(str[a]);
		}
		a++;
	}
	putchar('\n');
}
