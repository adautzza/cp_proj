/*******************************************************/
/* friendly.c - See Caractere.h for copyright and info*/
/*******************************************************/

/* System headers and application specific headers : */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Friendly.h"

/* Private constants : */

/* Private types : */

/* Private global variables :  */

/* Public global variables :  */

/* Implementation of the private functions :  */

/* Implementation of the public functions :  */

/************************************************************************/
/* FUNCTION NAME: getname()                                             */
/* DESCRIPTION: gets the user's name                                    */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void getname(char *name[50])
{
   printf("Hello dear student, please enter your name.\n");
   scanf("%s", name);
}

/************************************************************************/
/* FUNCTION NAME: choose_start()                                        */
/* DESCRIPTION: outputs user's available choices for the program        */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void choose_start(char name[50]){
   printf("%s, please enter one of the following categories: numbers, characters, vectors, matrices.\n", name);
}

/************************************************************************/
/* FUNCTION NAME: story_start()                                         */
/* DESCRIPTION: tell user about our project                             */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void story_start(char name[50]){
   printf("Hello %s! We are Geo and Teo and we want to help you getting to know more about programming in C. \nYou will be shown some simple syntax examples and you will get the chance to see some mathematical exercises that can be implemented and solved using C language.\nLet's start by calling the following function.\ncheck_color();\n", name);
}

/************************************************************************/
/* FUNCTION NAME: story_continue()                                      */
/* DESCRIPTION: continue the story of the project                       */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void story_continue(){
   printf("\nFrom now on, you will able to pass through our modules. \nGood luck on processing numbers, characters, vectors and matrices!\n\n");
}

/************************************************************************/
/* FUNCTION NAME: story_end()                                           */
/* DESCRIPTION: output the error of not inputting one of the categories */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void story_end(){
   printf("You did not choose one of the given categories. The input is case sensitive!\n");
}

/************************************************************************/
/* FUNCTION NAME: system_clear()                                        */
/* DESCRIPTION: clears the screen                                       */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void system_clear() {
    char verify_closing;
    printf("Do you want to clear the screen? Press 'y' or 'n'.");
    verify_closing=getch();
    if (verify_closing=='y')
    { system("CLS");  }
    else printf("\nEnjoy the other chapters!\n");
}

/************************************************************************/
/* FUNCTION NAME: endofchapter()                                        */
/* DESCRIPTION: signals the end of a chapter                            */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void endofchapter(){
printf("-------------------------------------------------------------\n");
printf("\n");
printf("\n");
}


/************************************************************************/
/* FUNCTION NAME: closeconsole()                                        */
/* DESCRIPTION: verifies whether you want to close the console or not.  */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void closeconsole(){
    char verify_console;
    printf("Do you want to quit this learning session? \nPress 'y' to exit or 'n' to continue.\n");
    verify_console=getch();
    if (verify_console=='y')
    exit(0);
}

/************************************************************************/
/* FUNCTION NAME: checkcolor()                                          */
/* DESCRIPTION: verifies whether you want to change the color of the    */
/*              console or not                                          */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void check_color() {
    char verify_color;
    printf("Do you want to change the color of the console? 'y'/'n'\nWARNING: This changes may affect your eyes for long!\n");
    verify_color=getch();
    if (verify_color=='y')
    {
        system("COLOR 1B");
    }
}

/************************************************************************/
/* FUNCTION NAME: checkcolor()                                          */
/* DESCRIPTION: give a break to the user                                */
/* RETURN VALUE: void                                                   */
/************************************************************************/
void pause_story() {
    printf("Press any key to continue!\n");
    getch();
    }
