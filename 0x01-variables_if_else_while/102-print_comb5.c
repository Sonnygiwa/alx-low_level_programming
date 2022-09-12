#include<stdio.h>

/**
 * main - main function
 * Description: C program that prints all possible
 * combinations of two digits
 * Return: 0
 */
int main(void)
{
	int firstnum = 0, secondnum;

	while (firstnum <= 99)
	{
		secondnum = firstnum;
		while (secondnum <= 99)
		{
			if (secondnum != firstnum)
			{
				putchar((firstnum / 10) + 48);
				putchar((firstnum % 10) + 48);
				putchar(' ');
				putchar((secondnum / 10) + 48);
				putchar((secondnum % 10) + 48);

				if (firstnum != 98 || secondnum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondnum++;
		}
		firstnum++;
	}
	putchar('\n');
	return (0);
}
