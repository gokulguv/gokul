#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char a[20]="HELLOWORLD123";
	if(isalnum(a))
	printf("YES");
	else
	printf("NO");
return 0;
}
