#include <stdio.h>

int main(void) {
	int a[100],i,n,j=0,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		f=0;
	
	for(i=0;i<n;i++)
	{
		if(a[j]==a[i]&&i!=j)
		f=1;
		
		
	}
	if(f!=1)
	printf("%d",a[j]);
	}
	
	// your code goes here
	return 0;
}
