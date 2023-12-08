#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter row : ");
	scanf("%d",&r);
	
	
	printf("Enter column : ");
	scanf("%d",&c);
	
	
	int i,j,a[r][c];
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			
		printf("Enter the elements of A :[%d][%d] ",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	
	int sum=0;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			sum += a[i][j];
			
		}
	}
	
	printf("avg : %d",sum/(r*c));
	
	
	
	
}
