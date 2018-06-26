#include <stdio.h>
#include <stdlib.h>

#define TABINC      8


int main(void)
{
    int pos = 1, nb, c;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            nb = (TABINC - (pos - 1)) % TABINC;
            if( nb > 0)
            {
                putchar(' ');
                pos++;
                nb--;
            }
        }
        else if(c == '\n')
            pos = 1;
        else
        {
            putchar(c);
            pos++;
        }
    }
    return 0;
}

