#include <stdio.h>
#include<string.h>

int main(void) {
	char a[20];
	int i,d=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		d=d*10+(a[i]-'0');
	}
	printf("%d",d);
	
	return 0;
}
