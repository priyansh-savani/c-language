#include<stdio.h>
#include<conio.h>

main()
{
	clrscr ();
	float sal,HRA,DA,TA,a;
	printf("Enter salary\n");
	scanf("%f",&sal);

	HRA = sal * 0.10;
	printf("HRA=%.2f\n",HRA);
	DA = sal * 0.05;
	printf("DA=%.2f\n",DA);
	TA = sal * 0.08;
	printf("TA=%.2f\n",TA);
	a=sal+HRA+DA+TA;
	printf("salary=%.2f\n",a);

	getch();
}