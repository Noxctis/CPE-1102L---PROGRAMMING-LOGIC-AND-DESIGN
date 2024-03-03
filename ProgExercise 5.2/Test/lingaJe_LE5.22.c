/*
============================================================================
 FILE        : lingaJe_LE5.22.c
 AUTHOR      : Jevana Cielo C. Linga
 DESCRIPTION : A program that lets the user generate a pyramid by giving how many levels it will have.
 COPYRIGHT   : 04 October 2023
 REVISION HISTORY
 Date:                 By: 	                  Description:
 October 6, 2023    Jevana Cielo C. Linga     Changed in comments

============================================================================
*/
#include <stdio.h>
/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : executes the main program; generate a pyramid with it's given rows
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================
*/
int main(void)
{
    int count, rows, space, num, last;
    printf("Enter a value for the N: ");
    scanf("%d", &rows);
    for (count = 1; count <= rows; count++)
    { // the loop for counting of how many rows the pyramid will have//
        for (space = 1; space <= rows - count; space++)
        { // the loop for the spacings//
            printf(" ");
        }
        for (num = 1; num <= count; num++)
        { // the loop for the middle part of the pyramid//
            printf("%d", num);
        }
        for (last = count - 1; last >= 1; last--)
        { // the loop for the last part of the pyramid//
            printf("%d", last);
        }
        printf("\n"); // the spacing every after row//
    }
    return 0;
}
