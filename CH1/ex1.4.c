

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		float cel , fhr ;
		int step , lower , max;
		step = 1 ;
		lower = 0 ;
		max = 100 ;
		cel = lower;
		while(cel<=max){
			fhr = (9.0/5.0 * cel) + 32 ;
			printf("%3.1f\t%3.1f\n",fhr,cel);
			cel = cel + step;
		}
	return EXIT_SUCCESS;
}
