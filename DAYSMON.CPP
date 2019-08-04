#include<stdio.h>
#include<conio.h>
void main()
{
int days, months;
clrscr();
printf("enter any number\n");
scanf("%d",&days);
days=days%30;
months=days/30;
printf("months=%d days=%d",days,months);
getch();
}