/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec3      : Assignment 1
 *
 */
/**********************************************************************************/
/*Write a C program that ask the user to enter two numbers and print their summation,
 this program should never ends until the user close the window
Expected Output
----------------
Please Enter the first number :
Please Enter the second number :
the result is
Please Enter the first number :
*/

                               /*include some libiraies*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1 ,num2 ; char ch  ;
    do
    {
       printf("Please Enter the first number : ");
       scanf("%d",&num1) ;
       printf("Please Enter the second number : ");
       scanf("%d",&num2) ;
       printf("the  result is = %d\n",num1+num2);
       //printf("press 0 to exit or any character to continue : ");
       //scanf("%c",&ch);                                             //error
       //printf("you entered %c \n ",ch);
    } while(1);
    return 0;
}
