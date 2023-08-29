#include<stdio.h>
struct cust
{
	int id;
	int phn;
	char name[50];
	int n;
	float p[50];
	float bill;
};
main()
{
	int i,j,num;
	printf("Enter the number of customers");
	scanf("%d",&num);
	struct cust t[50];
	for(i=0;i<num;i++)
	{
		fflush(stdin);
		printf("Enter the name of customer :");
		gets(t[i].name);
		printf("Enter the customer id :");
		scanf("%d",&t[i].id);
		printf("Enter the phone number :");
		scanf("%d",&t[i].phn);
		printf("Enter the number of items purchased :");
		scanf("%d",&t[i].n);
		t[i].bill=0;
		for(j=0;j<t[i].n;j++)
		{
			printf("Enter the price of item no %d",j+1);
			scanf("%f",&t[i].p[j]);
			t[i].bill+=t[i].p[j];
		}	
	}
		for(i=0;i<num;i++)
	{
		
		printf("Name :%s \r\n Customer ID:%d \r\nPhone number:%d \r\nTotal bill:%f",t[i].name,t[i].id,t[i].phn,t[i].bill);
	}
	
}
