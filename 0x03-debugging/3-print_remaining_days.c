#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @mon: month in number format
* @day: day of month
* @yr: year
*/

void print_remaining_days(int mon, int day, int yr)
{
	/**
	 * leap year when it can be divided
	 * by 100 and 400 or by 4 evenly
	*/
	if ((yr % 100 == 0 && yr % 400 == 0) || (yr % 4 == 0))
	{
		if (mon > 2 && day >= 60)
		{
			++day;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);

	}
	else
	{
		if (mon == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", mon, day - 31, yr);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
