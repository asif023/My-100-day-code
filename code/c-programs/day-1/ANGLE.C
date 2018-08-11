#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
int n=5;
int z=5;//maxstar
clrscr();
for(i=1;i<=n;i++)
  {
  for(j=1;j<i;j++)
  {
  printf(" ");
  }
  for(k=1;k<=z;k++)
  {
  printf("*");
  }
  z--;
  printf("\n");
  }
  getch();
 }
