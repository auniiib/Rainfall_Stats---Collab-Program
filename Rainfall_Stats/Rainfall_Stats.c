// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
int main(void)
{
	// Constant and Variable Declarations

	const int MONTHS_PER_YEAR = 12; // Number of months in a year. Used for iterating through the following arrays.
	const char MONTH_NAMES[12][4] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	double monthlyRainfallInches[12]; // Array storing inches of rainfall per month from input. Parallel to the MONTH_NAMES array
	int i = 0; // Iterable
	double totalRain = 0; // Variable to store the total amount of rainfall
	double averageRain; // Variable to store the average amount of rainfall
	double lowestAmount = 0.0; // Variable to store the lowestAmount of rainfall 
	double highestAmount = 0.0; // Variable to store the highestAmount of rainfall
	char x; // Placeholder varible to get the month of the highestAmount of rainfall
	char y; // Placeholder varible to get the month of the lowestAmount of rainfall

	// *** INPUT ***
	for (i = 0; i < MONTHS_PER_YEAR; ++i)
	{
		printf("Enter the rainfall (in inches) for %s: ", MONTH_NAMES[i]);
		scanf("%lf", &monthlyRainfallInches[i]);
	}

	// *** PROCESSING ***
	for (i = 0; i < MONTHS_PER_YEAR; ++i)
	{
		totalRain = totalRain + monthlyRainfallInches[i]; // the rainfall for each month will accumulate into the totalRain variable
	}

	averageRain = totalRain / MONTHS_PER_YEAR; // use the totalRain variable and divided it by the const amount of months per year

	highestAmount = monthlyRainfallInches[0];
	lowestAmount = monthlyRainfallInches[0];

	for (i = 0; i < MONTHS_PER_YEAR; ++i)
	{
		//  if the current value is larger
		if (monthlyRainfallInches[i] > highestAmount) 
		{ // the for loop runs through each month and as the value in monthlyRainfallInches 
			highestAmount = monthlyRainfallInches[i]; // is higher than the value of highestAmount. the value is then assigned as the highestAmount
			 // the iterable is assigned to x as a placeholder to put within the MONTHS_NAMES array.
		}
		if (monthlyRainfallInches[i] < lowestAmount) 
		{ // the for loop runs through each month and as the value in monthlyRainfallInches
			lowestAmount = monthlyRainfallInches[i]; // is lower than the value of lowestAmount. the value is then assigned as the lowestAmount
			 // the iterable is assigned to y as a placeholder to put within the MONTHS_NAMES array.
		}
		
	}

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

	printf("The total rain that fell was %.1lf inches.", totalRain);
	printf("\n");
	printf("The average monthly rainfall was %.1lf inches.", averageRain);
	printf("\n");
	printf("The lowest monthly rainfall was %.1lf inches in %s.", lowestAmount);
	printf("\n");
	printf("The highest monthly rainfall was %.1lf inches in %s.", highestAmount);
	printf("\n");

	return 0;
} // end main()
