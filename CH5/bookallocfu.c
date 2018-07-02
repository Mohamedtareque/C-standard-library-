
#define ALLOCSIZE 1000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
char *alloc(int n)
{
    if(allocbuf + ALLOCSIZE - allocp >= n ) // it fits
    {
        allocp += n;
        return allocp - n; // old p 
    }else
        return 0;
    
}
