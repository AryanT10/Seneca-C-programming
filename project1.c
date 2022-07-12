#include <stdio.h>
struct student 
{
    char Name[50];
	int roll;
	float marksenglish,marksmaths,marksscience;
} s[5];

int main() 
{
    int i,avg;
    printf("Enter information of students:\n");

    
    for (i = 0; i < 5; ++i) 
	{
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter  name: ");
        scanf("%s", s[i].Name);
        printf("Enter marks in English: ");
        scanf("%f", &s[i].marksenglish);
		printf("Enter marks in Maths: ");
        scanf("%f", &s[i].marksmaths);
		printf("Enter marks in science: ");
        scanf("%f", &s[i].marksscience);
    }
    printf("Information:\n\n");

   
    for (i = 0; i < 5; ++i) 
	{
        printf("\nRoll number: %d\n", i + 1);
        printf(" name: ");
        puts(s[i].Name);
        printf("\nMarks in English: %.1f", s[i].marksenglish);
		  printf("\nMarks in Maths: %.1f", s[i].marksmaths);
		    printf("\nMarks in Science: %.1f", s[i].marksscience);
            avg = (s[i].marksenglish + s[i].marksmaths + s[i].marksscience) / 3;
            printf("\n Average marks are %d", avg);
            printf("\n");
	}

	for (i = 0; i < 5;i++)
	{
		if
		{
		
		}
	}
}