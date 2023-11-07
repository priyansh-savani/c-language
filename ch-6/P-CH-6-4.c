#include<stdio.h>
#include<conio.h>
#define p printf

main()
{
  int a,b,c,d;
  clrscr();
  p("Enter a,b,c,d");
  scanf("%d%d%d%d",&a,&b,&c,&d);

  if(a>b)
  {
	if(a>c)
	{
	      if(a>d)
	      {
			p("value of a is maximum");
	      }
	      else
	      {
			p("value of d is maximum");
	      }
	}
	else
	{
	      if(c>d)
	      {
			p("value of c is maximum");
	      }
	      else
	      {
			p("value of d is maximum");
	      }
	}
  }
  else
  {
	      if(b>c)
	      {
			if(b>d)
			{
				p("value of b is maximum");
			}
			else
			{
				p("value of d is maximum");
			}
	      }
	      else
	      {
			if(c>d)
			{
				p("value of c is maximum");
			}
			else
			{
				p("value of d is maximum");
			}
	      }
  }
  getch();
}
