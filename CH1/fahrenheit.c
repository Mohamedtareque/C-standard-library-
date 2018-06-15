/*
 ============================================================================
 Name        : fahrtable.c
 Author      : MTarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
/* print Fahrenheit table*/
void main()
{
	float fahr, celsuis;
	int upper, lower, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	/*
	// using for loop
	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%3f %6.2f \n", fahr, (5.0/9.0)*(fahr-32));
	}
	*/
	while(fahr <= upper)
	{
		celsuis = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f  %6.1f \n", fahr, celsuis );
		fahr = fahr + step;
	}

}
