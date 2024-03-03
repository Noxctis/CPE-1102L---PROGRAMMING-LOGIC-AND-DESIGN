/*
============================================================================
 FILE        : sevillaCh_LE5_11.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A Program that will ask 10 integers and display the average of all even numbers and the product of all odd numbers entered by the user.
 COPYRIGHT   : October 4, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
October 4, 2023	    Me              Made the program
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
    int num = 0, i, totaleven = 0, evencount = 0, oddproduct = 1, oddcount = 0;
    float average = 0;
    // Asks for a letter
    for (i = 0; i < 10; i++)
    {
        printf("Enter integer number %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            totaleven += num;
            evencount++;
        }
        else
        {
            oddproduct *= num;
            oddcount++;
        }
    }
    if (evencount != 0)
    {
        average = totaleven / evencount;
    }

    if (oddcount == 0)
    {
        oddproduct = 0;
    }
    printf("\nThe average of all even numbers is: %.2f\n", average);
    printf("\nThe product of all odd numbers is: %d\n", oddproduct);
    return 0;
}
