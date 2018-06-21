/* Write a program to copy its imput to its output, replacing each string
   of one or more blanks by a single blank. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ch, prev;
	while((ch=getchar()) != EOF)
	{
		if(ch == ' ')
		{
			if(prev != ' ')
				putchar(ch);
			prev = ch;
		}
		else
		{
			putchar(ch);
			prev = ch;
		}
	}
	return 0;
}
