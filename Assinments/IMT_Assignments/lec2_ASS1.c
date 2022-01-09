/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec2      : Assignment 1
 *
 */
/**********************************************************************************/
/* Write a C code that ask the user to enter 10 numbers,
  then ask him to enter another number to search on it in the 10 numbers and print its location in case it is found.
 In case the number is not found, it will print number no exist 
   
*/

                               /*include some libiraies*/


#include<stdio.h>
#include<stdlib.h>

#define size  10

void main (void)
{
 int nums[size],i,search,flag=0;       // variable declearation 

 for (i=0 ; i<size ;i++)               // enter 10 numbers from user
{
 printf("please enter number %d: \n",i+1);
 scanf("%d",&a[i]);
} 
 
 printf("please Enter the value to search : \n");       // enter the value to search from user
 scanf("%d",&search);

 for (i=0 ; i<=9 ;i++)
{ 
                   
 if (search == a[i])
 {
 printf("value is exist at element : %d\n",i+1);
 flag = 1;
 }
 else
 {
 }
 
}

 if (flag=0)
 {
  printf("value is  not exist \n");
 }
 else
 {
	 /*Do Nothing*/
 }
 
 system("PAUSE");   
 
}