int main(void)
{
    int y = 94;
    int m  = invert(y,3);
    printf("%d",m);
    return 0;
}

int invert(unsigned int x, int n)
{
    int rbit ;

    while(n-- > 0)
    {
        rbit = (x & 1) << (bitCount()-1);
        x = x >> 1;
        x = x & rbit;
    }
    return x;
}

void bitCount() {

    int counter = 0;
    unsigned int val = ~0;
    for(counter ; (val = val >> 1) > 0 ; counter++)
        ;
    return counter;

 }



