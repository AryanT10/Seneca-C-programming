#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int no,limit,again;
	printf("\nGrocery shopping");
	printf("\n================");
	demo:
	printf("\nHow many APPLE do you need? :");
	scanf("%d", &no);
	
	if(no>=0)
	{
		
	}
	else
	{
		printf("\nERROR : Value must be 0 or more.");
		goto demo;
	}

	printf("\n");

	printf("\nHow many ORANGES do you need? :");
	scanf("%d", &no);
	
	if(no>=0)
	{
		
	}
	else
	{
		printf("\nERROR : Value must be 0 or more.");
		goto demo;
	}

	printf("\n");

	printf("\nHow many PEARS do you need? :");
	scanf("%d", &no);
	
	if(no>=0)
	{
		
	}
	else
	{
		printf("\nERROR : Value must be 0 or more.");
		goto demo;
	}

	printf("\n");

	printf("\nHow many TOMATOES do you need? :");
	scanf("%d", &no);
	
	if(no>=0)
	{
		
	}
	else
	{
		printf("\nERROR : Value must be 0 or more.");
		goto demo;
	}

	printf("\n");

	printf("\nHow many CABBAGES do you need? :");
	scanf("%d", &no);
	
	if(no>=0)
	{
		
	}
	else
	{
		printf("\nERROR : Value must be 0 or more.");
		goto demo;
	}
again:
	printf("\n");
	printf("\n---------------------------");
	printf("\nTime to pick the products !");
	printf("\n---------------------------");
	printf("\n");
	
	//Apples
	apple:
	printf("\nPick some APPLES... how many did you pick ? :");
	scanf("%d", &limit);
	if(limit<=10)
	{
		printf("\nGreat , that's the apples done !");
	}
	else
	{
		printf("\nERROR : You must pick atleast one !");
		goto apple;
	}

	//Pears
    pear:
	printf("\nPick some PEARS... how many did you pick ? :");
	scanf("%d", &limit);
	if(limit<=15)
	{
		printf("\nGreat , that's the pears done !");
	}
	else
	{
		printf("\nERROR : You must pick atleast one !");
		goto pear;
	}

	//Cabbages
    cabbage:
	printf("\nPick some CABBAGES... how many did you pick ? :");
	scanf("%d", &limit);
	if(limit<=15)
	{
		printf("\nGreat , that's the cabbages done !");
	}
	else
	{
		printf("\nERROR : You must pick atleast one !");
		goto cabbage;
	}

	//done

	printf("\nAll the items are picked !");
	printf("\n");
	printf("\nDo another Shopping ? :");
	scanf("%d", &again);

                                  // again and again
								  // repeat if pressed any key asides 0
	if(again==1)
	{
	printf("\n---------------------------");
	printf("\nTime to pick the products !");
	printf("\n---------------------------");
	printf("\n");
	
	//Oranges
	
	printf("\nPick some ORANGES... how many did you pick ? :");
	scanf("%d", &limit);
	if(limit<=20)
	{
		printf("\nGreat , that's the ORANGES done !");
	}
	else
	{
		printf("\nERROR : You must pick atleast one !");
	}
	
	//tomatoes

	printf("\nPick some TOMATOES... how many did you pick ? :");
	scanf("%d", &limit);
	if(limit<=15)
	{
		printf("\nGreat , that's the TOMATOES done !");
	}
	else
	{
		printf("\nERROR : You must pick atleast one !");
	}
    //done

	printf("\nAll the items are picked !");
	printf("\nDo another Shopping ? :");
	scanf("%d" ,&again);
	if(again<0)
	{
		goto again;
	}
	}

	else
	{
		printf("\nYour tasks are done for today - enjoy your free time !");
	}

	return 0;
}