#include <stdio.h>
/**
  * main - main function
  * @void: no argument
  * Return: 0 
  */

int main(void)
{
	int z;

	z = 1;
	printf("%d", z);
	for (z = 2; z <= 100; ++z)
	{
		if (z % 3 == 0 && z % 15 != 0)
		{
			printf(" Fizz");
		}
		else if (z % 5 == 0 && z % 15 != 0)
		{
			printf(" Buzz");
		}
		else if (z % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", z);
		}
	}
	printf("\n");
	return (0);
}
