#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
	int s,ts,g1,g2,g3;
	float temp1=65.7,temp2=70,temp3=80.5;
	char op,op2;
	// Note:
	// You can convert Celsius to Fahrenheit given the following formula:
	// fahrenheit = (celsius * 1.8) + 32.0);

	printf("\nTake a break - Coffee shop");
	printf("\n===========================");
	printf("\n");
	printf("\nEnter the coffee product information being sold today ...");
	printf("\n");
	printf("\nCOFFEE-1...");
	printf("\nType ([L]ight,[B]lend) :");
	scanf("%s" ,& op);
	printf("\nGrind size ([C]course,[F]ine) :");
	scanf("%s" ,& op);
	printf("\nBag Weight(g) :");
	scanf("%d", &g1);
	printf("\n");
	printf("\nBest served with cream ([Y]es,[N]o :");
	scanf("%s" ,& op);
	printf("\nIdeal serving temperature (Celcius) :%.2f",temp1);
	printf("\n");
	printf("\nCOFFEE-2...");
    printf("\nType ([L]ight,[B]lend) :");
	scanf("%s" ,& op);
	printf("\nGrind size ([C]course,[F]ine) :");
	scanf("%s" ,& op);
	printf("\nBag Weight(g) :");
	scanf("%d", &g2);
	printf("\n");
	printf("\nBest served with cream ([Y]es,[N]o :");
	scanf("%s" ,& op);
	printf("\nIdeal serving temperature (Celcius) :%.2f",temp2);
	printf("\n");
	printf("\nCOFFEE-3...");
    printf("\nType ([L]ight,[B]lend) :");
	scanf("%s" ,& op);
	printf("\nGrind size ([C]course,[F]ine) :");
	scanf("%s" ,& op);
	printf("\nBag Weight(g) :");
	scanf("%d", &g3);
	printf("\n");
	printf("\nBest served with cream ([Y]es,[N]o :");
	scanf("%s" ,& op);
	printf("\nIdeal serving temperature (Celcius) :%.2f",temp3);

	scanf("%c", &op);

	switch (op)
	{
      case 'L':
      case 'l':
		  printf("L");
		  break;

		   case 'B':
      case 'b':
		  printf("B");
		  break;

		   case 'C':
      case 'c':
		  printf("C");
		  break;

		   case 'F':
      case 'f':
		  printf("F");
		  break;

		   case 'Y':
      case 'y':
		  printf("Y");
		  break;

		   case 'N':
      case 'n':
		  printf("N");
		  break;
	  }

	  printf("\n");
	  printf("\n---+---------------+---------------+---------------+-------+---------------");
	  printf("\n   |   COFFEE      |   COFFEE      |   PACKAGED    | BEST  |    SERVING    ");
	  printf("\n   |    TYPE       |  GRIND SIZE   |  BAG WEIGHT   |SERVED |  TEMPERATURE  ");
	  printf("\n   +---------------+---------------+---------------+ WITH  +---------------");
	  printf("\nID | LIGHT | BLEND | COURSE | FINE |   (G) | Lbs   | CREAM |  (C)  |  (F)  ");
	  printf("\n---+---------------+---------------+---------------+-------+---------------");
	  printf("\n 1 |  1    |  0    |  1     |  0   |   %d  | %.3f  |  1    | %.2f  |  %.1f ",g1,g1/GRAMS_IN_LBS,temp1,(temp1 * 1.8) + 32.0);
	  printf("\n 2 |  0    |  1    |  0     |  1   |   %d  | %.3f  |  0    | %.2f  |  %.1f ",g2,g2/GRAMS_IN_LBS,temp2,(temp2 * 1.8) + 32.0);
	  printf("\n 3 |  1    |  0    |  0     |  1   |   %d  | %.3f  |  0    | %.2f  |  %.1f ",g3,g3/GRAMS_IN_LBS,temp3,(temp3 * 1.8) + 32.0);

	  printf("\n");
	  printf("\nEnter how you like Your coffee and the coffee maker equipment you use...");
	  printf("\n");
	  printf("\nCoffee strength ([M]ild,[R]ich) :");
	  scanf("%s", &op2);
	  printf("\nDo you like your coffee with cream ([Y]es,[N]o) :");
	  scanf("%s", &op2);
	  printf("\nTypical number of daily servings :");
	  scanf("%d", &s);
	  printf("\n Maker ([R]esedential,[C]ommercial :");
	  scanf("%s", &op2);

	  scanf("%c", &op2);
	  switch(op2)
	  {
		case 'M':
		case 'm':
			printf("M");
			break;
			case 'R':
		case 'r':
			printf("R");
			break;
			case 'Y':
		case 'y':
			printf("Y");
			break;
			case 'N':
		case 'n':
			printf("N");
			break;
			case 'C':
		case 'c':
			printf("C");
			break;
		}
		printf("\n");
		printf("\nThe below table shows how your preferences align to the available product :");
		printf("\n");
		printf("\n-------------------+-------------------+--------------+-------+----------------");
		printf("\n   |    COFFEE     |    COFFEE         |  PACKAGED    | WITH  |   SERVING      ");
		printf("\n ID|      TYPE     |   GRIND SIZE      | BAG WEIGHT   | CREAM | TEMPERATURE    ");
		printf("\n---+---------------+-------------------+--------------+-------+----------------");
		printf("\n 1 |      1        |      0            |    0         |  1    |     0          ");
		printf("\n 2 |      0        |      1            |    1         |  0    |     1          ");
		printf("\n 3 |      1        |      1            |    0         |  0    |     1          ");
		printf("\n");
		printf("\nEnter how you like your coffee and  the coffee maker equipment you use ...");
		printf("\n");
		printf("\nCoffee strength ([M]ild,[R]ich) :");
	    scanf("%s", &op2);
	    printf("\nDo you like your coffee with cream ([Y]es,[N]o) :");
	    scanf("%s", &op2);
	    printf("\nTypical number of daily servings :");
	    scanf("%d", &ts);
	    printf("\n Maker ([R]esedential,[C]ommercial :");
	    scanf("%s", &op2);
		printf("\n");
		printf("\nThe below table shows how your prefrences align to the available product : ");
		printf("\n");
		printf("\n-------------------+-------------------+--------------+-------+----------------");
		printf("\n   |    COFFEE     |    COFFEE         |  PACKAGED    | WITH  |   SERVING      ");
		printf("\n ID|      TYPE     |   GRIND SIZE      | BAG WEIGHT   | CREAM | TEMPERATURE    ");
		printf("\n---+---------------+-------------------+--------------+-------+----------------");
		printf("\n 1 |      0        |      1            |    0         |  0    |     1          ");
		printf("\n 2 |      1        |      0            |    0         |  1    |     0          ");
		printf("\n 3 |      0        |      0            |    1         |  1    |     0          ");
		printf("\n");
		printf("\nHope you found a product that suits your like !");

		return 0;
}