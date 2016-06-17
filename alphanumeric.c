#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
int i,n,c=0,c1=0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
c++;
else 
c1++;
}
printf("alphabets:%d\nnumbers:%d\nalphanumeric values:%d",c,c1,n);
return 0;
}
