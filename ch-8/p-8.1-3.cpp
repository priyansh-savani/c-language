#include<stdio.h>

int main()
{
	int n;

	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
		for(i=0;i<n;i++)
		{
			printf("%d) Enter eliment A: ",i+1);
			scanf("%d",&a[i]);	
			
		}
		 
			for(i=0;i<n;i++)
			{
					printf("%d) Enter eliment B: ",i+1);
					scanf("%d",&b[i]);
				
			}
			for(i=0;i<n;i++)
			{
				c[i]=a[i]+b[i];
				
				printf("%d)array c is : %d\n",i+1,c[i]);	
				
			}		
}
