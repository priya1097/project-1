#include<stdio.h>
void main()
{
int n,temp,r,rev=0;
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(rev==temp)
printf("palindrome");
else
printf("not a palindrome");
}
