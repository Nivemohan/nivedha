#include <stdio.h>

int main(void) {
	int a,i,sum=0;
    for(i=1;i<=15;i++)
    {
    	sum=sum+i;
    }
    printf("sum of numbers from 1 to 15:%d",sum);
    sum=0;
    for(i=15;i<=45;i++)
    {
    	if(i%2!=0)
    	sum=sum+i;
    }
    printf("\nsum of odd numbers from 15 to 45:%d",sum);
	return 0;
}
