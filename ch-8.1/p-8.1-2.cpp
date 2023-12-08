#include<stdio.h>

int main()
{
	int n;
	float avg=0;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],i;
	
		for(i=0;i<n;i++)
		{
			printf("%d) Enter the value: ",i+1);
			scanf("%d",&a[i]);	
			avg+=a[i];
			
		}
		 
		avg = avg/n;
		 
		 printf("Average is : %.2f\n",avg);
		
}
