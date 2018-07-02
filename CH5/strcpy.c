char str[20]= "Helddlo worlld";
char str2[20];
int main(void)
{
    strcpy(str2,str);
    printf("%s",str2);
    return 0;
}

void strcpy(char *s, char *t)
{
    while((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}
