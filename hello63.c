#include <stdio.h>

void main(void) {
int i,k=0;
char a[50];
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]==' ')
	k++;
}
printf("%d",k+1);

	return 0;
}
