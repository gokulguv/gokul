#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("\nswap the numper%d%d"a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\nswap the number%d%d"a,b);
return 0;
}
