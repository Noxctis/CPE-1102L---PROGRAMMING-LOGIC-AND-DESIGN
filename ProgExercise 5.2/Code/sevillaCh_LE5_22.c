/*
============================================================================
 FILE        : sevillaCh_LE5_22.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that would display numbers in a pyramid.
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
    int N, i, j, k, l;
    printf("Enter a value for N: ");
    scanf("%d", &N);
    // Asks for a value for N
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
            // Prints space until the j is greater than the limit minus i
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
            // Prints the value in increasing order until it reaches the value of N
        }
        for (l = i - 1; l >= 1; l--)
        {
            printf("%d", l);
            // Prints the value in decreasing order from the maximum value of N-1 until it reaches 1
        }
        printf("\n");
    }
    return 0;
}