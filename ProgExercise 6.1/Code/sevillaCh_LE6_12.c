/*
============================================================================
 FILE        : sevillaCh_LE6_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that determines whether the letter entered by the user is vowel or consonant.
 COPYRIGHT   : November 8, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
November 8, 2023	    Me              Made the program
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/

// Header files

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function Prototypes
bool isLetter(char ch);
bool isVowel(char ch);

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
    char letter;
    // Asks for a letter
    printf("Enter a letter: ");
    scanf("%c", &letter);
    bool letterChecker = isLetter(letter);
    bool vowelChecker = isVowel(letter);
    if (letterChecker)
    {
        // if it is a vowel
        if (vowelChecker)
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

/*
============================================================================
 FUNCTION    : isLetter
 DESCRIPTION : Checks if it is a letter
 ARGUMENTS   : char ch - inputted letter
 RETURNS     : bool - true or false
===========================================================================
*/

bool isLetter(char ch)
{
    // if the letter is lowercase a-z or uppercase A-Z
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

/*
============================================================================
 FUNCTION    : isVowel
 DESCRIPTION : Checks if it is a vowel
 ARGUMENTS   : char ch - inputted letter
 RETURNS     : bool - true or false
===========================================================================
*/

bool isVowel(char ch)
{
    // if it is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}