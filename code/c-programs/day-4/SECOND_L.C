#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,j,max;
clrscr();
printf("enter the number of n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
 max=a[0];
 j=0;
 for(i=1;i<n;i++)
 {
 if(max<a[i])
  {
  max=a[i];
  j=i;
  }
}
a[j]=a[n-1];
max=a[0];
for(i=1;i<n;i++)
{
if(max<a[i])
max=a[i];
}
printf("%d",max);
getch();
}

