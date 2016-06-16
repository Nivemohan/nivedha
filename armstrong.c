#include <stdio.h>

int main(void) {
	int a,b,f=1,t,x,sum=0;
	scanf("%d",&a);
    t=a;
    b=a;
    while(t)
    {
    	t=t/10;
    	f=f*10;
    }
    while(f>1)
    {
    	
    	f=f/10;
    	x=a/f;
    	sum=sum+(x*x*x);
    	a=a%f;
     }
     if(b==sum)
     printf("it is armstrong number");
     else
     printf("it is not armstrong number");
	return 0;
}
