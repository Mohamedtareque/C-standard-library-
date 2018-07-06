#define         MAXSIZE         30

char buffer[MAXSIZE] = "world zone";
int main(void)
{
    strrev(buffer);
    printf("%s",buffer);
    return 0;
}

void strrev(char *s)
{
    char c = 0;
    char *ptr = s;
    while(*s)
        s++;
    char *f = s-1;
    while(ptr < f)
    {
        c = *ptr;
        *ptr = *f;
        *f = c;
        f--;
        ptr++;
    }
}
