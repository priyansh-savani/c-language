#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);

	if(a<b)
	{
	      if(a<c)
	      {
		    printf("a is small");
	      }
	      else
	      {
		    printf("c is small");
	      }
	}
	else
	{
	      if(b<c)
	      {
		    printf("b id small");
	      }
	      else
	      {
		    printf("c is small");
	      }
	}



	getch();
}