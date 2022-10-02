#include "main.h"

/**
 *_strcmp - compares strings
 *@s1: string character
 *@s2: string character
 *Return: a pointer to string
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}

	return (s1[a] - s2[a]);
}
