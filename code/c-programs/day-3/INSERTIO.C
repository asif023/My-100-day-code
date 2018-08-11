#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],n,i,j,temp;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{
temp=arr[i];
for(j=i-1;temp<arr[j] && j>=0;j--)
{
arr[j+1]=arr[j];
}
arr[j+1]=temp;
}
for(i=0;i<n;i++)
{
printf(" %d",arr[i]);
}
getch();
}
