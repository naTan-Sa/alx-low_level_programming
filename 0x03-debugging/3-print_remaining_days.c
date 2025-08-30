#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - prints the day of year and remaining days
* @month: month in number format
* @day: day of year
* @year: year
*/
void print_remaining_days(int month, int day, int year)
{
	int leap;

    /* Correct leap year check */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		leap = 1;
	else
		leap = 0;

    /* Adjust day for leap year if date is after Feb */
	if (leap && month > 2)
		day++;

    /* Check for invalid Feb 29 in non-leap year */
	if (!leap && month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		return;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", leap ? 366 - day : 365 - day);
}
