/*
============================================================================
 FILE        : sevillaCh_LE7_13.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that asks for 5 strings and display the longest string.
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
#include <string.h>

// Function Prototypes
int stringfind(char str[][20]);
void getString(char str[][20]);

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
	char str[5][20];
	int i, stringindex;

	getString(str);

	stringindex = stringfind(str);

	printf("\nThe longest string is %s", str[stringindex]);
	return 0;
}

/*
============================================================================
 FUNCTION    : getString
 DESCRIPTION : Reads a string
 ARGUMENTS   : char str[][20]
 RETURNS     : none / void
===========================================================================
*/

void getString(char str[][20])
{
	for (int i = 0; i < 5; i++)
	{
		printf("Enter string %d: ", i + 1);
		gets(str[i]);
	}
}

/*
============================================================================
 FUNCTION    : stringfind
 DESCRIPTION : Gets the longest string
 ARGUMENTS   : char str[][20]
 RETURNS     : int - the index number of longest string
===========================================================================
*/

int stringfind(char str[][20])
{
	int i, length, max, string;
	max = 0;
	for (i = 0; i < 5; i++)
	{
		length = strlen(str[i]);
		if (length > max)
		{
			string = i;
			max = length;
		}
	}
	return string;
}
