  
#include <stdio.h>

int main( void )
{
	int num; 
	int r;
	scanf("%d", &num);
	printf("num");
	r = num%2;
	
	if( r==0 ){
	
	printf("Number is Even");	
}else{

	printf("Number is Odd");}

	
	return 0; /* indicate that program ended successfully */
	
} /* end function main */

