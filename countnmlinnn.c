#include <stdio.h>
 
void main(int argc, char *argv[])
{
    int i = 0;
 
    /* If no sentence is given in the command line */
    if (argc == 1)
    {
        printf("\n No sentence given on command line");
        return;
    }
    else
    {
        printf("\nThe words in the sentence are:");
        /*
         * From argv[1] to argv[argc -1] calculate the number of arguments
         */
        for (i = 1;i < argc;i++)
        {
            printf("\n%s", argv[i]);
         }
        printf("\n\nTotal number of words:");
        printf(" %d", argc-1);
    }
}
