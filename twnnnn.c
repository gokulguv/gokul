#include <stdio.h>

void main()
{
    long long num;
    int count = 0;

    printf("Enter any number: ");
    scanf("%lld", &num);

    
    while(num != 0)
    {
        
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    }

    printf("Total digits: %d", count);

    return 0;
}

