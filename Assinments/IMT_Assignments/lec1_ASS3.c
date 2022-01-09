/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Lec1: Assignment 3
 *
 */
/**********************************************************************************/
/* Write a code that takes 2 numbers and print 
   their summation, subtraction, anding, oring, and Xoring 
                Ex.
    please enter number a:..
    please enter number b:..
    
    =====================
         the output 
   
    a + b =..
    a - b =..
    a & b =..
    a | b =..
    a ^ b =..

*/

                          /*include some libiraies*/


#include<stdio.h>
#include<stdlib.h>

void main (void)
{
 int a,b;

 printf("%s\n","please enter number a: ");
 scanf("%d",&a);
 printf("%s\n","please enter number b: ");
 scanf("%d",&b);
 printf("summation   a + b = %d \n",a+b);
 printf("subtraction a - b = %d \n",a-b);
 printf("Anding      a & b = %d \n",a&b);
 printf("Oring       a | b = %d \n",a|b);
 printf("XOring      a ^ b = %d \n",a^b);
 
 system("PAUSE");   
 
}