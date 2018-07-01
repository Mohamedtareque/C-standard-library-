int main(void)
{
    int a = 5, b = 7;
    swap(&a,&b);
    printf("%d  %d",a,b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b ;
    *b = temp;
}
