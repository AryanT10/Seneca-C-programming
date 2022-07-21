#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i=1,n;
	char loop,D,F,W,Q;
	printf("\n+---------------------+");
	printf("\nLoop Aplication STARTED");
	printf("\n+---------------------+");
	printf("\n");
	printf("\nD = do/While  |  W = While  |  F = For  |  Q  =  quit ");
	printf("\nEnter loop type and the number of time to iterate (Quit=Q0) :");
	scanf(" %c%d", &loop,&n);

	if(loop==D)
	{
		i = 1;
		do
		{
			printf("%c", loop);
			i++;
		} while (i <= n);
	}
	return 0;
}