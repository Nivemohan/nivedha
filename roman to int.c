#include <stdio.h>

int main(void) {
	char a[10];
	int i,n,b;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='I')
		a[i]=1;
		else if(a[i]=='V')
		a[i]=5;
		else if(a[i]=='X')
		a[i]=10;
		else if(a[i]=='L')
		a[i]=50;
		else if(a[i]=='C')
		a[i]=100;
		else if(a[i]=='D')
		a[i]=500;
		else if(a[i]=='M')
		a[i]=1000;
		else
		printf("invalid value");
	}
	b=a[n-1];
	for(i=n-1;i>0;i--)
	{
	if(a[i]>a[i-1])
	b=b-a[i-1];
	else if(a[i]==a[i-1]||a[i]<a[i-1])
	b=b+a[i-1];
	}
	printf("%d",b);
	
	
	// your code goes here
	return 0;
}
