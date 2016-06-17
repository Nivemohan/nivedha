#include<stdio.h>

int main()
{
int a,i,b;
scanf("%d",&a);
for(i=1;i<=10;i++)
{
	b=i*a;
	printf("%d * %d = %d\n",i,a,b);
}

return 0;
}
