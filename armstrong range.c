#include<stdio.h>

int main()
{

int b,x,sum=0,l,h,i,n=0,a;
scanf("%d %d",&l,&h);
for(i=l;i<=h;++i)
{
sum=0;
b=i;
a=i;
while(a!=0)
{
	a=a/10;
	n++;
}
while(b!=0)
{
x=b%10;
sum=sum+(x*x*x);
b=b/10;
}
if(i==sum)
{
printf("%d ",sum);
}
n=0;
}
return 0;
}
