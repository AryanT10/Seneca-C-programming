#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float s, m, l,st,mt,lt;
	int no1,no2,no3;
	float p1, p2, p3,t1,t2,t3,avg,avgt;
	const double TAX = 0.13;
	const char patSize = 'S', salSize = 'M', tomSize = 'L';
	float toonies = 02.00,loonies=01.00,quarter=00.25,dime=00.10,nickel=00.05,pennies=0.00;
	

	printf("\nShirt Store Price List");
	printf("\n=======================");
	printf("\nSMALL :$");
	scanf("%f", &s);
	printf("\nMEDIUM :$");
	scanf("%f", &m);
	printf("\nLARGE :$");
	scanf("%f", &l);
	printf("\n");
	printf("\nPatty's shirt size is 'S'");
	printf("\nNumber of shirts patty is buying :");
	scanf("%d", &no1);
	printf("\nTommy's shirt size is 'M'");
	printf("\nNumber of shirts tommy is buying :");
	scanf("%d", &no2);
	printf("\nSally's shirt size is 'L'");
	printf("\nNumber of shirts sally is buying :");
	scanf("%d", &no3);
	printf("\n");
	p1 = s * no1;
	p2 = m * no2;
	p3 = l * no3;
	t1 = p1 + (TAX * p1);
	t2 = p2 + (TAX * p2);
	t3 = p3 + (TAX * p3);
	printf("\nCustomer\tSize\tPrice\tQty\tSub-Total\tTax\t\tTotal");
	printf("\n--------\t----\t-----\t---\t---------\t-------\t\t--------");
	printf("\nPatty   \t S  \t%.2f \t%d \t%.4f     \t%.4f\t\t%.4f", s, no1, p1, TAX * p1, t1);
	printf("\nSally   \t M  \t%.2f \t%d \t%.4f     \t%.4f\t\t%.4f", m, no2, p2, TAX * p2, t2);
	printf("\nTommy   \t L  \t%.2f \t%d \t%.4f     \t%.4f\t\t%.4f", l, no3, p3, TAX * p3, t3);
	printf("\n--------\t----\t-----\t---\t---------\t-------\t\t---------");
	printf("\n        \t    \t     \t   \t%.4f \t%.4f\t\t%.4f", p1 + p2 + p3, (TAX * p1) + (TAX * p2) + (TAX * p3),t1+t2+t3);
	printf("\n");
	printf("\nDaily Retails sales represented by coins");
	printf("\n========================================");
	printf("\n");
	printf("\nSales EXCLUDING tax");
	printf("\nCoins  \tQty\tbalance");
	printf("\n-------\t---\t-------");
	printf("\n          \t%.4f", p1 + p2 + p3);
	printf("\nToonies\t%.2f    %.2f",(p1+p2+p3)/toonies ,toonies);
	printf("\nloonies\t  1       %.2f", loonies);
	printf("\nquarter\t  2       %.2f", quarter);
	printf("\nDimes\t  0       %.2f", dime);
	printf("\nnickels\t  0       %.2f",  nickel);
	printf("\npennies\t  1       %.2f",  pennies);
	printf("\n");
	avg = (s + m + l) / 3;
	st = s + (s * TAX);
	mt = m + (m * TAX);
	lt = l + (l * TAX);
	printf("\nAverage cost/shirt : $%.4f", avg);
	printf("\n");
	printf("\nDaily Retails sales represented by coins");
	printf("\n========================================");
	printf("\n");
	printf("\nSales EXCLUDING tax");
	printf("\nCoins  \tQty\tbalance");
	printf("\n-------\t---\t-------");
	printf("\n          \t%.4f", t1 + t2 + t3);
	printf("\nToonies\t%.2f    %.2f",(t1+t2+t3)/toonies ,toonies);
	printf("\nloonies\t  1       %.2f", loonies);
	printf("\nquarter\t  2       %.2f", quarter);
	printf("\nDimes\t  0       %.2f", dime);
	printf("\nnickels\t  1       %.2f",  nickel);
	printf("\npennies\t  2       %.2f",  pennies);
	printf("\n");
	printf("\n Average cost/shirt :$%.4f",((st+mt+lt)/3));

	return 0;
}