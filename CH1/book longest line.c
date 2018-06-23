#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH     50

int longest = 0;
int counter = 0;
char currentLine[MAX_LINE_LENGTH];
char longestLine[MAX_LINE_LENGTH];

int main(void)
{
    int longest = 0;
    int len = 0;
    while((len = getLine(currentLine,MAX_LINE_LENGTH))> 0)

        if(len > longest)
        {
            longest = len ;
            copy(longestLine,currentLine);
        }
    printf("%s",longestLine);
    return 0;
}

int getLine(char arr[],int lim)
{
    int c, i;
    for(i=0 ; ((c = getchar())!= EOF) && c != '\n' ; i++)
        arr[i] = c;
    if(c == '\n')
        arr[i] = '\0';
    return i;

}

void copy(char to[], char from[])
{
    int i;
    for(i=0 ; i<MAX_LINE_LENGTH ; i++)
        to[i]=from[i];
}
