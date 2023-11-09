#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,min;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);

	min = (a<b)
		   ? (a<c)
			  ?a
			  :c
		   : (b<c)
			  ?b
			  :c;
	printf("min: %d",min);
	getch();
}