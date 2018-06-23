#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH     50

int longest = 0;
int counter = 0;
int currentLine[MAX_LINE_LENGTH];
int longestLine[MAX_LINE_LENGTH];

int main(void)
{
    int i, c, nc = 0 ;
    while((c = getchar()) != EOF)
    {
        currentLine[counter] = c;
        nc++;
        counter++;
        if(c == '\n')
        {
            if(nc > longest)
            {
                longest = nc;
                nc = 0;
                counter = 0;
                for(i=0;i<MAX_LINE_LENGTH;i++)
                    longestLine[i] = currentLine[i];
            }
        }
    }
    printf("The longest line is : \n");
    for(i=0;i<MAX_LINE_LENGTH;i++)
        printf("%c",longestLine[i]);
    return 0;
}

