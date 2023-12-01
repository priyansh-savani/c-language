 #include<stdio.h>
#include<conio.h>

main()
{
	int i,j ;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			if
			(
			(j==1 && (i>=1 && i<=4)) ||
			(i==1 && (j>=1 && j<=3)) ||
			(i==4 && (j>=1 && j<=3))
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

