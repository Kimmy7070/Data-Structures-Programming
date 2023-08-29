#includes<stdio.h>
void main()
{
	int n,arr[100],f,l,mid,ser,flag=0;
	printf("Enter the array size/n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	f=0;
	print("Enter the search");
	i=0;
	while(f<l)
	{	
		mid=f+l/2;
		if(arr[mid]==ser)
		{
			printf("Found in %d",mid);
			flag++;
			break;
		}
		if(arr[mid]>ser)
		{
			l=mid-1;
		}
		if(arr[mid]<ser)
		{
			f=mid;
		}
	}
	if(flag==0)
	{
		printf("the number is not found");
	}
}
