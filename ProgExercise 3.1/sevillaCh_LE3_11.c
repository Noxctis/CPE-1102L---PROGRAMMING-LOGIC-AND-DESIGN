/*
============================================================================
 FILE        : sevillaCh_LE3_11.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that asks for user�s yearly pay and displays his weekly pay.
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
#define monthsinyear 52

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none
 RETURNS     : int - exit code
===========================================================================
*/

int main() {

	float yearlypay,weeklypay;
	//asks for the yearly pay
	printf("Enter your yearly pay: ");
	scanf("%f", &yearlypay);
	//divides the yearly pay by 52 since there are 52 weeks in a year to get weekly pay.
	weeklypay = yearlypay/monthsinyear;
	//prints the weekly pay with 2 decimal points
	printf("\nThe weekly pay is %.2f\n", weeklypay);
	return 0;
}
