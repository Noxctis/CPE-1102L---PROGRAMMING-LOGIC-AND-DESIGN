/*
============================================================================
 FILE        : sevillaCh_LE7_11.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that allows a user to enter 10 numbers, then displays all of the numbers, the largest number, and the smallest.
 COPYRIGHT   : November 20, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
November 20, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

// Header files

#include <stdio.h>

// Function Prototypes
int isLargest(int num[]);
int isSmallest(int num[]);
int getNum(void);
void displayNumber(int num[]);

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
    int num[10];
    int i, largest, smallest;
    for (i = 0; i < 10; i++)
    {
        num[i] = getNum();
    }
    largest = isLargest(num);
    smallest = isSmallest(num);
    displayNumber(num);
    printf("\nThe largest is: %d\n", largest);
    printf("The smallest is: %d\n", smallest);
    return 0;
}

/*
============================================================================
 FUNCTION    : getNum
 DESCRIPTION : Read a number
 ARGUMENTS   : none / void
 RETURNS     : int - inputted number
===========================================================================
*/

int getNum()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x;
}

/*
============================================================================
 FUNCTION    : displayNumber
 DESCRIPTION : Displays all the numbers
 ARGUMENTS   : int num[]
 RETURNS     : none / void
===========================================================================
*/

void displayNumber(int num[])
{
    int i;
    printf("The numbers are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
}

/*
============================================================================
 FUNCTION    : isLargest
 DESCRIPTION : Finds the largest integer
 ARGUMENTS   : int num[] - inputted numbesr
 RETURNS     : int - largest integer
===========================================================================
*/

int isLargest(int num[])
{
    int largest, i;
    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            largest = num[i];
        }
        else
        {
            if (num[i] > largest)
            {
                largest = num[i];
            }
        }
    }
    return largest;
}

/*
============================================================================
 FUNCTION    : isSmallest
 DESCRIPTION : Finds the smallest integer
 ARGUMENTS   : int num[] - inputted numbers
 RETURNS     : int - smallest integer
===========================================================================
*/

int isSmallest(int num[])
{
    int smallest, i;
    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            smallest = num[i];
        }
        else
        {
            if (num[i] < smallest)
            {
                smallest = num[i];
            }
        }
    }
    return smallest;
}