/*******************************************************/
/* matrice.c - See Matrice.h for copyright and info    */
/*******************************************************/

/* System headers and application specific headers : */
#include <stdlib.h>
#include <stdio.h>
#include "Matrice.h"

/* Private constants : */

/* Private types : */

/* Private global variables :  */

/* Public global variables :  */

/* Implementation of the private functions :  */

/* Implementation of the public functions :  */

/************************************************************************/
/* FUNCTION NAME:  start_mat                                            */
/* DESCRIPTION:    read the elements of a 3x3 matrix and outputs it     */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* int             array1[10][10]   I     holds the matrix              */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void start_mat(int array1[10][10]){
int i = 0,j = 0;
printf("A matrix is a rectangular array of numbers or symbols arranged in rows and columns.\n");
printf("We will input one matrix with 3 lines and 3 columns and compute its determinant.\n");
for(i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
    printf("Array1[%d][%d] : ", i, j);
    scanf("%d", &array1[i][j]);
    }
}
printf("The matrix is:\n");
for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%3d",array1[i][j]) ;
            }
            printf("\n");
        }
}

/************************************************************************/
/* FUNCTION NAME:  determinant_mat                                      */
/* DESCRIPTION:    computes  the value of its determinant               */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* int             array1[10][10]   I     holds the matrix              */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void determinant_mat (int array1[10][10])
{
    int determinant = 0;
    int i=0, j=0;
    for(i = 0; i< 3; i++)
{
determinant = determinant + (array1[0][i]*(array1[1][(i+1)%3] * array1[2][(i+2)%3] - array1[1][(i+2)%3] * array1[2][(i+1)%3]));
}
printf("The value of the determinant is : %d\n", determinant);
}


/************************************************************************/
/* FUNCTION NAME:  addition_mat                                         */
/* DESCRIPTION:    reads the elements of another matrix and computes    */
/*                 its addition with the previously inputted matrix     */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* int            array1[10][10]  I     holds the first matrix          */
/* int            array2[10][10]  I     holds the second matrix         */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void addition_mat(int array1[10][10], int array2[10][10])
{
    int arraysum[10][10], i, j;
    printf("\nWe will input a second matrix and the perform the addition and multiplication of both matrices.\n");
    for(i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
    printf("Array2[%d][%d] : ", i, j);
    scanf("%d", &array2[i][j]);
    }
}
    for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                arraysum[i][j] = array1[i][j] + array2[i][j];
            }
        }
        printf("The sum matrix is :\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%3d",arraysum[i][j]) ;
            }
            printf("\n");
        }
}

/************************************************************************/
/* FUNCTION NAME:  product_mat                                          */
/* DESCRIPTION:    computes the product of the previously inputted      */
/*                 matrices                                             */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* int            array1[10][10]  I     holds the first matrix          */
/* int            array2[10][10]  I     holds the second matrix         */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void product_mat(int array1[10][10],int array2[10][10])
{
    printf("The product matrix is :\n");
    int i, j, k;
    int array3[10][10];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            array3[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                array3[i][j] = array3[i][j] + array1[i][k] * array2[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d",array3[i][j]);
        }
        printf("\n");
    }
}

/************************************************************************/
/* FUNCTION NAME:  transpose_mat                                        */
/* DESCRIPTION:    outputs the transpose of the first matrix            */
/* ARGUMENT LIST:                                                       */
/* Argument           Type       IO       Description                   */
/* --------------  -----------  ----  ----------------------------------*/
/* int            array1[10][10]  I     holds the first matrix          */
/* RETURN VALUE:  void                                                  */
/************************************************************************/
void transpose_mat(int array1[10][10])
{
printf("At this point we are computing the transpose of the first matrix\n");
printf("The transpose of a matrix is a new matrix whose rows are the columns of the original matrix.\n");
printf("The transpose of the first matrix is:\n");
int i, j;
for (j = 0; j < 3; ++j)
    {
        for (i = 0; i < 3; ++i)
        {
            printf(" %3d", array1[i][j]);
        }
        printf("\n");
    }
}
