#include<stdio.h>
#include<conio.h>

main()
{
	int i,j ;
	clrscr();
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=3;j++)
		{
			if
			(
			(j==1 && (i>=1 && i<=5)) ||
			(j==3 && (i>=1 && i<=3)) ||
			(i==1 && (j>=1 && j<=3)) ||
			(i==3 && (j>=1 && j<=3))
			)

				{
					printf("* ");

				}
				else
				{
					printf("  ");
				}


		}
		printf("\n");
	}
	getch();
}
