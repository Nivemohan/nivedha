#include <stdio.h>
#include <string.h>

int main(void) {
	char str[20],b[20];
	int i,j=0,n;
	scanf("%s",str);
	n=strlen(str);
	printf("REVERSE STRING:\n");
	for(i=n;i>0;i--)
	{
	  b[j]=str[i];
	  printf("%c",b[j]);
	  j++;
	}
	printf("\nVOWELS REMOVED:\n");
	for(i=0;i<n;i++)
	{
		if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u')
		printf("%c",b[i]);
	}
	
	
	// your code goes here
	return 0;
}
