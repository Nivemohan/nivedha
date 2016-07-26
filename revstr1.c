#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	int i=0,n,j,t;
	scanf("%s",str);
	n=strlen(str);
	j=n-1;
	while(i<j)
	{
		
	
		t=str[i];
		str[i]=str[j];
		str[j]=t;
		
	j--;
	i++;
	}
	printf("%s",str);

	return 0;
}
