/*
============================================================================
 FILE        : sevillaCh_LE5_23.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that will display the 1-N value of the Fibonacci sequence.
 COPYRIGHT   : October 15, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
October 15, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

#include <stdio.h>
#include <math.h>

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
    int number, i, fibonacci = 1, x = 0, y = 1;
    printf("Enter limit: ");
    scanf("%d", &number);
    printf("Fibonacci sequence: ");
    for (i = 1; i <= number; i++)
    {
        printf("%d ", fibonacci);
        fibonacci = x + y;
        // Formula for the next term of fibonacci is the previous term plus the current term.
        x = y;
        // Assigns x to the previous term
        y = fibonacci;
        // Assigns y to the current term
    }
    return 0;
}
