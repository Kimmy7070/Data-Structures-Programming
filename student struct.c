#include <stdio.h>
struct Student
{
	char name[50];
	int roll;
	int marks;
};
void main()
{
	int n,i,j;
	printf("How many students data will be given?\r\n");
	scanf("%d",&n);
	struct Student st[n],t;
	for (i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter the name \r\n");
		gets(st[i].name);
		printf("Enter the roll no \r\n");
		scanf("%d",&st[i].roll);
		printf("Enter the marks \r\n");
		scanf("%d",&st[i].marks);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=i;j<n;j++)
		{
			if(st[i].marks<st[j].marks)
			{
				t=st[i];
				st[i]=st[j];
				st[j]=t;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("\nName :%s roll:%d marks:%d",st[i].name,st[i].roll,st[i].marks);
	}
}
