#include<stdio.h>
#include<conio.h>
void main()
{
float cp,sp,profit ,loss;
clrscr();
printf("enter the cost price");
scanf("%f",&cp);
printf("enter  the value ofsell price");
scanf("%f",&sp);
if(sp>=cp)
{
profit=sp-cp;
printf("profit: %f",profit);
}
else
{
loss=cp-sp;
printf("loss : %f",loss);
}
getch();
}