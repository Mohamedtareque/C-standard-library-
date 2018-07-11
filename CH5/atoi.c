#define         MAXSIZE         30

char buffer[MAXSIZE] = "123";

int main(void)
{
    int num = atoii(buffer);
    printf("%d",num+1);
    return 0;
}

int atoii(char *s) // "123" => 100 + 20 + 3 --> n * 10 *s
{
    int n = 0 ;
    while(*s >= '0' && *s <= '9' && *s!='\0' )
    {
        n = (*s++ - '0' ) + (10 * n)  ;// covert string to number
    }
    return n; 
}
