#include <stdio.h>

int main(void) {
	int a,f=1,t,count=0;
	scanf("%d",&a);
    t=a;
    while(t)
    {
    	t=t/10;
    	f=f*10;
    }
    while(f>1)
    {
    	f=f/10;
    	a=a%f;
    	count++;
   }
     	printf("%d",count);
	return 0;
}
