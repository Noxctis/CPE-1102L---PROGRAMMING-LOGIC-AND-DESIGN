/*
============================================================================
 FILE        : sevillaCh_LE4_11.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that determine whether the letter entered by the user is vowel or consonant.
 COPYRIGHT   : October 2, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
October 2, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

#include <stdio.h>

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
    char letter;
    // Asks for a letter
    printf("Enter a letter: ");
    scanf("%c", &letter);
    // if the letter is lowercase a-z or uppercase A-Z
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
    {
        // if it is a vowel
        if ((letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') || (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'))
        {
            printf("The character inputted: %c, It is a VOWEL!", letter);
        }
        // else it is a consonant since it is already in a-z
        else
        {
            printf("The character inputted: %c, It is a CONSONANT!", letter);
        }
    }
    // since it is not in a-z then it is an invalid input
    else
    {
        printf("The character inputted: %c, You inputted an INVALID INPUT!", letter);
    }
    return 0;
}
