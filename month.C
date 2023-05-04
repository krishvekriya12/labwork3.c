#include<stdio.h>
#include<conio.h>
main()
{
	int a,d;
	clrscr();
	printf("enter months =");
	scanf("%d",&a);
	printf("press 1 to jaunuary");
	printf("\npress 2 to february");
	printf("\npress 3 to march");
	printf("\npress 4 to april");
	printf("\npress 5 to may");
	printf("\npress 6 to jun");
	printf("\npress 7 to july");
	printf("\npress 8 to august");
	printf("\npress 9 to saptember");
	printf("\npress 10 to octomber");
	printf("\npress 11 to navember");
	printf("\npress 12 to desember");
	printf("\nenter your choic");
	scanf("%d",&d);
	switch(d)
	{
		case 1 :
			printf("jaunuary");
			break;
		case 2 :
			printf("february");
			break;
		case 3 :
			printf("march");
			break;
		case 4 :
			printf("april");
			break;
		case 5 :
			printf("may");
			break;
		case 6 :
			printf("june");
			break;
		case 7 :
			printf("july");
			break;
		case 8 :
			printf("augest");
			break;
		case 9 :
			printf("saptember");
			break;
		case 10 :
			printf("octomber");
			break;
		case 11 :
			printf("november");
			break;
		case 12 :
			printf("december");
			break;
		default :
			printf("plz enter valid choice!");
	 }

     getch();
}


