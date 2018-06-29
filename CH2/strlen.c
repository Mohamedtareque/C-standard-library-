char a[] = "Hello it's me";
int main(void)
{
   int c = strlen(a);
   printf("%d",c);
    return 0;
}

int strlen(char *arr)
{
    int i = 0 ;
    while(arr[i] != '\0')
        i++;
    return i;
}
