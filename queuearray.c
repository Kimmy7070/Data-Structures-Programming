#include<stdio.h>
int input(int arr[],int n)
{
    printf("Enter the limit");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element",i);
        scanf("%d",&arr[i]);
    }
    return arr[];
}
int main()
{
    int arr[100],n=0;
    input(arr[],n);
    return (0);
    for(int i=0;i<n;i++)
    {
        printf("The %d element",arr[i]);
    }
}