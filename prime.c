#include <stdio.h>

int main(void) {
	int a,i,count=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==2)
	printf("it is a prime number");
	else
	printf("it is not a prime number");
	return 0;
}
