/*
============================================================================
 FILE        : sevillaCh_LE5_21.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that will ask the user to input the number of rows and columns the table should have and display the multiplication table on screen.
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
    int num, row, col, i, j, table;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    // Asks for the number of rows
    printf("Enter number of columns: ");
    scanf("%d", &col);
    // Asks for the number of columns
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            table = i * j;
            // Computes for the multiplication talbe
            printf("%2d\t", table);
            // Displays multiplication table wtih a width of 2 digits
        }
        printf("\n");
    }
    return 0;
}
