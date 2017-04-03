#include "header.h"
int main()
{
	int a,b,choise;
	printf("Enter two numbers for calculation:	");
	scanf("%d%d",&a,&b);
	while(1)
	{
		printf("\n==============MAINMENU==============\n");
		printf("1. ADD\n");
		printf("2. SUBTRACT\n");
		printf("3. MULTIPLY\n");
		printf("4. DIVIDE\n");
		printf("5. EXIT\n");
		printf("Please enter your choise:	\n");
		scanf("%d",&choise);
		switch(choise)
		{
			case 1:
				sum(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				mul(a,b);
				break;
			case 4:
				divd(a,b);
				break;
			case 5:
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("Wrong Option Choosed...Please try again!\n\n");
		}

	}
}
