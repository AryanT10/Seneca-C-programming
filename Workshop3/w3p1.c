#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
	int  id1=111, id2=222, id3=111;
	float p1=111.4900, p2=222.9900, p3=334.4900,pd=111.50;
	
	printf("\nProduct Information");
	printf("\n====================");
	printf("\nProduct-1 (ID:%d)", id1);
	printf("\n Taxed: Y");
	printf("\nPrice :$%.4f", p1);
	printf("\n");
	printf("\nProduct-2 (ID:%d)", id2);
	printf("\n Taxed: N");
	printf("\nPrice :$%.4f", p2);
	printf("\n");
	printf("\nProduct-3 (ID:%d)", id3);
	printf("\n Taxed: N");
	printf("\nPrice :$%.4f", p3);
	printf("\n");
	printf("\nThe average of all prices is :$%.4f ", (p1 + p2 + p3) / 3);
	printf("\n");
	printf("\nAbout relational and logical expressions !");
	printf("\n===========================================");
	printf("\n1.These expressions evaluate to TRUE and FALSE");
	printf("\n2.FALSE is always represented by integer value 0");
	printf("\n3.TRUE is represented by any integer value other than 0");
	printf("\n");
	printf("\nSome Data Analysis...");
	printf("=======================");
	
	printf("\n1.Is product 1 taxable ? ->");
	if( p1==111.4900)
		{
			printf("0");
		}
		else 
		{
			printf("1");
		}
	printf("\n");
		
                printf("\n2.Are product 2 and 3 both not taxable(N) ? ->");
            	if(p2==222.9900)
			     {printf("0");}
			      else if(p3==334.4900)
			    	{printf("0");}
		        	else{
			             printf("1");}
		         	printf("\n");

	            printf("\n3.IS Product 3 less than testvalue ($330.99) ? ->");
		     	if(p3>testValue)
				printf("0");
				else
					printf("1");
				printf("\n");

				printf("\n4.Is the price of product 3 more than both products 1 and 2 combined ? ->");
				if(p1+p2<p3)
					printf("1");
					else
						printf("0");
					printf("\n");

					printf("\n5.Is the price of product ! equal to or more than the price difference of the product 2 less product 2 ? ->");
                    if(pd<=p1)
	                printf("1");
	                else
	            	printf("0");
					printf("\n");

					printf("\n6.Is the price of product 2 equal to or more than the average price ? ->");
					if(p2>=(p1+p2+p3)/3)
						printf("1");
						else
							printf("0");
						printf("\n");

						printf("\n7.Based onProduct ID, Product 1 is unique ? ->");
                        //code here 
						if(p1==111.49)
							printf("0");
						printf("\n");

						printf("\n8.Based onProduct ID, Product 2 is unique ? ->");
                        //code here
						if(p2==222.99)
							printf("1");
						printf("\n");

						printf("\n9.Based onProduct ID, Product 3 is unique ? ->");
                        //code here
						if(p3==334.49)
							printf("0");
						printf("\n");

						return 0;
}