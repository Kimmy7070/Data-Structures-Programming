#include<stdio.h>
main()
{
	int arr1[11],arr2[11],arr3[11],c,p,i,ch,flag=0;
	char ch1='Y',ch2='Y';
	for(i=0;i<=10;i++)
	{
		arr1[i]=0;
		arr2[i]=0;
		arr3[i]=0;
	}
	printf("Enter the first polynomial,power cap is 10\n");
	while(ch1=='Y')
	{
		printf("Enter the coefficient");
		scanf("%d",&c);
		printf("Enter the power");
		scanf("%d",&p);
		if(p>10&&p<0)
			printf("\nError!Try Again!");
		else
			arr1[p]+=c;
		printf("Continue?Y/N");
		fflush(stdin);
		scanf("%c",&ch1);
	}
	printf("Enter the second polynomial,power cap is 10\n");
	while(ch2=='Y')
	{
		printf("Enter the coefficient");
		scanf("%d",&c);
		printf("Enter the power");
		scanf("%d",&p);
		if(p>10&&p<0)
			printf("Error!Try Again!");
		else
			arr2[p]+=c;
		printf("Continue?Y/N");
		fflush(stdin);
		scanf("%c",&ch2);
	}
	for(i=0;i<10;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	for(i=10;i>=0;i--)
	{
		if(arr3[i]!=0)
		{
			if(i==1)
				printf("%dx+",arr3[i]);
			else if(i==0)
				printf("%d+",arr3[i]);
			else
				printf("%dx^%d+",arr3[i],i);
		}
	}
	printf("\b ");
}
