#include <stdio.h>
struct date
{
	int d;
	int m;
	int y;
};
int main()
{
	struct date today,nxt;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter the today's date in dd/mm/yyyy format :");
	scanf("%2d/%2d/%4d",&today.d,&today.m,&today.y);
	if (today.y%4==0&&today.y%100!=0||today.y%400==0)
	{
		mon[1]+=1;
	}
	if(today.d==mon[today.m-1])
	{
		if(today.m==12)
		{
			nxt.d=1;
			nxt.m=1;
			nxt.y=today.y+1;
		}
		else
		{
			nxt.d=1;
			nxt.m=today.m+1;
			nxt.y=today.y;
		}
	}
	else
	{
		nxt.d=today.d+1;
		nxt.m=today.m;
		nxt.y=today.y;
	}
	printf("The next date is %d/%d/%d",nxt.d,nxt.m,nxt.y);
	return 0;
}
