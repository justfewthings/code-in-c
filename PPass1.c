#include<stdio.h>
#include<stdlib.h>
struct students{
	int prn;
	double marks;
	char branch[25];
	char name[25];
}st[6];
struct address{
		char city[20];
		int pin;
	}add[6]; 
int main()
{
	int i,c=1;
	printf("\nEnter student details such as name , prn, branch, marks,city and pin\n");
	for(i=0;i<5;i++)
	{
		printf("\n  Enter name %d--", c++);
		fgets(st[i].name,25,stdin);
		printf("  Enter branch--");
		fgets(st[i].branch,25,stdin);
		printf("  Enter city--");
		fgets(add[i].city,20,stdin);
		printf("  Enter pin--");
		scanf("%d", &add[i].pin);
		printf("  Enter prn--");
		scanf("%d", &st[i].prn);
		printf("  Enter marks--");
		scanf("%lf", &st[i].marks);
		fflush(stdin);		
	}
	for(i=0;i<5;i++)
	{	
		printf("\nName: %sCity: %sPincode: %d\nBranch: %sPRN: %d\nMarks: %0.1lf\n",st[i].name,add[i].city,add[i].pin, st[i].branch ,st[i].prn, st[i].marks);
	}
	return 0;
}
