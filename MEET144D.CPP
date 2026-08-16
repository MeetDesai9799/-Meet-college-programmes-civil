#include<stdio.h>
#include<conio.h>
void main()
{ int x,y,a,s,m,d;
clrscr();
printf("enter 2 numbers");
scanf("%d%d" ,&x,&y);
a=x+y;
s=x-y;
m=x*y;
d=x/y;
printf("addition =%d\nSubtraction =%d\n Multiplication =%d\nDivision =%d\n",a,s,m,d);
getch();
}