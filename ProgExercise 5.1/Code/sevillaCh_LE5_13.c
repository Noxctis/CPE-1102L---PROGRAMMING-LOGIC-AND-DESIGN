/*
============================================================================
 FILE        : sevillaCh_LE5_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu.
 COPYRIGHT   : October 10, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
October 10, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

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
    int operation;

    do
    {
        printf("[1] Power Problem Solver\n");
        printf("[2] Factorial Problem Solver\n");
        printf("[3] Roots of the Quadratic Equation\n");
        printf("[4] Exit\n");
        printf("Choose an Operation: ");

        scanf("%d", &operation);

        switch (operation)
        {
        case 1:
        {
            float power, base, exponent;
            printf("\n\nPower Problem Solver\n\n");
            printf("Enter base number:");
            scanf("%f", &base);
            printf("Enter Exponent:");
            scanf("%f", &exponent);

            power = pow(base, exponent);

            printf("%.2f to the power of %.2f is %.2f", base, exponent, power);
            break;
        }
        case 2:
        {
            int number, i, factorial = 1;
            printf("\n\nFactorial Problem Solver\n\n");
            printf("Enter Number:");
            scanf("%d", &number);

            for (i = 1; i <= number; ++i)
            {
                factorial *= i;
            }
            printf("The factorial !%d is %d", number, factorial);
            break;
        }
        case 3:
        {
            double a, b, c, discriminant, root1, root2;
            printf("\n\nRoots of the Quadratic Equation\n\n");
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
                root1 = (-c / b);
                printf("There is only one root: %.2lf", root1);
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
            break;
        }
        case 4:
        {
            printf("Exiting the program.");
            break;
        }
        default:
        {
            printf("Invalid Choice. Please try again\n");
            break;
        }
        }
        getch();
        system("cls");
    } while (operation != 4);

    return 0;
}
