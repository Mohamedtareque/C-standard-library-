typedef enum state
{
    Not_occured ,
    occured
}State;
char a[]="Hello world zone";
char b[]="zone";
int main(void)
{
    int x = 0 ;
    x =  strend(a,b);
    printf("%d",x);
    return 0;
}

int strend(char *s, char *t)
{
    while(*(++s));
    while(*(++t));
    while(*t-- == *s--)
        if(!(*t))
            return occured;
    return Not_occured;
}
