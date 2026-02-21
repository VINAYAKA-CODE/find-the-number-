#include<stdio.h>
#include<conio.h>
int main()
{
int p=63;
int u;
clrscr();
printf("guees the number");
scanf("%d",&u);
while(u<p)
{
printf("too low\n");
printf("guees the aging ");
scanf("%d",&u);
}
while(u>p)
{
printf("too high\n");
printf("guees thee aging");
scanf("%d",&u);
}
if(u==p)
{
printf(" yes correct number");
}
getch();
return 0;
}
