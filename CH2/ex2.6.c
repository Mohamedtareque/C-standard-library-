int main(void)
{
    int y = 91;
    int m  = setbits(m,4,3,y);;
    printf("%d",m);
    return 0;
}

int setbits(unsigned int x, int p, int n, unsigned int y)
{
    x = ((y >> (p+1 -n)) & ~(~0 << n));
    return x;
}
