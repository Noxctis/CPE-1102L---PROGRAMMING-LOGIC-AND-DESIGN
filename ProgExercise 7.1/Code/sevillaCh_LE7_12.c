/*
============================================================================
 FILE        : sevillaCh_LE7_12.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that asks a string and determine how many vowels and consonants.
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
#include <stdbool.h>

// Function Prototypes
void getString(char str[20]);
int counterConsonant(char str[20]);
int counterVowel(char str[20]);
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
    char str[20];
    int i, vowels, consonants;
    //printf("Enter a string: ");
    //gets(str);
    getString(str);
    consonants = counterConsonant(str);
    vowels = counterVowel(str);
    printf("Number of vowels is: %d\n",vowels);
    printf("Number of consonants is: %d\n",consonants);
    return 0;
}

/*
============================================================================
 FUNCTION    : getString
 DESCRIPTION : Reads a string
 ARGUMENTS   : char str[20]
 RETURNS     : none / void
===========================================================================
*/

void getString(char str[20])
{
        printf("Enter a string: ");
        gets(str);
}

/*
============================================================================
 FUNCTION    : isVowel
 DESCRIPTION : Checks the characters if it is a vowel
 ARGUMENTS   : char ch - inputted letter
 RETURNS     : bool - true or false
===========================================================================
*/

bool isVowel(char ch)
{
    // if it is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
    (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

/*
============================================================================
 FUNCTION    : counterConsonant
 DESCRIPTION : Counts how many consonants are in the string
 ARGUMENTS   : char str[20] - inputted string
 RETURNS     : int - number of consonants
===========================================================================
*/

int counterConsonant(char str[20])
{
    int consonantCount = 0,i;

    for (i = 0; str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (!isVowel(str[i]))
            {
                consonantCount++;
            }
            
        }
    }

    return consonantCount;
}


/*
============================================================================
 FUNCTION    : counterVowel
 DESCRIPTION : Checks how many vowels are in the string
 ARGUMENTS   : char str[20] - inputted string
 RETURNS     : int - number of vowels
===========================================================================
*/

int counterVowel(char str[20])
{
    int vowelCount = 0,i;

    for (i = 0; str[i]; i++)
    {
        if (isVowel(str[i]))
        {
            vowelCount++;
        }
    }

    return vowelCount;
}