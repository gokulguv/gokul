#include<stdio.h>
int main()
{
int num,i=0,temp,sum=0;
scanf("%d",&num);
for(i=0;num!=0;i++)
{
temp=num%10;
sum=sum+temp;
num=num/10;
}
printf("%d",sum);
return 0;
}
