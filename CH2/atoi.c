char a[] = "1";
int main(void)
{
   int c = at(a);
   printf("%d",c);
    return 0;
}

int at(char *arr)
{
    int i = 0, n ;
    while( arr[i]>='0' && arr[i] <= '9')
    {
        n = 10 * n + (arr[i] - '0');
        i++;
    }
    return n;
}
