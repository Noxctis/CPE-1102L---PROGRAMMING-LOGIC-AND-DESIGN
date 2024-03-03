/*
============================================================================
 FILE        : lingaJe_LE5.21.c
 AUTHOR      : Jevana Cielo C. Linga
 DESCRIPTION : A program that lets the user generate a multiplication table by giving how many rows and columns it will have.
 COPYRIGHT   : 04 October 2023
 REVISION HISTORY
 Date:                 By: 	                  Description:
 October 5, 2023    Jevana Cielo C. Linga     Added the variable 'multiple'.

============================================================================
*/
#include <stdio.h>
/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : executes the main program; generates a multiplication table with given limits
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================
*/
int main (void)
{
    int rowLimit, columnLimit, row, column, multiple;
    printf("Multiplication Table\n\n");
    //the input of the row's and column's limits//
    printf("Enter row limit:");
    scanf("%d", &rowLimit);
    printf("Enter column limit:");
    scanf("%d", &columnLimit);
    for(row = 1; row <= rowLimit; row++){//the loop for the row//
        for(column = 1; column <= columnLimit; column++){//the loop for the column//
            multiple = row*column;//calculation for the mutiples//
            printf("%d\t", multiple);
        }
        printf ("\n");//the spacing after the row is finished//
    }
    return 0;
}
