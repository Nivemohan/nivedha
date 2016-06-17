#include<stdio.h>

int main()
{
int a,i,b=0,c=1,d;
scanf("%d",&a);

printf("%d %d ",b,c);
for(i=3;i<a;i++)
{
d=b+c;
b=c;
c=d;
printf("%d ",d);
}

return 0;
}
