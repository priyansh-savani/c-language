#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("enter the first value:");
	scanf("%d",&a);
	printf("enter the second value");
	scanf("%d",&b);

	if(a<b)
	{
		printf("the minimum value is:%d,",a);

	}
	else
	{
		printf("the minimum value is:%d,",b);
	}
	getch();
}