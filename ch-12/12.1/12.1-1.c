#include<stdio.h>
#include<string.h>

struct student
{
	
	int id;
	char name[30];
	int age;
	char course[30];
	char city[15];
	int std;
	char school[30];
	
	
}s1,s2,s3;

void main()
{	

	int i;

	for(i=0; i<=3 ;i++)
	{
	
	printf("---------FILL THE DETAILS OF THE STUDENTS---------\n\n");
	
	printf("ID: ");
	scanf("%d",&s1.id);
	
	printf("STUDENT NAME: ");
	scanf("%s",&s1.name);
	
	printf("AGE: ");
	scanf("%d",&s1.age);
	
	printf("COURSE: ");
	scanf("%s",&s1.course);
	
	printf("CITY: ");
	scanf("%s",&s1.city);
	
	printf("STANDARD: ");
	scanf("%d",&s1.std);
	
	printf("SCHOOL NAME: ");
	scanf("%s",&s1.school);
	}
	printf("---------DETAILS OF THE STUDENTS---------\n\n");
	
	
	for(i=0; i<=3; i++)
	{
	
	printf("ID: %d\n",s1.id);

	printf("STUDENT NAME: %d\n",s1.name);

	printf("AGE: %d\n",s1.age);
	
	printf("COURSE: %d\n",s1.course);
	
	printf("CITY: %d\n",s1.city);
	
	printf("STANDARD: %d\n",s1.std);
	
	printf("SCHOOL NAME: %d\n",s1.name);
	
	}
	
}
