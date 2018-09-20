/*******************************************************/
/* numere.c - See Numere.h for copyright and info      */
/*******************************************************/

/* System headers and application specific headers : */
#include <stdlib.h>
#include <stdio.h>
#include "Numere.h"

/* Private constants : */

/* Private types : */

/* Private global variables :  */

/* Public global variables :  */

/* Implementation of the private functions :  */

/* Implementation of the public functions :  */

/************************************************************************/
/* FUNCTION NAME:  start_num                                            */
/* DESCRIPTION:    reads two integers inputted by the user              */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int *             number_1    I    number to read                    */
/* int *             number_2    I    number to read                    */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void start_num(int *number_1, int *number_2){
printf("The C library function int scanf(const char *format, ...) reads formatted input from stdin.\n");
printf("We will use now the same function to read to integer numbers.\n");

printf("The first number: ");
scanf("%d", number_1);            //read the first number

printf("The second number: ");
scanf("%d", number_2);            //read the second number

}

/************************************************************************/
/* FUNCTION NAME:  print_num                                            */
/* DESCRIPTION:    prints the integers previously read                  */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int               number_1    I    number to print                   */
/* int               number_2    I    number to print                   */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void print_num(int number_1, int number_2){

printf("At this moment we read two integer numbers.\n");
printf("If we want to see again what we read, we will use the C library function int printf(const char *format, ...) that sends formatted output to stdout.\n");
printf("The first number is %d and the second number is %d. ", number_1, number_2); //print the numbers previously read

}

/************************************************************************/
/* FUNCTION NAME:  sum_num                                              */
/* DESCRIPTION:    sums the integers previously printed                 */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int               number_1    I    number to sum                     */
/* int               number_2    I    number to sum                     */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void sum_num(int number_1, int number_2) {

int sum = 0;                //define and initialize the variable sum with 0

sum = number_1 + number_2;  //gives sum the value of number_1 + number_2

printf("\nTo sum the previous numbers we will define and initialize a variable sum with 0: \nint sum = 0;\nsum = number_1 + number_2;\n");
printf("The sum is: %d + %d = %d \n", number_1, number_2, sum);

}

/************************************************************************/
/* FUNCTION NAME:  multiply_num                                         */
/* DESCRIPTION:    multiplies the integers previously summed            */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int               number_1    I    number to multiply                */
/* int               number_2    I    number to multiply                */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void multiply_num(int number_1, int number_2) {

int product = 1;                // define and initialize a variable product with 1

product = number_1 * number_2;  //gives product the value of number_1 * number_2

printf("\nTo multiply the previous numbers we will define and initialize a variable product with 1: \nint product = 1;\nproduct = number_1 * number_2;\n");
printf("The product is: %d * %d = %d ", number_1, number_2, product);
printf("\n");
}

/************************************************************************/
/* FUNCTION NAME:  check_num                                            */
/* DESCRIPTION:    compares the previous numbers, then reads more       */
/*                 numbers that can be compared                         */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int               number_1    I    number to compare                 */
/* int               number_2    I    number to compare                 */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void check_num(int number_1, int number_2) {
char c;
//output the menu ">, <, =, !" for the user and read one of the options from keyboard
printf("At this point we will compare the numbers earlier inputted\n");
printf("Please, enter one of the following : >, <, =, !\n");
scanf(" %c", &c);

while ( c!= 'q') //for q is quit
{
        printf("Is %d %c %d true?\n", number_1, c, number_2);
switch(c)  //we are using switch function to know which operator was inputted by the user
    {
    case '>':
        if (number_1 > number_2) printf("%d is greater than %d.", number_1, number_2);
        else if (number_1 == number_2) printf("No, %d is equal to %d.", number_1, number_2);
        else printf("No, %d is not greater than %d.", number_1, number_2);
    break;
    case '<':
        if (number_1 < number_2) printf("%d is smaller than %d.", number_1, number_2);
        else if (number_1 == number_2) printf("No, %d is equal to %d.", number_1, number_2);
        else printf("No, %d is not smaller than %d.", number_1, number_2);
    break;
    case '=':
        if (number_1 == number_2) printf("%d is equal to %d.", number_1, number_2);
        else printf("No, %d is not equal to %d.", number_1, number_2);
    break;
    case '!':
        if (number_1 != number_2) printf("%d is not equal to  %d.", number_1, number_2);
        else printf("No, %d is equal to %d.", number_1, number_2);
    break;
    }
    printf("\nPlease, enter one of the following : >, <, =, ! and read another numbers from keyboard which you wish to compare. \nPress q for quitting the current lesson!\n");
    scanf(" %c", &c);
    if (c!='q') {
    printf("n1=");
    scanf("%d", &number_1);
    printf("n2=");
    scanf("%d", &number_2);
    }
    }

}
