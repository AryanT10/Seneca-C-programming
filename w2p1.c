#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
	int no;
	float s, m, l;

	printf("\nSet Shirt Prices ");
	printf("\n================");
	printf("\nEnter the price for a SMALL shirt :$");
	scanf("%f", &s);
	printf("\nEnter the price for a MEDIUM shirt :$");
	scanf("%f", &m);
	printf("\nEnter the price for a LARGE shirt :$");
	scanf("%f", &l);
	printf("\n");
	printf("\nShirt store price list");
	printf("\n======================");
	printf("\nSMALL : $%.2f", s);
	printf("\nMEDIUM : $%.2f", m);
	printf("\nLARGE : $%.2f", l);
	printf("\n");
	printf("\nPatty's Shirt size is 'S'");
	printf("\nNumbe of Shirts patty is buying :");
	scanf("%d", &no);
	printf("\n");
	printf("\npattys shopping cart...");
	printf("\nContains : %d shirts", no);
	printf("\nSub Total : $%.4f", no * s);
	printf("\nTaxes : $%.4f", TAX * (no * s));
	printf("\nTotal : $%.4f", (TAX * (no * s)) + (no * s));

	return 0;
}