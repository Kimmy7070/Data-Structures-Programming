#include <stdio.h>
void main()
{
	int n,arr[100],t,i;
	printf("Enter the array size\r\n");
	scanf("%d",&n);
	printf("Enter the array \r\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
		t=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=t;
	}
	printf("The reverse of the array is \r\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
