#include <stdio.h>
int happy(int);
int main() 
{
	int a,s;
	scanf("%d",&a);
	s=happy(a);
	if(s==1)
	{
		printf("happy no");
	}
	else
	{
		printf("not happy no");
	}
	return 0;
}
int happy(int t)
{
	int r,sum=0,a;
	a=t;
	while(t!=0)
	{
		
		r=t%10;
		sum+=r*r;
		t=t/10;
	}
	if(sum==1)
	{
		return sum;
	}
	else if(sum==4||sum==a)
	return 0;
	else
	{
	happy(sum);
}
}
