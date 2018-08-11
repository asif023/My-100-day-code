#include<stdio.h>
#include<conio.h>
void main()
{
long num1,num2,result=1,i;
clrscr();
printf("enter the value of num1 ");
scanf("%l",&num1);
printf("enter the value of num2 ");
scanf("%l",&num2);
for(i=1;i<=num2;i++)
{
result=result*num1;

}
printf("power=%d\n",result);

getch();
}