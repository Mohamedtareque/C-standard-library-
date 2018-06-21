#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c , nl ;
	while((c=getchar())!= EOF)
	{
		if(c=='\n')
			nl++;
	}
	printf("%d",nl);
	return 0;
}
