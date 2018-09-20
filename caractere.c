/*******************************************************/
/* caractere.c - See Caractere.h for copyright and info*/
/*******************************************************/

/* System headers and application specific headers : */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Caractere.h"
#include "Friendly.h"

/* Private constants : */

/* Private types : */

/* Private global variables :  */

/* Public global variables :  */

/* Implementation of the private functions :  */

/* Implementation of the public functions :  */

/************************************************************************/
/* FUNCTION NAME:  start_char                                           */
/* DESCRIPTION:    reads the first string of characters                 */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* char            string1[50]   I     holds the first string           */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void start_char(char string1[50]){
printf("To declare a variable of type character we use the keyword char\n");
printf("They are encoded by using the ASCII code.\nAs an example we will declare a string \nand will input it from the keyboard using the scanf function\n");
printf("The first string of characters : ");
scanf("%s", string1);
}

/************************************************************************/
/* FUNCTION NAME:  length_char                                          */
/* DESCRIPTION:    returns the length of the previously inputted        */
/*                 string of characters                                 */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* char             strng[50]    I     holds the string                 */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void length_char(char strng[50]){
printf("The length of %s is %d.", strng, strlen(strng));
printf("\nThis was done by using the strlen function \nFrom the <string.h> library.\n");
}

/************************************************************************/
/* FUNCTION NAME:  check_char                                           */
/* DESCRIPTION:    checks if the previously inputted string is equal    */
/*                 to another string of characters                      */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* char            string1[50]    I     holds the first string          */
/* char            string2[50]    I     holds the second string         */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void check_char(char string1[50], char string2[50])
{
printf("Now input another string and the program will check if they are equal with the strcmp function.");
printf("\nThe second string of characters : ");
scanf("%s", string2);
 if (strcmp(string1, string2) == 0)
     {
        printf("String 1 and string 2 are equal");
     }
     else
      {
         printf("String 1 and 2 are different");
    }
}

/************************************************************************/
/* FUNCTION NAME:  search_char                                          */
/* DESCRIPTION:    searches for a inputted char                         */
/*                 to another string of characters                      */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* char            string1[50]    I     holds the first string          */
/* char            string2[50]    I     holds the second string         */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void search_char(char string1[50])
{
char input;
printf("\nUsing the strchr function, we will search for the first appearance of a letter in the first string.\n");
printf("Please, choose the letter you want to search in the word.\nAfter your choose, the strchr function will return the rest of the word after that letter.\n");
scanf("%s",&input);
printf ("%s\n", strchr(string1, input));
}

/************************************************************************/
/* FUNCTION NAME:  palindrom_char                                       */
/* DESCRIPTION:    checks if the first string                           */
/*                 is a palindrome                                      */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* char            string1[50]    I     holds the first string          */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void palindrom_char(char str[50])
{
// Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    printf("\nNow we will check if the first string is a palindrome.\n");
    printf("A palindrome is a word, number, or other sequence of characters which reads the same backward as forward.\n");
    pause_story();
// Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome \n", str);
            return;
        }
    }
    printf("%s is a palindrome \n", str);
}

