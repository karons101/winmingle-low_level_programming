#include <stdio.h>
#include "main.h"

/**
 *  * print_remaining_days - takes a date and prints how many days are
 *   * left in the year, considering leap years
 *    * @month: month in number format
 *     * @day: day of month
 *      * @year: year
 *       * Return: void
 *        */
void print_remaining_days(int month, int day, int year)
{
		int day_of_year;
			int days_in_year = 365;

				/* * Leap Year Check: Divisible by 4, except years divisible by 100 
				 * 	 * unless also divisible by 400. 
				 * 	 	 */
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
						{
									days_in_year = 366;
										}
					
					/* Invalid date check for Feb 29 on non-leap year */
					if (month == 2 && day == 29 && days_in_year == 365)
							{
										printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
												return;
													}

						day_of_year = convert_day(month, day);
							
							/* If it's a leap year AND the date is after February 29th, add the extra day */
							if (days_in_year == 366 && month > 2)
									{
												day_of_year++;
													}

								printf("Day of the year: %d\n", day_of_year);
									printf("Remaining days: %d\n", days_in_year - day_of_year);
}
