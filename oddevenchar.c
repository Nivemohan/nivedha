#include <stdio.h>

int main(void) {
	char str[10];
	int i,t;
	scanf("%s",str);
	for(i=0;i<strlen(str)-1;i=i+2)
	{
		t=str[i];
		str[i]=str[i+1];
		str[i+1]=t;
		
	}
	printf("%s",str);
	
	// your code goes here
	return 0;
}
