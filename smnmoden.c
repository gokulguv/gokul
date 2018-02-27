#include <stdio.h>

int main(void) {
int a,b,v;
printf("printf the number:");
scanf("%d%d",&a,&b);
v=a*b;

if(v%2==0)

printf("odd number:\n");
else
printf("even number:\n");

	return 0;
}
