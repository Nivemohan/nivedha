#include <stdio.h>

int main(void) {
	
	char a[100];
	int n,i,c=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		c++;
	}
	printf("%d",c);
	return 0;
}
