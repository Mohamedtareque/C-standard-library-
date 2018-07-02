char str[20]= "Hello world";
char str2[5] = "xxx";
int main(void)
{
    strcat(str,str2);
    printf("%s",str);
    return 0;
}

void strcat(char *s, char *a)
{
    while(*(++s));
    while(*s++ = *a++);
}
