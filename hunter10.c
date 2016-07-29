#include<stdio.h>
int main()
{
int a1[10],a2[10],n1,n2,i,j,c=0;
scanf("%d %d",&n1,&n2);
for(i=0;i<n1;i++)
scanf("%d",&a1[i]);
for(i=0;i<n2;i++)
scanf("%d",&a2[i]);
for(i=0;i<n2;i++)
{
for(j=0;j<n1;j++)
{
if(a2[i]==a1[j])
c++;
}
}
if(c==n2)
printf("subset");
else
printf("not subset");
return 0;
}
