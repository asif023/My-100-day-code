#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],i,n,temp,ptr;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(ptr=0;ptr<n;ptr++)
{
if(arr[ptr]>=arr[ptr+1])
{
temp=arr[ptr];
arr[ptr]=arr[ptr+1];
arr[ptr+1]=temp;
}
//ptr=ptr+1;
}
}
printf("after swaping");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
getch();
}
