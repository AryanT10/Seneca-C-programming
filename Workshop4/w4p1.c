#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i,n;
	char op;
	printf("\n+---------------------+");
	printf("\nLoop Aplication STARTED");
	printf("\n+---------------------+");
	printf("\n");
	//1
	again:
	printf("\nD = do/While  |  W = While  |  F = For  |  Q  =  quit ");
	printf("\n Enter a loop type and the number of times to interate (Quit=Q0) :");
	scanf(" %c%d", &op, &n);
	
	switch(op)
		{
         case'W':
		  if (n > 3 && n < 20)
			 {
				 for (i = 1; i <= n;i++)
				 {
					 printf("%c", op);
				 } 
			 }
			 else
			 {
				 printf("\nERROR : The number of iterations must be between 3-20 inclusive !");
			 }
			   goto again;
		 case 'D':
			  if (n > 3 && n < 20)
			 {
				 for (i = 1; i <= n;i++)
				 {
					 printf("%c", op);
				 } 
			 }
			 else
			 {
				 printf("\nERROR : The number of iterations must be between 3-20 inclusive !");
			 }
			 goto again;
		 case 'F':
			   if (n > 3 && n < 20)
			 {
				 for (i = 1; i <= n;i++)
				 {
					 printf("%c", op);
				 } 
			 }
			 else
			 {
				 printf("\nERROR : The number of iterations must be between 3-20 inclusive !");
			 }
			  goto again;
	    case'Q':
    	case'0':
				printf("\n+--------------------+");
	            printf("\nLoop Aplication ENDED ");
	            printf("\n+--------------------+");
	            printf("\n");
				break;
		default:
			printf("\nERROR : Invalid entered value(s) ! ");
			goto again;
		}
			return 0;
}