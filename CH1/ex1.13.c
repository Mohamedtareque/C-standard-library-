#include <stdio.h>
#include <stdlib.h>
#define WORD_MAX_LENGTH 		8
#define ARRAY_MAX_LENGTH		8
int arr[ARRAY_MAX_LENGTH];
int arr_counter = 0;
void drawHistogram();
int main(void)
{
    int c, i, nc=0;
    for(i=0;i<=8;i++)
        arr[i]=0;
    while((c = getchar()) != '0')
    {
       if(c == ' ' || c == '\n' || c == '\t')
       {
           arr_counter++;
           nc = 0;
       }
       else
        {
            nc++;
            arr[arr_counter] = nc;
       }
    }
    for(i =0 ; i<=8 ; i++)
        printf("%d-",arr[i]);
    printf("\n");
    drawHistogram();
    return 0;
}

void drawHistogram()
{
	int i, j;
	for(i=0;i<=ARRAY_MAX_LENGTH;i++)
	{
        printf(" %d|",i);
		for(j=0;j<arr[i];j++)
		{
			printf("=");
		}
		printf("\n");

	}
	printf("  ");
	for(i=0 ; i< 20 ; i++)
        printf("--");
    printf("\n");
    printf("  ");
    for(i=0 ; i< 25 ; i+= 5)
        printf(" %d ",i);
}
