#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ch ;
	while((ch=getchar())!= EOF)
	{
		if(ch=='\t')
			ch="\\t";
		if(ch=='\b')
			ch="\\b";
		if(ch=='\\')
			ch="/\\";
		putchar(ch);
	}
	return 0;
}
