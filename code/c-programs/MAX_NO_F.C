#include<stdio.h>
#include<conio.h>
#define max 100

void main()
{
int arr[max],a[max],i,n,num,count=0;
clrscr();
printf("enter the number ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("\n enter the number which we have to find");
 scanf("%d",&num);
for(i=0;i<n;i++)
{
  if(arr[i]==num)
    {
    a[count]=i+1;
    count++;
    }
    //printf("%d",arr[]);
}

if(count!=0)
{
printf("\nitem found at ");
for(i=0;i<count;i++)
{
printf("%d",a[i]);
}
}
else
{
printf("\nitem  not found ");
}

getch();
}
