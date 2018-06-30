
int main(void)
{
    int y = 8;
    int m  = invert(y,0,1);
    printf("%d",m);
    return 0;
}

int invert(unsigned int x, int p, int n)
{
    x ^= ((~(~0 << n)) << (p+1-n));
    return x;
}
