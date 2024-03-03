/*
============================================================================
 FILE        : sevillaCh_LE6_11.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that extracts and adds the two least significant digits of an integer.
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

// Define Constants
#define getremainder 10

// Function Prototypes
int extractFirstLSD(int num);
int extractSecondLSD(int num);
int sumDigits(int x, int y);

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
    int num, sum, x, y;
    // asks for an input of any integer
    printf("Enter an integer:");
    scanf("%d", &num);
    // to get the first digit you modulus by 10 to get the remainder which is the first digit
    x = extractFirstLSD(num);
    // to get the second digit you first divide the number by 10 to move the decimal point once to the left and then modulus to get that last digit
    y = extractSecondLSD(num);
    // adds both to get the sum of the last two digits
    sum = sumDigits(x, y);
    // prints the sum of the last two digits
    printf("\nSum of last two digits is: %d + %d = %d\n", y, x, sum);
    return 0;
}

/*
============================================================================
 FUNCTION    : extractFirstLSD
 DESCRIPTION : Gets the first significant digit of an integer.
 ARGUMENTS   : int num - inputted number
 RETURNS     : int - first significant number
===========================================================================
*/

int extractFirstLSD(int num)
{
    return num % getremainder;
}

/*
============================================================================
 FUNCTION    : extractSecondLSD
 DESCRIPTION : Gets the second significant digit of an integer.
 ARGUMENTS   : int num - inputted number
 RETURNS     : int - second significant digit
===========================================================================
*/

int extractSecondLSD(int num)
{
    return (num / getremainder) % getremainder;
}

/*
============================================================================
 FUNCTION    : sumDigits
 DESCRIPTION : Calculates the sum of the two significant digits.
 ARGUMENTS   :  int x - first significant digit
                int y - second significant digit
 RETURNS     : int - sum of the two significant digits
===========================================================================
*/

int sumDigits(int x, int y)
{
    return x + y;
}