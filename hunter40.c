#include<stdio.h>
void main()
{
int a,r,r1[20],i,j=0,sum=0,flag=0,k=0;
scanf("%d",&a);
while(a)
{
r=a%10;
sum=sum+r;
a=a/10;
j++;
}
j=0;
while(sum)
{
r1[j]=sum%10;
j++;
sum=sum/10;
}
for(i=0;i<j;i++)
{
if(r1[i]!=r1[j-i-1])
{
flag=1;
break;
}
}
if(flag==1)
printf("not palindrome");
else
printf("palindrome");
}
