#include<stdio.h>
#include<conio.h>
main()
{
    float pie=3.1415,r,sum;
    clrscr();


    printf("Enter The value of R :");
    scanf("%f",&r);
    sum=pie*r*r;
    printf("The value of R :%.2f",sum);
    getch();
}