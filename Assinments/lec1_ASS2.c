/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Lec1: Assignment 2
 *
 */
/**********************************************************************************/
/* Write a code that scan 3 numbers from the user and print them in reversed order 
                Ex.
    please enter number 1: 10
    please enter number 2: 18
    please enter number 3: 20
    =====================
         the output 
   
    number 3 :20
    number 2 :18
    number 1 :10
*/

                          /*include some libiraies*/


#include<stdio.h>
#include<stdlib.h>

void main (void)
{
 int num1,num2,num3;

 printf("%s\n","please enter number 1: ");
 scanf("%d",&num1);
 printf("%s\n","please enter number 2: ");
 scanf("%d",&num2);
 printf("%s\n","please enter number 3: ");
 scanf("%d",&num3);
 printf("your enterd numbers in reversed order :\n number 3: %d\n number 2: %d\n number 1: %d\n",num3,num2,num1);
 
 
 system("PAUSE");   
 
}