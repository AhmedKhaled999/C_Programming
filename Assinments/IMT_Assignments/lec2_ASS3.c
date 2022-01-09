/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec2      : Assignment 3
 *
 */
/**********************************************************************************/
/* Write a code that will ask the user to enter 3 numbers,
  the program will print the maximum number of them.

*/

                               /*Include Some Libiraies*/


#include<stdio.h>
#include<stdlib.h>

#define size 4
int main ()
{
 int i ;
 int  num[size];

 for (i=0; i<3;i++)
  {
   printf("Please Enter 3 numbers to get max  number: %d from 3 numbers \n", i+1);
   scanf("%d", &num[i]) ;
  }
 // debugging

  printf("%d\n",num[0]);
  printf("%d\n",num[1]);
  printf("%d\n",num[2]);

if (num[0]>num[1])
{
 if(num[0]>num[2])
 {
  printf("the max number is : %d ",num[0]);
 }else
  {
   printf("the max number is : %d ",num[2]);
  }

}else
 {
   if(num[1]>num[2])
    {
     printf("the max number is : %d ",num[1]) ;
    }else
     {
       printf("the max number is : %d ",num[2]);
     }
 }


 system("PAUSE");
 return 0;

}
