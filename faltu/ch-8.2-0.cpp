#include<stdio.h>

int main()
{
	int n;

	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],b[n],i,j;
		
		printf("Array A\n");
		
		for(i=0;i<n;i++)
		{
			printf("%d) Enter eliment A: ",i+1);
			scanf("%d\n",&a[i]);	
			
		}
		 	printf("Array B\n");
			for(i=0;i<n;i++)
			{
					printf("%d) Enter eliment B: ",i+1);
					scanf("%d\n",&b[i]);
				
			}
			for(i=0;i<n;i++)
			{
					a[i] = a[i] + b[i];
					b[i] = a[i] - b[i];
					a[i] = a[i] - b[i];
			}
			
			printf("A)\n");
			
			for(i=0 ; i<n; i++)
			{
				printf("%d ",a[i]);	
			}
			 printf("\n");
			 
			 printf("B)\n");
			 
			for(i=0 ; i<n; i++)
			{
				printf("%d ",b[i]);	
			}		
}
