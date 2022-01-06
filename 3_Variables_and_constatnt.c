/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Hi, This My Third Program 
 *
 */

/**************************************************************/

                          /*Include Some Libiraies*/
					   
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>   //to get min & max instuctions
#define x 22          // ok for constant variable (preprocessor)--->text placement
#define my 'A'
          /*--------------------------------Variables And Constants------------------------*/
int main()
{

    int num ;                 // variable declearation No place in memory reserved
    float pi = 22/7 ;         // this is not constant not ok
    const float q = 30.5 ;    // this is constant     ok

    //q = 3 ;                 // error because constant 
      pi= 30 ;
    //x = 30 ;                //error  because preprocessor make it  22 = 30 ; 

    printf("%d\n",num);       //o/p garbage value
    printf("%f\n",pi);        
    printf("%f\n",q);
    printf("%d\n",x);      
    printf("%p\n",1);         //the o/p will be address in hexadecimal
	printf("%c\n",my);
    return 0;
}
