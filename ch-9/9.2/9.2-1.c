#include<stdio.h>
#include<string.h>

main()

{	

	char psw[20];
	int i,upp=0,dig=0,lwr=0;
	
	printf("Enter  password : ");
	gets(psw);
	
	if(strlen(psw)>=6)
	{
		for(i=0; i<=strlen(psw); i++)
		{
			if(psw[i]>=65 && psw[i]<=90)
			{
				upp=1;
			}
			else if(psw[i]>=97 && psw[i]<=122)
			{
				lwr=1;
			}
			else if(psw[i]>=48 && psw[i]<=57)
			{
				dig=1;
			}
		}
			if(upp==1 && lwr==1 && dig==1)
			{
				printf("Your password is strong enough...");
			}
			else
			{
				printf("Your password is weak... try again !!!");
			}
	}
	else
	{
		printf("Your password must contain minimum 6 letters...");
		
	}


	
}
