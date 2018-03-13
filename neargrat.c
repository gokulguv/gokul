aaaa#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	
	i=n/10;
	if(n%10!=0)
	i=i+1;
	i*=10;
	printf("%d",i);
	
	return 0;
}
