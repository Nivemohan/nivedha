#include<stdio.h>

int main()
{
int a,i,f=1;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
	f=i*f;
}
printf("%d",f);

return 0;
}
