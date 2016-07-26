#include <stdio.h>

int main(void) {
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		printf("%d ",a[i]);
	}
	// your code goes here
	return 0;
}
