#include <stdio.h>

int main(void) {
	int i,l,h,j;
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
	printf("%d",j);
	break;
	}
	}
	
	
	// your code goes here
	return 0;
}
