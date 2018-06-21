#include <stdio.h>
#include <stdlib.h>

int main(void) {
		float cel , fhr;
		for(fhr = 0 ; fhr <= 300 ; fhr=fhr+20)
		{
			cel = 5.0/9.0 *(fhr-32);
			printf("%3.1f\t%3.1f\n",fhr,cel);
		}
	return EXIT_SUCCESS;
}
