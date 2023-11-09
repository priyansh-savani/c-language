#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujrati\n");

	printf("enter your choice");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			  printf("press 1 for internet recharge\n");
			  printf("press 2 for top-up recharge\n");
			  printf("press 3 for special recharge\n");
			  scanf("%d",&b);
			  switch(b)
			  {
				case 1:
					printf("you have successfully done top-up recharge.\n");
					break;
				case 2:
					printf("you have successfullu done top-up recharge.\n");
					break;
				case 3:
					printf("you have successfully special recharge.\n");
					break;
				default:
					printf("please select the right option!!!");

			  }
		case 2:
			  printf("internet recharge ke liye 1 dabaiye\n");
			  printf("top-up recharge ke liye 2 dabaiye\n");
			  printf("special recharge ke liye 3 dabaiye\n");
			  scanf("%d",&c);
			  switch(c)
			  {
				case 1:
					printf("aapne safaltapurvak internet recharge kar liya hai.\n");
					break;
				case 2:
					printf("aapne safaltapurvak top-up recharge kar liya hai.\.");
					break;
				case 3:
					printf("aapne safaltapurvak special recharge kar liya hai.\.");
					break;
				default:
					printf("sahi vikalp pasand kare!!!");

			  }
		case 3:
			  printf("internet recharge mate 1 dabavo\n");
			  printf("top-up recharge mate 2 dabavo\n");
			  printf("special recharge mate 3 dabavo\n");
			  scanf("%d",&d);
			  switch(d)
			  {
				case 1:
					printf("tame safaltapurvak internet recharge karyu chhe.\n");
					break;
				case 2:
					printf("tame safaltapurvak top-up recharge karyu chhe.\.");
					break;
				case 3:
					printf("tame safaltapurvak special recharge karyu chhe.\.");
					break;
				default:
					printf("sacho vikalp pasand karo!!!");

			  }
	}
	getch();
}