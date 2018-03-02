#include<stdio.h>
int main()
{
int num[10],i,j,k;
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
printf("%d",a[9]);
return 0;
}
