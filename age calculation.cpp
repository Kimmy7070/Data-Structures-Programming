#include <stdio.h>
struct date
{
	int d;
	int m;
	int y;
};
int main()
{
	struct date today,dob,age;
	printf("Enter the date of birth in dd/mm/yyyy format :");
	scanf("%d/%d/%d",&dob.d,&dob.m,&dob.y);
	printf("Enter the today's date in dd/mm/yyyy format :");
	scanf("%d/%d/%d",&today.d,&today.m,&today.y);
	if(dob.d<today.d)
	{
		age.d=today.d-dob.d;
	}
	else
	{
		today.d+=30;
		today.m-=1;
		age.d=today.d-dob.d;
	}
	if(today.m==0)
	{
		today.m+=12;
		today.y-=1;
	}
	if(dob.m<today.m)
	{
		age.m=today.m-dob.m;
	}
	else
	{
		today.m+=12;
		today.y-=1;
		age.m=today.m-dob.m;
	}
	age.y=today.y-dob.y;
	printf("The age of the person is %d years %d month and %d days",age.y,age.m,age.d);
	return 0;
}
