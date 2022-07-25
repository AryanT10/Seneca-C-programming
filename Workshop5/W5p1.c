#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022
int main(void)
{
	int year, month;
	const int JAN = 1, DEC = 12;

	printf("\nGeneral Well-Being Log");
	printf("\n=======================");
	repeat:
	printf("\nSet The year and month for the well-being log (YYYY MM) :");
	scanf("%d %d", &year, &month);

	if(year<MIN_YEAR || year>MAX_YEAR)
	{
		printf("ERROR : The year must be between 2012 and 2022 inclusive ");
		goto repeat;
	}
	else if(month<JAN || month>DEC)
	{
		printf("ERROR : Jan.(1) - Dec.(12)");
		goto repeat;
	}
	else if(month>12 && year>MAX_YEAR || year<MIN_YEAR)
	{
		printf("ERROR : The year must be between 2012 and 2022 inclusive ");
		printf("ERROR : Jan.(1) - Dec.(12)");
		goto repeat;
	}
	else if(month<=0 && year>MAX_YEAR || year<MIN_YEAR)
	{
		printf("ERROR : The year must be between 2012 and 2022 inclusive ");
		printf("ERROR : Jan.(1) - Dec.(12)");
		goto repeat;
	}
	else
	{
		printf("*** Log Date Set ! ***");
	}
	printf("\n");
	if (month == 1)
	{
		printf("\nLog Starting date : %d-JAN-01",year);
	}
	else if(month==2)
	{
		printf("\nLog Starting date : %d-FEB-01",year);
	}
	else if(month==3)
	{
		printf("\nLog Starting date : %d-MAR-01",year);
	}
	else if(month==4)
	{
		printf("\nLog Starting date : %d-APR-01",year);
	}
	else if(month==5)
	{
		printf("\nLog Starting date : %d-MAY-01",year);
	}
	else if(month==6)
	{
		printf("\nLog Starting date : %d-JUN-01",year);
	}
	else if(month==7)
	{
		printf("\nLog Starting date : %d-JUL-01",year);
	}
	else if(month==8)
	{
		printf("\nLog Starting date : %d-AUG-01",year);
	}
	else if(month==9)
	{
		printf("\nLog Starting date : %d-SEPT-01",year);
	}
	else if(month==10)
	{
		printf("\nLog Starting date : %d-OCT-01",year);
	}
	else if(month==11)
	{
		printf("\nLog Starting date : %d-NOV-01",year);
	}
	else if(month==12)
	{
		printf("\nLog Starting date : %d-DEC-01",year);
	}
	else{}
	return 0;
}