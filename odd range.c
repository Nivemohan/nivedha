#include <stdio.h>

int main(void) {
	int l,h,i;
	scanf("%d %d",&l,&h);
	printf("the even numbers between %d %d is",l,h);
	for(i=l;i<=h;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
	return 0;
}
