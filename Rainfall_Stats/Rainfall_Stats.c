// Programmer:		Au'Nystee Wakefield & Octavia Hunnicutt
// Date:			3/30/2023
// Program Name:	Rainfall Stats
// Chapter:			Chapter 5 - Arrays
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	const int MONTHS_PER_YEAR = 12; // Number of months in a year. Used for iterating through the following arrays.
	const char MONTH_NAMES[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	double monthlyRainfallInches[12]; // Array storing inches of rainfall per month from input. Parallel to the MONTH_NAMES array
	int i = 0; // Iterable

	// *** INPUT ***
	for (i = 0; i < MONTHS_PER_YEAR; ++i)
	{
		printf("Enter the rainfall (in inches) for %s: ", MONTH_NAMES[i]);
		scanf("%lf", &monthlyRainfallInches[i]);
	}

	// *** PROCESSING ***


	// *** OUTPUT ***

	printf("The rainfall that was entered was:\n");
	// The first half of the data will be displayed by these two for loops, hence the (MONTHS_PER_YEAR / 2).
	for (i = 0; i < (MONTHS_PER_YEAR / 2); ++i) { // This shows the month names
		printf("%s\t", MONTH_NAMES[i]);
	}
	printf("\n");
	for (i = 0; i < (MONTHS_PER_YEAR / 2); ++i) { // This prints the entered rainfall inches associated with the previous month names.
		printf("%.1lf\t", monthlyRainfallInches[i]);
	}
	printf("\n");
	// Now we do that again for the other half. To do so we start i at (MONTHS_PER_YEAR / 2) instead of at 0
	for (i = (MONTHS_PER_YEAR / 2); i < MONTHS_PER_YEAR; ++i) { // This shows the month names
		printf("%s\t", MONTH_NAMES[i]);
	}
	printf("\n");
	for (i = (MONTHS_PER_YEAR / 2); i < MONTHS_PER_YEAR; ++i) { // This prints the entered rainfall inches associated with the previous month names.
		printf("%.1lf\t", monthlyRainfallInches[i]);
	}
	printf("\n");

	return 0;
} // end main()