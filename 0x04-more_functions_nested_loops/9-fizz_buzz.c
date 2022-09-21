#include <stdio.h>

/**
  * main - function main
  * Description: Fizz Buzz Test
  * @void: nothing
  * Return: 0 Success
  */

int main(void)
{
	int c;

	c = 1;
	printf("%d", c);
	for (c = 2; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 15 != 0)
		{
			printf(" Fizz");
		}
		else if (c % 5 == 0 && c % 15 != 0)
		{
			printf(" Buzz");
		}
		else if (c % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", c);
		}
	}
	printf("\n");
	return (0);
}
