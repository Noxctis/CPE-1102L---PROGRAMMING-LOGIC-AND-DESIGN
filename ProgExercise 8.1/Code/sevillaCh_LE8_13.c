/*
============================================================================
 FILE        : sevillaCh_LE8_13.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A function that determine and returns the maximum number in an array of integers using pointers. The function accepts the starting address of the array and number of entries.
 COPYRIGHT   : December 1, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
December 1, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

// Header files
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function Prototypes
int maximumSearch(int *numArr, int numOfEntries);
int getnumEntries(void);
int getNum(void);

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

    int numOfEntries, i, maximumNum;
    numOfEntries = getnumEntries();
    int numArray[numOfEntries];
    for (i = 0; i < numOfEntries; i++)
    {
        numArray[i] = getNum();
    }
    maximumNum = maximumSearch(numArray, numOfEntries);
    printf("Maximum Number: %d", maximumNum);
    return 0;
}

/*
============================================================================
 FUNCTION    : getnumEntries
 DESCRIPTION : Reads the number of entries
 ARGUMENTS   : none / void
 RETURNS     : int - inputted number
===========================================================================
*/

int getnumEntries()
{
    int numEntry;
    printf("Enter number of entries: ");
    scanf("%d", &numEntry);
    return numEntry;
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
 FUNCTION    : maximumSearch
 DESCRIPTION : Gets the maximum number
 ARGUMENTS   : int *numArr
                int numOfEntries
 RETURNS     : maximum - maximum number
===========================================================================
*/

int maximumSearch(int *numArr, int numOfEntries)
{
    int i, maximum = *numArr;
    for (i = 0; i < numOfEntries; i++)
    {
        if (*(numArr + i) > maximum)
            maximum = *(numArr + i);
    }
    return maximum;
}