/*
============================================================================
 FILE        : sevillaCh_LE6_13.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu.
 COPYRIGHT   : November 8, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
November 8, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

// Header files

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

// Function Prototypes
void displayMenu();
int powerSolver(int base, int p);
int factorialSolver(int num);
int quadraticSolver(int a, int b, int c);
double root1, root2;

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none / void
 RETURNS     : int - exit code
===========================================================================
*/

int main()
{
    int operation;

    do
    {
        displayMenu();
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
        {
            float power, base, exponent;
            printf("\n\nPower Problem Solver\n\n");
            printf("Enter base number:");
            scanf("%f", &base);
            // Can't calculate for negative exponents due to function being an int.
            do
            {
                printf("Enter Exponent:");
                scanf("%f", &exponent);
            } while (exponent < 0);

            power = powerSolver(base, exponent);

            printf("%.2f to the power of %.2f is %.2f", base, exponent, power);
            break;
        }
        case 2:
        {
            int number, factorial;
            printf("\n\nFactorial Problem Solver\n\n");
            // Negative factorials dont exist
            do
            {
                printf("Enter Number:");
                scanf("%d", &number);
            } while (number < 0);
            factorial = factorialSolver(number);
            printf("The factorial !%d is %d", number, factorial);
            break;
        }
        case 3:
        {
            int a, b, c, answerQuadratic;
            printf("\n\nRoots of the Quadratic Equation\n\n");
            // Asks for constant a
            printf("Enter constant a: ");
            scanf("%d", &a);
            // Asks for constant b
            printf("Enter constant b: ");
            scanf("%d", &b);
            // Asks for constant c
            printf("Enter constant c: ");
            scanf("%d", &c);
            // Calculates the discriminant based on the quadratic formula
            answerQuadratic = quadraticSolver(a, b, c);
            if (answerQuadratic == 1)
                printf("\nThere is no solution");
            else if (answerQuadratic == 2)
                printf("\nThere is only one root: %.2lf", root1);
            else if (answerQuadratic == 3)
                printf("\nThere are no real roots");
            else if (answerQuadratic == 4)
                printf("\nThere are two roots, %.2lf and %.2lf", root1, root2);
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
}

/*
============================================================================
 FUNCTION    : displayMenu
 DESCRIPTION : Displays the choices available
 ARGUMENTS   : none / void
 RETURNS     : void
===========================================================================
*/

void displayMenu()
{
    printf("[1] Power Problem Solver\n");
    printf("[2] Factorial Problem Solver\n");
    printf("[3] Roots of the Quadratic Equation\n");
    printf("[4] Exit\n");
    printf("Choose an Operation: ");
}

/*
============================================================================
 FUNCTION    : powerSolver
 DESCRIPTION : Computes for the power
 ARGUMENTS   :  int base - inputted base
                int p - inputted exponent
 RETURNS     : int - computed power
===========================================================================
*/

int powerSolver(int base, int p)
{
    int power;
    power = pow(base, p);
    return power;
}

/*
============================================================================
 FUNCTION    : factorialSolver
 DESCRIPTION : Calculates the factorial
 ARGUMENTS   :  int num - inputted number
 RETURNS     : int - calucated factorial
===========================================================================
*/

int factorialSolver(int num)
{
    int i, factorial = 1;
    for (i = 1; i <= num; ++i)
    {
        factorial *= i;
    }
    return factorial;
}

/*
============================================================================
 FUNCTION    : quadraticSolver
 DESCRIPTION : Calculates the roots of the Quadratic Equation
 ARGUMENTS   :  int a - first constant
                int b - second constant
                int c - third constant
 RETURNS     : flag - conditional statement on calculations
===========================================================================
*/

int quadraticSolver(int a, int b, int c)
{
    double discriminant;
    int flag;

    discriminant = (b * b) - (4 * a * c);

    // if a is 0 and b is 0 there is no solution
    if (a == 0 && b == 0)
    {
        flag = 1;
    }
    // if a is zero
    else if (a == 0)
    {
        // Calculates one root if a is zero
        double b_quad = b;
        double c_quad = c;
        root1 = (-c_quad / b_quad);
        flag = 2;
    }
    // if the discriminant is less than 0
    else if (discriminant < 0)
    {
        flag = 3;
        // printf("There are no real roots");
    }
    else
    {
        flag = 4;
        // Calculates the first root based on the quadratic formula
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        // Calculates the second root based on the quadratic formula
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    return flag;
}
