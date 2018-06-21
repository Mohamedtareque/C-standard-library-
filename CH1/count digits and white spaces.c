/*
 * count digits and white spaces*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c, nwhite, nother, i;
	int ndigits[10];
	for(i=0;i<10;i++)
		ndigits[i]=0;
	while((c=getchar())!=EOF)
	{
		if(c>='0'&&c<='9')
		{
			++ndigits[c-'0'];
		}else if(c==' '||c=='\t'||c=='\n')
			nwhite++;
		else 
			nother++;
	}
	printf("%d%d",nwhite,nother);
	for(i=0;i<10;i++)
		printf("%d",ndigits[i]);
	return 0;
}
