#include<stdio.h>
#define P printf

	
void sum()
{
	int a,b;	
	P("Enter the value: ");
	scanf("%d",&a);
	P("Enter the value: ");
	scanf("%d",&b);
	printf("%d", a+b);	
}

void mul()
{
	int a,b;
	P("Enter the value: ");
	scanf("%d",&a);
	P("Enter the value: ");
	scanf("%d",&b);
	printf("%d", a*b);	
}

void sub()
{	
	int a,b;
	P("Enter the value: ");
	scanf("%d",&a);
	P("Enter the value: ");
	scanf("%d",&b);
	printf("%d", a-b);	
}

void devide()
{
	int a,b;
	P("Enter the value: ");
	scanf("%d",&a);
	P("Enter the value: ");
	scanf("%d",&b);
	printf("%d", a/b);	
}

void mod()
{
	int a,b;
	P("Enter the value: ");
	scanf("%d",&a);
	P("Enter the value: ");
	scanf("%d",&b);
	P("%d", a%b);	
}

void main()
{
	
		int a,b,n;
		
	
	
	do
	{
		P("press 1 for '+'\n\n");
		P("press 2 for '-'\n\n");
		P("press 3 for '*'\n\n");	
		P("press 4 for '/'\n\n");
		P("press 5 for '%'\n\n");
		P("Press 0 for the exit...\n\n");
		P("Enter your choice: \n\n");
		scanf("%d",&n);	
	
		
		switch(n)
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
				devide(a,b);
				break;
			
			case 5:
				mod(a,b);
				break;					
		
			case 0:
				P("Exit: ");
				break;
			
		}		
			
	}while(n!=0);
}

