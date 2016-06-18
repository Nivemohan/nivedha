#include <stdio.h>

int main(void) {
	
	char a[1000];
	int i,c=0,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
	  if(a[i]=='.')
	  c++;
		
	}
	printf("%d",c);
	return 0;
}
