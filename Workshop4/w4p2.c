#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

	int limit, again;
	int n1, n2, n3, n4, n5;
	int d1=0,d2=0,d3=0,d4=0,d5=0,x=0,y=0,z=0,a=0,b=0;
	again:
	printf("\nGrocery shopping");
	printf("\n================");
	//set limit for Apple
	ap:
	printf("\nHow many Apples do you need? :");
	scanf("%d",&n1);
	if(n1<0)
	{
		printf("ERROR : Value must be 0 or more.");
		goto ap;
	}
    //set limit for Oranges
	og:
	printf("\nHow many Oranges do you need? :");
	scanf("%d", &n2);
	if(n2<0)
	{
		printf("ERROR : Value must be 0 or more.");
		goto og;
	}
	//set limit for Pears
	p:
	printf("\nHow many Pears do you need? :");
	scanf("%d", &n3);
	if(n3<0)
	{
		printf("ERROR : Value must be 0 or more.");
		goto p;
	}
	//set limit for Tomatoes
	t:
	printf("\nHow many Tomatoes do you need? :");
	scanf("%d", &n4);
	if(n4<0)
	{
		printf("ERROR : Value must be 0 or more.");
		goto t;
	}
	//set limit for Cabbages
	c:
	printf("\nHow many Cabbages do you need? :");
	scanf("%d", &n5);
	if(n5<0)
	{
		printf("ERROR : Value must be 0 or more.");
		goto c;
	}
	//Limits asked 
	printf("\n---------------------------");
	printf("\nTime to pick the products !");
	printf("\n---------------------------");
	printf("\n");
	// see if the apples are needed or not !
	if(n1!=0)
	{
        apple:
        printf("\nPick some APPLES... how many did you pick:");
        scanf("%d", &limit);
        d1=d1+limit;
        if (d1 > n1 && x==0)
        {
            printf("You picked too many...only %d  APPLE(S) are needed",n1);
            d1=d1-limit;
            goto apple;
        }
        else if (d1<=0)
        {
            printf("ERROR : You must pick atleast 1 !");
            d1 = d1 - limit;
            goto apple;
        }
        else if(d1<n1 && d1>=0 )
        {
             x = n1-d1;
            printf("Looks like we still need more APPLES...");
            goto apple;
        }
        else if (d1 > n1 && x!=0)
        {
            /* code */
            printf("You picked too many...only %d  APPLE(S) are needed",x);
            d1=d1-limit;
            goto apple;
        }
        else
        {
            printf("Great,That's the apples done !");
        }
    }
	// see if the oranges are needed or not
	if(n2!=0)
	{
        orange:
        printf("\nPick some APPLES... how many did you pick:");
        scanf("%d", &limit);
        d2=d2+limit;
        if (d2 > n2 && y==0)
        {
            printf("You picked too many...only %d  ORANGE(S) are needed",n2);
            d2=d2-limit;
            goto orange;
        }
        else if (d2<=0)
        {
            printf("ERROR : You must pick atleast 1 !");
            d2 = d2 - limit;
            goto orange;
        }
        else if(d2<n2 && d2>=0 )
        {
             y = n2-d2;
            printf("Looks like we still need more ORANGES...");
            goto orange;
        }
        else if (d2 > n2 && y!=0)
        {
            /* code */
            printf("You picked too many...only %d  ORANGE(S) are needed",y);
            d2=d2-limit;
            goto orange;
        }
        else
        {
            printf("Great,That's the oranges done !");
        }
    }
	//see if pear are needed 
    printf("\n");
	if (n3 != 0)
	{
        pear:
        printf("\nPick some PEARS... how many did you pick:");
        scanf("%d", &limit);
        d3=d3+limit;
        if (d3 > n3 && z==0)
        {
            printf("You picked too many...only %d  PEAR(S) are needed",n3);
            d3=d3-limit;
            goto pear;
        }
        else if (d3<=0)
        {
            printf("ERROR : You must pick atleast 1 !");
            d3 = d3 - limit;
            goto pear;
        }
        else if(d3<n3 && d3>=0 )
        {
             z = n3-d3;
            printf("Looks like we still need more PEARS...");
            goto pear;
        }
        else if (d3 > n3 && z!=0)
        {
            /* code */
            printf("You picked too many...only %d  PEAR(S) are needed",z);
            d3=d3-limit;
            goto pear;
        }
        else
        {
            printf("Great,That's the pears done !");
        }
    }
	//see if tomatoes are needed 
	  printf("\n");
	if (n4 != 0)
	{
        tomatoe:
        printf("\nPick some TOMATOES... how many did you pick:");
        scanf("%d", &limit);
        d4=d4+limit;
        if (d4 > n4 && a==0)
        {
            printf("You picked too many...only %d  TOMATOE(S) are needed",n4);
            d4=d4-limit;
            goto tomatoe;
        }
        else if (d4<=0)
        {
            printf("ERROR : You must pick atleast 1 !");
            d4 = d4 - limit;
            goto tomatoe;
        }
        else if(d4<n4 && d4>=0 )
        {
             a = n4-d4;
            printf("Looks like we still need more tomatoes...");
            goto tomatoe;
        }
        else if (d4 > n4 && a!=0)
        {
            /* code */
            printf("You picked too many...only %d  TOMATOE(S) are needed",a);
            d4=d4-limit;
            goto tomatoe;
        }
        else
        {
            printf("Great,That's the tomatoes done !");
        }
    }
	//see if cabbages are needed or not
	if(n5!=0)
	{
        cabbage:
        printf("\nPick some CABBAGE... how many did you pick:");
        scanf("%d", &limit);
        d5=d5+limit;
        if (d5 > n5 && b==0)
        {
            printf("You picked too many...only %d  CABBAGE(S) are needed",n5);
            d5=d5-limit;
            goto cabbage;
        }
        else if (d5<=0)
        {
            printf("ERROR : You must pick atleast 1 !");
            d5 = d5 - limit;
            goto cabbage;
        }
        else if(d5<n5 && d5>=0 )
        {
             b = n5-d5;
            printf("Looks like we still need more CABBAGES...");
            goto cabbage;
        }
        else if (d5 > n5 && b!=0)
        {
            /* code */
            printf("You picked too many...only %d CABBAGE(S) are needed",b);
            d5=d5-limit;
            goto cabbage;
        }
        else
        {
            printf("Great,That's the cabbages done !");
        }
    }
	printf("\n");
	printf("\nAll items are picked! ");
	printf("\n");
	printf("\nDo another shopping ?(0=NO) :");
	scanf("%d", &again);
	if(again!=0)
	{
		goto again;
	}
	else
	{
		printf("\nYour tasks are done for today - Enjoy your free time !");
	}
	return 0;
}