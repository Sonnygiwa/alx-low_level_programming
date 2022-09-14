#include"main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 * @n: takes in integer type input for function
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
