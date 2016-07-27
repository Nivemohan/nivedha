#include<stdio.h>
void main()
{
int n,a[100],k,i,j,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
j=k+1;
for(i=0;i<k;i++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
j++;
}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
