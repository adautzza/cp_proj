/*************************************************************************************/
/* Project at Computer Programming                                                   */
/* Copyright: 2017                                                                   */
/* License: Project at Computer Programming                                          */
/* Authors: Alexandra-Georgina Țurțulea, Teodor-Stelian Băltărețu                    */
/*          <alexandra_turtulea@hotmail.com>   <teodorstelian98@yahoo.com>           */
/* Version: 02-12-2017                                                               */
/* Storyline: One of the students from a Technical University wants to find out more */
/*            examples of mathematical exercises that can be implemented in C        */
/*            language, so, he asks his colleagues to make a program that will help  */
/*            him in processing numbers, characters, vectors and matrices.           */
/* Purpose of the project: help students to learn C syntax using concrete examples   */
/*************************************************************************************/
#ifndef CARACTERE_H_INCLUDED
#define CARACTERE_H_INCLUDED

/* Headers required by the following definitions / declarations : */

#include <stdlib.h>
#include <string.h>

/* Constants definitions : */

/* Types definitions : */

/* Global variables declarations : */

/* Function prototypes : */
extern void start_char(char string1[50]);
extern void length_char(char string1[50]);
extern void check_char(char string1[50], char string2[50]);
extern void search_char(char string1[50]);
extern void palindrom_char(char string1[50]);

#endif // CARACTERE_H_INCLUDED
