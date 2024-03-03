/*
============================================================================
 FILE        : sevillaCh_LE5_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that will ask the correct numeric passcode before the user can continue his task.
 COPYRIGHT   : October 5, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
October 5, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

#include <stdio.h>

// Define Constants
const int correctpass = 1234;
const int maxTrial = 3;
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
    int numTrial = 0, passcode;
    printf("YOU HAVE THREE ATTEMPS FOR THE PASSCODE\n");
    do
    {
        printf("Enter Passcode trial number %d: ", numTrial + 1);
        scanf("%d", &passcode);
        
        if (passcode != correctpass)
        {
            printf("INCORRECT PASSCODE! TRY AGAIN!\n");
        }
    numTrial++;
    } while (passcode != correctpass && numTrial < maxTrial);
    if (passcode == correctpass)
    {
        printf("ACCESS GRANTED\n");
    }
    else
    {
        printf("YOU HAVE USED ALL THREE ATTEMPTS\n");
        printf("ACCESS DENIED\n");
    }
    return 0;
}
