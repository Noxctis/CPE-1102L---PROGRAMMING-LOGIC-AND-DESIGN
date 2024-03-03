/*
============================================================================
 FILE        : sevillaCh_LE3_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that extracts and adds the two least significant digits of an integer.
 COPYRIGHT   : September 18, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
 revision date	    author         description of the change
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

#include <stdio.h>

//define constants
#define getremainder 10

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none
 RETURNS     : int - exit code
===========================================================================
*/

int main() {

	int num,sum,x,y;
	//asks for an input of any integer
	printf("Enter an integer:");
	scanf("%d", &num);
	//to get the first digit you modulus by 10 to get the remainder which is the first digit
	x = num%getremainder;
	//to get the second digit you first divide the number by 10 to move the decimal point once to the left and then modulus to get that last digit
	y = (num/getremainder)%getremainder;
	//adds both to get the sum of the last two digits
	sum = x+y;
	//prints the sum of the last two digits
	printf("\nSum of last two digits is: %d + %d = %d\n",y,x,sum);
	return 0;
}
