#include<stdio.h>

int main()
{
	int n;

	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],square[n],i;
		
		printf("Array A\n");
		
		for(i=0;i<n;i++)
		{
			printf("%d) Enter eliment A: ",i+1);
			scanf("%d",&a[i]);	
			
		}
		 
		
		for(i=0;i<n;i++)
		
		{
			square[i] = a[i] * a[i];
			
		}
			
		for(i=0;i<n;i++)
		
	
		
		{
			printf("\t%d ",square[i]);
		}		
}
