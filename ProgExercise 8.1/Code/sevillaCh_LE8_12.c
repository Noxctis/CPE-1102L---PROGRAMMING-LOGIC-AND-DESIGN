/*
============================================================================
 FILE        : sevillaCh_LE8_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A function to search an element in array using pointers and return the index location. The function accepts the starting address of the array, number of entries and number to search.
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
int indexSearch(int *numArr, int numEntry, int numToSearch);
int getnumEntries(void);
int getNum(void);
int getSearched(void);

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

    int numEntry, i, indexLoc, numSearched;
    numEntry = getnumEntries();
    int numArray[numEntry];
    for (i = 0; i < numEntry; i++)
    {
        numArray[i] = getNum();
    }
    numSearched = getSearched();
    indexLoc = indexSearch(numArray, numEntry, numSearched);
    if (indexLoc >= 0)
        printf("FOUND IN Index %d", indexLoc);
    else
        printf("NOT FOUND");
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
 DESCRIPTION : Reads a number
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
 FUNCTION    : getSearched
 DESCRIPTION : Reads the number to be searched
 ARGUMENTS   : none / void
 RETURNS     : int - inputted number
===========================================================================
*/

int getSearched()
{
    int numSearched;
    printf("Enter number to be searched: ");
    scanf("%d", &numSearched);
    return numSearched;
}

/*
============================================================================
 FUNCTION    : indexSearch
 DESCRIPTION : Gets the index where the number is located
 ARGUMENTS   :  int *numArr
                int numEntry
                int numToSearch
 RETURNS     : int - index
===========================================================================
*/

int indexSearch(int *numArr, int numEntry, int numToSearch)
{
    int i = 0, index = -1;
    do
    {
        if (*(numArr + i) == numToSearch)
        {
            index = i;
        }
        i++;
    } while (i < numEntry && index < 0);
    return index;
}
