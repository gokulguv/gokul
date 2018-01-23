#include <stdio.h>
#include <math.h> 

void main()
{
    long long num;
    int count = 0;

   
    printf("Enter any number: ");
    scanf("%lld", &num);


    count = log10(num) + 1;

    printf("Total digits: %d", count);

    return 0;
}
