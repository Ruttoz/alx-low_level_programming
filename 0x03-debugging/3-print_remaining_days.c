
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
//store the leap year
    int leapYear = 0;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        leapYear = 1;
    }
//validate day and month
    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int daysMonth[] = {31, 28 + leapYear , 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayYear = 0;

    for (int i = 0; i < month - 1; i++)
    {
        dayYear += daysMonth[i];
    }

    dayYear += day;

    if (day > daysMonth[month - 1])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    printf("Day of the year: %d\n", dayYear);
    printf("Remaining days: %d\n", 365 + leapYear - dayYear );
}
