#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int c, i, n = 3;
    while((c= getchar()) != EOF)
    {
        if(c == '\t')
        {
            for(i = 0 ; i<n ; i++)
                putchar(' ');
        }

        else
            putchar(c);
    }
    return 0;
}

