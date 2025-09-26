#include <stdio.h>

int main(void)

{
	int year;

	printf("Type the current year:\n");

	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("The current year (%d) is a leap year\n", year);
	}
	else
	{
		printf("The current year (%d) isn't a leap year\n", year);
	}
	
}
