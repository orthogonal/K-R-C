#include <stdio.h>
#include <ctype.h>

int day_of_the_year(int year, int month, int day);

/* Compile with cc mtdtest.c month_to_day.c; you don't include month_to_day.c or you'll get an ld:duplicate symbol error. */

main()
{
	printf("%d\n", day_of_the_year(2012, 2, 30));
	return 0;
}