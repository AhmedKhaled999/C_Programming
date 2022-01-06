/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec2      : Assignment 2
 *
 */
/**********************************************************************************/

/* Write a C code that ask the user to enter his ID, if the ID is valid 
 it will ask the user to enter his password,
 if the password is correct the program will print the user name,
 if the password is incorrect the program will print Incorrect Password. 
 In case of not existing ID, the program will print Incorrect ID 
   
*/

                               /*include some libiraies*/


#include<stdio.h>
#include<stdlib.h>

void main (void)
{
 int ID ;                    // why char ID[100] don't work
 int password = 1234 ;       // variable declearation and definition 


 printf("Please Enter your ID : \n");

 scanf("%d",&ID);              // why don't work with scanf("%s",ID) or with gets(ID)
 //printf("%s\n", ID);         // for debug 

 if( ID == 5566)

  {

   printf("please Enter the your password : \n");       // Enter the value to search from user
   scanf("%d",&password);
 
   if(password == 1234)
    {
    printf("Hello mr. Ahmed\n");
    }else

    {
     printf("Sorry, Incorrect Password \n");
    }

  }else

  {
  printf("Sorry, Incorrect ID \n");
  }

 
 system("PAUSE");   
 
}