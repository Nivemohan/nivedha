#include <stdio.h>

int main(void) {
	int a,r;
	scanf("%d",&a);
	while(a)
	{
		r=a%10;
		a=a/10;
		printf("%d",r);
	}
	// your code goes here
	return 0;
}
