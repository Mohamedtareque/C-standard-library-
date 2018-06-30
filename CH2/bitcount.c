void bitCount() {

    int counter = 0;
    unsigned int val = ~0;
    for(counter ; (val = val >> 1) > 0 ; counter++)
        ;
    return counter;

 }
