#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nc;
	for(nc=0;getchar()!=EOF;++nc);
	printf("%d",nc);
	return 0;
}
