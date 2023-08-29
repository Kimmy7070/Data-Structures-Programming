#include<stdio.h>
main()
{
	int a=0,e=0,i=0,o=0,u=0,j=0;
	char ch[50];
	printf("Enter a string:");
	scanf("%s",&ch);
	while(ch[j]!=NULL)
	{
		if(ch[j]=='a')
			a++;
		else if(ch[j]=='e')
			e++;
		else if(ch[j]=='i')
			i++;
		else if(ch[j]=='o')
			o++;
		else if(ch[j]=='u')
			u++;
		j++;
	}
	printf("\nThe number of a in string are :%d",a);
	printf("\nThe number of e in string are :%d",e);
	printf("\nThe number of i in string are :%d",i);
	printf("\nThe number of o in string are :%d",o);
	printf("\nThe number of u in string are :%d",u);
}
