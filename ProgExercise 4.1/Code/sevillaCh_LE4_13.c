/*
============================================================================
 FILE        : sevillaCh_LE4_13.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that determines a student’s final grade and indicate whether it is passing or failing.
 COPYRIGHT   : October 2, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
October 2, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

#include <stdio.h>
#include <math.h>

// Define Constants
const float cMinimumpassing = 50;
const float cMaximumpassing = 100;
const float cZero = 0;
const float numofmarks = 4;

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none
 RETURNS     : int - exit code
===========================================================================
*/

int main()
{
	float mark1, mark2, mark3, mark4, finalgrade;
	// Asks for the 1st mark
	printf("Enter 1st mark: ");
	scanf("%f", &mark1);
	// Asks for the 2nd mark
	printf("Enter 2nd mark: ");
	scanf("%f", &mark2);
	// Asks for the 3rd mark
	printf("Enter 3rd mark: ");
	scanf("%f", &mark3);
	// Asks for the 4th mark
	printf("Enter 4th mark: ");
	scanf("%f", &mark4);
	// if the final grade is more than or equal to the minimum passing and less than or equal to the maximum passing
	printf("1st mark: %.2f \t 2nd mark: %.2f \t 3rd mark: %.2f \t 4th mark: %.2f \n", mark1, mark2, mark3, mark4);
	if ((mark1 <= 100 && mark1 >= 0) && (mark2 <= 100 && mark2 >= 0) && (mark3 <= 100 && mark3 >= 0) && (mark4 <= 100 && mark4 >= 0))
	{

		// calculates the finalgrade by averaging them
		finalgrade = (mark1 + mark2 + mark3 + mark4) / numofmarks;

		if (finalgrade >= cMinimumpassing && finalgrade <= cMaximumpassing)
		{
			printf("FINAL GRADE: %.2f", finalgrade);
			printf("\nREMARKS:PASSED");
		}
		// if the final grade is less than the minimum passing but greater than or equal to zero
		else if (finalgrade < cMinimumpassing && finalgrade >= cZero)
		{
			printf("FINAL GRADE: %.2f", finalgrade);
			printf("\nREMARKS:FAILED");
		}
	}
	// if its less than zero or greater than 100 it means there was an invalid input
	else
	{
		printf("INVALID INPUT!");
	}
	return 0;
}