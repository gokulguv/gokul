#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,l,count=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='1'||a[i]=='0')
		{
			count++;
		}
	}
	if(count==l)
	{
		printf("It is Binary Digits");
	}
	else
	{
		printf("Not a Binary Digits");
	}
}
