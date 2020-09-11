/* Fig. 2.5: fig02_05.c
  Addition program */
  
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
	int integer1; /* first number to be input by user */
	int integer2; /* second number to be input by user */
	int Div; /* variable in with div will be stored */
	
	printf( "Enter first integer\n"); /* promt */
	scanf( "%d", &integer1 ); /* read an integer */
	
	printf( "Enter second integer\n" ); /* prompt */
	scanf( "%d", &integer2 ); /* read an integer */
	
	Div = integer1 / integer2; /* assign div */
	
	\\printf( " %d = %d / %d\n", div, integer2, integer1); /*print sum*/
	
	
	
	return 0; /* indicate that program ended successfully */
	
} /* end function main */

