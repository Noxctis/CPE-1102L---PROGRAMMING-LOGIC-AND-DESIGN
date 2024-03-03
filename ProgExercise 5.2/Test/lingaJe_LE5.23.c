/*
============================================================================
 FILE        : lingaJe_LE5.23.c
 AUTHOR      : Jevana Cielo C. Linga
 DESCRIPTION : A program that lets the user generate a Fibonacci series by giving the nth term.
 COPYRIGHT   : 04 October 2023
 REVISION HISTORY
 Date:                 By: 	                  Description:
 October 6, 2023    Jevana Cielo C. Linga     Changed in comments
 October 7, 2023    Jevana Cielo C. Linga     Changed the values for firstTerm, count, and nextTerm

============================================================================
*/
#include <stdio.h>
/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : executes the main program; generating the fibonacci sequence until the given limit
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================
*/
int main (void)
{
    int count, limit, nextTerm;
    //the first 2 terms of the sequence//
    int firstTerm = 0;
    int secondTerm = 1;
    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("Fibonacci sequence: %d ", secondTerm);
    for(count = 2, nextTerm = 1; count <= limit; ++count){
        printf("%d ", nextTerm);
        //moving of the terms to continue the calculation until the limit//
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        nextTerm = firstTerm + secondTerm;//the calculation of the nextTerm inside the loop//
    }
    return 0;
}
