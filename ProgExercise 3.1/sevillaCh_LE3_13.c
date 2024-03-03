/*
============================================================================
 FILE        : sevillaCh_LE3_13.c
 AUTHOR      : Chrys Sean T. Sevilla
 DESCRIPTION : A program that prints the tuition for 2 semesters at ABC College.
 COPYRIGHT   : September 18, 2023
 REVISION HISTORY
 Date:               By: 	        Description:
 revision date	    author         description of the change
 revision date	    author         description of the change
 .
 .
 .
 revision date	    author         description of the change
============================================================================
*/


#include <stdio.h>
//declares the values to be used.
#define registrationfee 450
#define unitfee 450
#define penaltyfee 2260.00
#define twelveunits 12

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none
 RETURNS     : int - exit code
===========================================================================
*/

int main() {

    float firsttuition,secondtuition, total, fraction12;
    int remainderfirst,remaindersecond, firstsem,secondsem;
    //asks how many units first sem
    printf("Enter number of units first semester: ");
    scanf("%d", &firstsem);
    printf("Enter number of units second semester: ");
    //asks how many units second sem
    scanf("%d", &secondsem);

    //gets how many first sem units are left in the remainder
    remainderfirst=firstsem%twelveunits;
    //gets how many second sem units are left in the remainder
    remaindersecond=secondsem%twelveunits;
    //divides the 2260 penalty fee into 12
    fraction12 = penaltyfee/twelveunits;

    //adds registration fee to how many units multiplied by the unit fee plus the penalty fee for every 12 units plus fraction of twelve.
    firsttuition = registrationfee + (firstsem*unitfee) + (penaltyfee*(firstsem/twelveunits)) + (fraction12*remainderfirst);
    //adds registration fee to how many units multiplied by the unit fee plus the penalty fee for every 12 units plus fraction of twelve.
    secondtuition = registrationfee + (secondsem*unitfee) + (penaltyfee*(secondsem/twelveunits)) + (fraction12*remaindersecond);
    //prints the first semester tuition fee with two decimal points
    printf("1st Semester Tuition Fee: PHP %.2f", firsttuition);
    //prints the second semester tuition fee with two decimal points
    printf("\n2nd Semester Tuition Fee: PHP %.2f", secondtuition);
    //calculates the total tuition by adding the first sem tuition fee to the second sem tuition fee
    total = firsttuition+secondtuition;
    //prints the total tuition fee with two decimal points
    printf("\nTotal Tuition is: PHP %.2f\n", total);

	return 0;
}
