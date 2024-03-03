/*
============================================================================
 FILE        : sevillaCh_LE8_11.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A function that sets up an array called days, which contains pointers to the names of the days of the week and return the name of the day from the given day. The function accepts the given day.
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
int getDay(void);
char *dayOfTheWeek(int dayNum);

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

    int dayNum;
    char *dayName;
    dayNum = getDay();
    dayName = dayOfTheWeek(dayNum);
    printf("Day of the week: %s", dayName);
    return 0;
}

/*
============================================================================
 FUNCTION    : getDay
 DESCRIPTION : Read a number for day
 ARGUMENTS   : none / void
 RETURNS     : int - inputted number
===========================================================================
*/

int getDay()
{
    int dayNum;
    printf("Enter a day: ");
    scanf("%d", &dayNum);
    return dayNum;
}

/*
============================================================================
 FUNCTION    : *dayOfTheWeek
 DESCRIPTION : Gets the day of the week
 ARGUMENTS   : int dayNum
 RETURNS     : char - Day of the week
===========================================================================
*/

char *dayOfTheWeek(int dayNum)
{
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}, *dayName;
    if (dayNum < 1 || dayNum > 7)
    {
        dayName = "INVALID";
    }
    else
    {
        dayName = days[dayNum - 1];
    }
    return dayName;
}
