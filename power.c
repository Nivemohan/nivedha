#include <stdio.h>

int main(void) {
      int a,p,i=1,sum=1;
      scanf("%d",&a);
      scanf("%d",&p);
      while(i<=p)
      {
      	sum=sum*a;
      	i++;
      }
      printf("%d",sum);

	return 0;
}
