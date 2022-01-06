/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec3      : Assignment 3
 *
 */
/**********************************************************************************/
/*Write a c program that draw a pyramid of stars with height entered by the user
Expected Output
----------------
Please Enter the hight of the pyramid : 5
                 *
                ***
              *******
             *********
            ***********
*/

                                /*include some libiraies*/

#include <stdio.h>
#include <stdlib.h>
int main()
{      int  i , j , x;
       printf("Please Enter the hight of the pyramid: ");
       scanf("%d",&x) ;
       for(i=1;i<=x;i++)
       {
         for(j=1;j<=2*x-1;j++)
        {
            if((j>= x-(i-1)) && (j<= x+(i-1)))
            {
              printf("*");
            }else
            {
              printf(" ");
            }
         }
         printf("\n");
       }
    return 0;
}
