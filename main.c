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

 // FA FUCKING DEFINE LA MAX!!! <3


 // FUCKING FUCK


/* Include standard headers : */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Include modules header that are directly invoked: */
#include "Numere.h"    //include the header related to the use of numbers "Numere.h"
#include "Caractere.h" //include the header that is related to characters "Caractere.h"
#include "Vectori.h"   //include the header that is related to vectors "Vectori.h"
#include "Matrice.h"   //include the header that is related to matrices "Matrice.h"
#include "Friendly.h"   //include the header that is related to the user interface "Friendly.h"


int main()
{
    int check_category = 1;
    int number_1;
    int number_2;
    int vec[50];
    int sizevec;
    int mat1[10][10];
    int mat2[10][10];

    char name[50];
    char category[50];
    char string1[50];
    char string2[50];

    getname(&name);
    story_start(&name);
    check_color();
    story_continue();

  while(1)
{
    choose_start(name);

    scanf("%s", category);
    check_category = strcmp(category, "numbers");

    if (check_category == 0)
    {
        start_num(&number_1, &number_2);
        print_num(number_1, number_2);
        sum_num(number_1, number_2);
        pause_story();
        multiply_num(number_1, number_2);
        check_num(number_1,number_2);
        endofchapter();
        closeconsole();
        system_clear();
    } else if (check_category != 0)
    {
        check_category = strcmp(category, "characters");
        if (check_category == 0)
        {
            start_char(string1);
            length_char(string1);
            check_char(string1,string2);
            search_char(string1);
            palindrom_char(string1);
            endofchapter();
            closeconsole();
            system_clear();

        } else if (check_category != 0)
        {
            check_category = strcmp(category, "vectors");
            if (check_category == 0)
            {
                start_vec(&sizevec);
                avg_vec(vec, sizevec);
                min_vec(vec,sizevec);
                max_vec(vec, sizevec);
                sort_vec(vec, sizevec);
                endofchapter();
                closeconsole();
                system_clear();
            } else if (check_category != 0)
            {
                check_category = strcmp(category, "matrices");
                if (check_category == 0)
                {
                    start_mat(mat1);
                    determinant_mat(mat1);
                    addition_mat(mat1, mat2);
                    product_mat(mat1, mat2);
                    pause_story();
                    transpose_mat(mat1);
                    endofchapter();
                    closeconsole();
                    system_clear();
                } else
                  story_end();
            }
        }
    }

}

    return 0;
}
