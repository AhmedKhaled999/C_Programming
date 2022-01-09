/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec 5     : Assignment 1
 *
 */
/**********************************************************************************/

												 
/*Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
Then print the minimum and the maximum of the values. 

---------------------
Expected output : 
 please Enter number 0 :
1
 please Enter number 1 :
2
 please Enter number 2 :
3
 please Enter number 3 :
4
 please Enter number 4 :
5
 please Enter number 5 :
6
 please Enter number 6 :
7
 please Enter number 7 :
8
 please Enter number 8 :
9
 please Enter number 9 :
10
The maximum Value is : 10
The minimum Value is : 1
--------------------------

*/
                                          /**Include Some libararies**/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i = 0 ,j = 0 ,temp ;
    int array[10]={0}; // array declaration and definition
    //Accessing Array
    for (i = 0 ; i<10 ; i++)
    {
     printf(" please Enter number %d : \n",i);
     scanf("%d",&array[i]);
    }
	               /**Bubble Sorting Algorithm**/
    for(i=0;i<(sizeof(array)/4)-1 ;i++)    //to get length
    {
        for(j = 0 ; j<(sizeof(array)/4)-1-i ;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j] ;
                array[j] =array[j+1];
                array[j+1] = temp ;
            }else{}
        }
    }
	
	printf("The maximum Value is : %d\n ",array[9]) ;
	printf("The minimum Value is : %d\n ",array[0]) ;

	return 0 ;
	
}	