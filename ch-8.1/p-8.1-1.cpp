#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],i;
	
		for(i=0;i<n;i++)
		{
			printf("%d) Enter the value: ",i+1);
			scanf("%d",&a[i]);	
			
		}
		printf("Length of an array : %d",n);
}
