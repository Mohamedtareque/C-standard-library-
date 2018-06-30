
int main(void)
{
    int x = 0x94;
    int y = getbits(x,4,3);
    printf("%x",y);
    return 0;
}

int getbits(unsigned int x, int p, int n)
{
    return((x >> (p+1-n) )& ~(~0 << n));
}

/*
//decimal version
int main(void)
{
    int x = 94;
    int y = getbits(x,4,3);
    printf("%d",y);
    return 0;
}

int getbits(unsigned int x, int p, int n)
{
    return((x >> (p+1-n) )& ~(~0 << n));
}
*/
