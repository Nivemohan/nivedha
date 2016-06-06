#include <stdio.h>

int main(void) {
	int a,f=1,t,n;
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
    	n=n+(a/f);
    	a=a%f;
    	
   }
   printf("%d",n);
     

	return 0;
}
