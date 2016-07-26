#include <stdio.h>

int main(void) {
	int i,l,h,j,c=0;
	scanf("%d %d",&l,&h);
	
	for(j=l;j<h;j++)
	{
	for(i=2;i<=j;i++)
	{
	if(j%i==0)
	{
		break;
	}
	else
	c++;
	break;
	}
	}
	printf("%d",c);
	
	// your code goes here
	return 0;
}
