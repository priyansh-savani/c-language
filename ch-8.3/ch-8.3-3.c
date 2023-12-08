#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter the number of row: ");
	scanf("%d",&r);
	
	printf("Enter the number of column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\t --- diagonal element ---\n\n");
	
	int sum=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{ 
		   if(i==j){
		   		    	sum += a[i][j];
		   				printf("%d",a[i][j]);
		           }
		else
			{
				printf("  ");
			}	
		}
		printf("\n");
	} 
	

	
	printf("sum : %d ",sum);
	
}
