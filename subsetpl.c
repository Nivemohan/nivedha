#include<stdio.h>
int main()
{
char str[20];
int n,i,p,l;
scanf("%s",str);
scanf("%d %d",&p,&l);
for(i=p;i<p+l;i++)
{
printf("%c",str[i]);
}
return 0;
}
