#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c , nt,nb,nl ;
	while((c=getchar())!= EOF)
	{
		if(c=='\t')
			nt++;
		if(c=='\b')
			nb++;
		if(c=='\n')
			nl++;
	}
	printf("%d\t%d\t%d",nl,nt,nb);
	return 0;
}
