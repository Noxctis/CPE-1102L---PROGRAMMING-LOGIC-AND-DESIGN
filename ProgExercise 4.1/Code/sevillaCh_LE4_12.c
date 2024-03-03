/*
============================================================================
 FILE        : sevillaCh_LE4_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that computes the real roots of a quadratic equation.
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
    double a, b, c, discriminant, root1, root2, oneroot;
    // Asks for constant a
    printf("Enter constant a: ");
    scanf("%lf", &a);
    // Asks for constant b
    printf("Enter constant b: ");
    scanf("%lf", &b);
    // Asks for constant c
    printf("Enter constant c: ");
    scanf("%lf", &c);
    // Calculates the discriminant based on the quadratic formula
    discriminant = (b * b) - (4 * a * c);

    // if a is 0 and b is 0 there is no solution
    if (a == 0 && b == 0)
    {
        printf("There is no solution");
    }
    // if a is zero
    else if (a == 0)
    {
        // Calculates one root if a is zero
        oneroot = (-c / b);
        printf("There is only one root: %.2lf", oneroot);
    }
    // if the discriminant is less than 0
    else if (discriminant < 0)
    {
        printf("There are no real roots");
    }
    else
    {
        // Calculates the first root based on the quadratic formula
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        // Calculates the second root based on the quadratic formula
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        // if the roots are the same its the same
        if (root1 == root2)
        {
            printf("There is only one root since they have the same values, %.2lf", root1);
        }
        // prints the different roots
        else
        {
            printf("There are two roots, %.2lf and %.2lf", root1, root2);
        }
    }
    return 0;
}
