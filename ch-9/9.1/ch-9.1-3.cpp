#include<stdio.h>

main()

{	

	int i;	
	char a[20];
	printf("Enter any string: ");
	scanf("%[^\n]",a);
	for(i=0 ; i<=20 ; i++)
	{
	
		if(a[i]>= 65 && a[i]<=90 )
		{
			a[i]+=32; 	
		}
		else if(a[i]>= 97 && a[i]<=122)
		{
			a[i]-=32; 	
		}
		
	}
	
	printf("Toggle case string: %s",a);
}
