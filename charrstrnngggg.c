#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


void main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits, others;

    alphabets = digits = others = 0;


    /* Input string from user */
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            digits++;
        else
            others++;

        s++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
