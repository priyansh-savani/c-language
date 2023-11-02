#include<stdio.h>
#include<conio.h>
main()
{
    float p,r,n,sum;
    clrscr();


    printf("Enter The value of Prnciple Amount :");
    scanf("%f",&p);
    printf("Enter The Rate of intrest :");
    scanf("%f",&r);
    printf("Enter The Number of Year :");
    scanf("%f",&n);
    printf("The Simple Intrest is :%f",(p*r*n)/100);
    getch();
}