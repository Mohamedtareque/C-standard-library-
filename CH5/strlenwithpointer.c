char str[] = "Hello worlld";

int main(void)
{
    printf("%d",strlen(str));
    return 0;
}

int strlen(char *s)
{
    char *p = s;
    while(*p != '\0')
        p++;
    return p - s;
}
