#include <stdio.h>
int main()
{
    int low, high, i, flag;
    int a=low,b=high;
    printf("Enter two numbers(intervals): ");
    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

       
    }

    return 0;
}
