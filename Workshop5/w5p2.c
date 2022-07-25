#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022
int main(void)
{
	int year, month;
	const int JAN = 1, DEC = 12;
	float m1,m2,m3, e1,e2,e3,av1,av2;
	int FEB, MAR, APR, MAY, JUN, JUL, AUG, SEPT, OCT,NOV;
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
		printf("\n*** Log Date Set ! ***");
	}
	printf("\n");
	if (month == 1)
	{
		printf("\n%d-JAN-01", year);
	}
	else if(month==2)
	{
		FEB = 2;
		printf("\n%d-FEB-01", year);
	}
	else if(month==3)
	{
		MAR = 3;
		printf("\n%d-MAR-01", year);
	}
	else if(month==4)
	{
		APR = 4;
		printf("\n%d-APR-01", year);
	}
	else if(month==5)
	{
		MAY = 5;
		printf("\n%d-MAY-01", year);
	}
	else if(month==6)
	{
		JUN = 6;
		printf("\n%d-JUN-01", year);
	}
	else if(month==7)
	{
		JUL = 7;
		printf("\n%d-JUL-01", year);
	}
	else if(month==8)
	{
		AUG = 8;
		printf("\n%d-AUG-01", year);
	}
	else if(month==9)
	{
		SEPT = 9;
		printf("\n%d-SEPT-01", year);
	}
	else if(month==10)
	{
		OCT = 10;
		printf("\n%d-OCT-01", year);
	}
	else if(month==11)
	{
		NOV = 11;
		printf("\n%d-NOV-01", year);
	}
	else if(month==12)
	{
		printf("\n%d-DEC-01",year);
	}
	else{}
	//for day 1
	morning:
		printf("\nMorning rating(0.0 - 5.0) :");
		scanf("%f", &m1);
		if (m1 < 0 || m1 > 5.0)
		{
			printf("    ERROR : Rating must be between 0.0 and 5.0 inclusive!");
			goto morning;
		}
	evening:
	printf("\nEvening rating(0.0 - 5.0) :");
	scanf("%f", &e1);
	if(e1<0 || e1>5.0)
	{
        printf("    ERROR : Rating must be between 0.0 and 5.0 inclusive!");
		goto evening;
	}
	printf("\n");
	// for day 2
	if (month == 1)
	{
		printf("\n%d-JAN-02", year);
	}
	else if(month==2)
	{
		FEB = 2;
		printf("\n%d-FEB-02", year);
	}
	else if(month==3)
	{
		MAR = 3;
		printf("\n%d-MAR-02", year);
	}
	else if(month==4)
	{
		APR = 4;
		printf("\n%d-APR-02", year);
	}
	else if(month==5)
	{
		MAY = 5;
		printf("\n%d-MAY-02", year);
	}
	else if(month==6)
	{
		JUN = 6;
		printf("\n%d-JUN-02", year);
	}
	else if(month==7)
	{
		JUL = 7;
		printf("\n%d-JUL-02", year);
	}
	else if(month==8)
	{
		AUG = 8;
		printf("\n%d-AUG-02", year);
	}
	else if(month==9)
	{
		SEPT = 9;
		printf("\n%d-SEPT-02", year);
	}
	else if(month==10)
	{
		OCT = 10;
		printf("\n%d-OCT-02", year);
	}
	else if(month==11)
	{
		NOV = 11;
		printf("\n%d-NOV-02", year);
	}
	else if(month==12)
	{
		printf("\n%d-DEC-02",year);
	}
	else{}
	m0:
	printf("\nMorning rating(0.0 - 5.0) :");
	scanf("%f", &m2);
	if(m2<0 || m2>5.0)
	{
		printf("    ERROR : Rating must be between 0.0 and 5.0 inclusive!");
		goto m0;
	}
	
	e0:
	printf("\nEvening rating(0.0 - 5.0) :");
	scanf("%f", &e2);
	if(e2<0 || e2>5.0)
	{
        printf("    ERROR : Rating must be between 0.0 and 5.0 inclusive!");
		goto e0;
	}
	printf("\n");
	// for day 3
	if (month == 1)
	{
		printf("\n%d-JAN-03", year);
	}
	else if(month==2)
	{
		FEB = 2;
		printf("\n%d-FEB-03", year);
	}
	else if(month==3)
	{
		MAR = 3;
		printf("\n%d-MAR-03", year);
	}
	else if(month==4)
	{
		APR = 4;
		printf("\n%d-APR-03", year);
	}
	else if(month==5)
	{
		MAY = 5;
		printf("\n%d-MAY-03", year);
	}
	else if(month==6)
	{
		JUN = 6;
		printf("\n%d-JUN-03", year);
	}
	else if(month==7)
	{
		JUL = 7;
		printf("\n%d-JUL-03", year);
	}
	else if(month==8)
	{
		AUG = 8;
		printf("\n%d-AUG-03", year);
	}
	else if(month==9)
	{
		SEPT = 9;
		printf("\n%d-SEPT-03", year);
	}
	else if(month==10)
	{
		OCT = 10;
		printf("\n%d-OCT-03", year);
	}
	else if(month==11)
	{
		NOV = 11;
		printf("\n%d-NOV-03", year);
	}
	else if(month==12)
	{
		printf("\n%d-DEC-03",year);
	}
	else{}
	m1:
	printf("\nMorning rating(0.0 - 5.0) :");
	scanf("%f", &m3);
	if(m3<0 || m3>5.0)
	{
		printf("    ERROR : Rating must be between 0.0 and 5.0 inclusive!");
		goto m1;
	}
	
	e1:
	printf("\nEvening rating(0.0 - 5.0) :");
	scanf("%f", &e3);
	if(e3<0 || e3>5.0)
	{
        printf("    ERROR : Rating must be between 0.0 and 5.0 inclusive!");
		goto e1;
	}
	//Summary
	printf("\n");
	printf("\nSummary");
	printf("\n========");
	printf("\nMorning Total rating : %.3f", m1 + m2 + m3);
	printf("\nEvening total rating : %.3f", e1 + e2 + e3);
	printf("\n-----------------------------");
	printf("\nOverall total rating : %.3f", (m1 + m2 + m3) + (e1 + e2 + e3));
	printf("\n");
	av1 = (m1 + m2 + m3) / 3;
	av2 = (e1 + e2 + e3) / 3;
	printf("\nAverage morning rating : %.1f", av1);
	printf("\nAverage evening rating : %.1f", av2);
	printf("\n-----------------------------");
	printf("\nAverage overall rating : %.1f", (av1 + av2) / 2);

	return 0;
}