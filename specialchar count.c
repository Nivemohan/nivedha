#include <stdio.h>
#include<string.h>
int main(void) {
	
	char a[1000];
	int i,c=0,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	  if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
	  {
	  }
	  else if(a[i]>='0'&&a[i]<='9')
	  {
	  }
	  else
	  c++;
		
	}
	printf("%d",c);
	return 0;
}
