#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],sum=0,i,n,max;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
if(sum<0)
{
max=0;
}
else
{
max=sum;
}
printf("%d",max);
getch();
}
