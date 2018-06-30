int main(void)
{
    int y = 0x94;
    int m  = invert(y,3);
    printf("%x",m);
    return 0;
}

int invert(unsigned int x, int n)
{
    int shifted_val = x >> n;
    int reserved_val = (x & (~(~0 << n))) << (bitCount(x) - n) ;
    return shifted_val ^ reserved_val;
}

int bitCount(unsigned int n) {

    int counter = 0;
    while(n) {
        counter += n % 2;
        n >>= 1;
    }
     if( counter < 4 )
        counter = 4;
    else if(counter <7)
        counter = 8;
    else if(counter <12)
        counter = 12;
    else if(counter <16)
        counter = 16;
    return counter;
 }



