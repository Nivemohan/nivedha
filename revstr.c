#include <stdio.h>

int main(void) {
	char a[10];
	int i;
	scanf("%s",a);
	for(i=strlen(a);i>=0;i--)
	{
	printf("%c",a[i]);
	}
	return 0;
}
