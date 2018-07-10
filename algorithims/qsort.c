#include <stdio.h>
#include <stdlib.h>

int arr[7] ={3,1,0,2,5,6,4};
int main(void)
{
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,n-1);
    printf("%s",arr);
    return 0;
}

void qsort(int *a, int start,int end)
{
    int pIndex = 0 ;
    if(a[start] < a[end])
    {
        pIndex = part(a,start,end);
        qsort(a,start , pIndex - 1);
        qsort(a,pIndex + 1 , end);
    }
}
int part(int *a, int start , int end)
{
    int pivote = a[end];
    int i, pIndex = 0;
    for(i = 0 ; i<end ; i++)
    {
        if(a[i]<= pivote)
        {
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[end],a[pIndex]);
    return pIndex;
}

