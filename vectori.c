/*******************************************************/
/* vectori.c - See Vectori.h for copyright and info    */
/*******************************************************/

/* System headers and application specific headers : */
#include <stdlib.h>
#include <stdio.h>
#include "Vectori.h"

/* Private constants : */

/* Private types : */

/* Private global variables :  */

/* Public global variables :  */

/* Implementation of the private functions :  */

/* Implementation of the public functions :  */

/************************************************************************/
/* FUNCTION NAME:  start_vec                                            */
/* DESCRIPTION:    reads the size of the vector inputted by the user    */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int *                n        I    number to read                    */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void start_vec(int *n){
printf("Vectors are one-dimensional arrays. Just like arrays, vectors use contiguous storage locations for their elements\n");
printf("which means that their elements can also be accessed using offsets on regular pointers to its elements.\n");
printf("But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.\n");
printf("Now we will input the size of an vector:");
scanf("%d", n);

}

/************************************************************************/
/* FUNCTION NAME:  avg_vec                                              */
/* DESCRIPTION:    outputs the average value of the elements            */
/*                 of the vector                                        */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int *                n        I    represents the size of the vector */
/* int               vec[50]     I    represents the vector             */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void avg_vec(int vec[50],int n)
{
    int i = 0;
    printf("Now input the numbers of the vectors:\n");
for(i = 0; i < n; i++)
{
    printf("Vec[%d]:",i);
    scanf("%d",&vec[i]);
}

printf("\nWe will calculate the average of the inputted numbers:\n");
float sum = 0;
for (i=0;i<n;i++)
{
    printf("%d\n",vec[i]);
    sum=sum + vec[i];
}
float avg = sum / n;
printf("\nThe average is : %.2f\n",avg);
}

/************************************************************************/
/* FUNCTION NAME:  min_vec                                              */
/* DESCRIPTION:    outputs the minimum value of the vector              */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int *                n        I    represents the size of the vector */
/* int               vec[50]     I    represents the vector             */
/* RETURN VALUE:   void                                                 */
/************************************************************************/

void min_vec(int vec[50],int n)
{
    int min = vec[0];
    int i=0;
    for (i=0;i<n;i++)
    {
        if (vec[i] < min) min=vec[i];
    }
    printf("\nThe minimum value is : %d",min);
}

/************************************************************************/
/* FUNCTION NAME:  max_vec                                              */
/* DESCRIPTION:    outputs the maximum value of the vector              */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int *                n        I    represents the size of the vector */
/* int               vec[50]     I    represents the vector             */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void max_vec(int vec[50],int n)
{
    int max = vec[0];
    int i=0;
    for (i=0;i<n;i++)
    {
        if (vec[i] > max) max=vec[i];
    }
    printf("\nThe maximum value is : %d",max);
}

/************************************************************************/
/* FUNCTION NAME:  sort_vec                                             */
/* DESCRIPTION:    sorts in ascending order the elements of the vector  */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  --------------------------------- */
/* int *                n        I    represents the size of the vector */
/* int              vec[50]      I    represents the vector             */
/* RETURN VALUE:   void                                                 */
/************************************************************************/
void sort_vec(int vec[50],int n)
{
    int c, d, swap;
    char input;
printf("\n\nAt this point, we will sort the elements of the vector.\n");
printf("Please, choose > for ascending order and < for descending order.\n");
scanf(" %c", &input);

switch(input)  //we are using switch function to know which operator was inputted by the user
    {
    case '>':
    for (c = 0 ; c < ( n - 1 ); c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (vec[d] > vec[d+1]) // we are using ">" for ascending sort, for decreasing order we can choose "<"
            {
            swap       = vec[d];
            vec[d]   = vec[d+1];
            vec[d+1] = swap;
            }
        }
    }
     printf("\nSorted list in ascending order is:\n");
     for (c = 0 ; c < n ; c++)
     printf("%d\n", vec[c]);
    break;
    case '<':
    for (c = 0 ; c < ( n - 1 ); c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (vec[d] < vec[d+1])
            {
            swap       = vec[d];
            vec[d]   = vec[d+1];
            vec[d+1] = swap;
            }
        }
    }
     printf("\nSorted list in descending order is:\n");
     for (c = 0 ; c < n ; c++)
     printf("%d\n", vec[c]);
    break;
}
}
