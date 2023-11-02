#include<stdio.h>
#include<conio.h>
main()
{
    float pie=3.1415,r,sum;
    clrscr();


    printf("Enter The value of R :");
    scanf("%f",&r);
    sum=2*pie*r;
    printf("The Area of Parimeter is :%.2f",sum);
    getch();
}