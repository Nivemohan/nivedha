#include <stdio.h>


int main(void) {
	int l,h,i,j,c=0;
	scanf("%d %d",&l,&h);
	printf("the prime numbers between %d %d is",l,h);
	for(i=l;i<=h;i++)
	{ 
		c=0;
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		c++;
		
		}
		
	if(c==2)
	    printf("%d ",i);
   
	}
	
	return 0;
}
