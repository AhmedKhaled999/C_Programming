/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Hi, This My Program 5
 *
 */

/**************************************************************/

                                  /*Include Some Libiraies*/
#include <stdio.h>
#include <stdlib.h>
                  /**************ternary conditional operator ? : ***************/

int main()
{
    int num1 ,num2 ;
    printf("please enter number 1 : ");
    scanf("%d",&num1);       
    printf("please enter number 2 : ");
    scanf("%d",&num2);
	//int big ; 
   /* if(num1>num2)
    {
     big = num1 ;
    }else if(num1<num2)
    {
     big = num2;
    }else
	{
		printf("Two numbers are equal\n");
	}
    printf("the big is : %d\n",big) ;*/
    //big = num1>num2 ? num1 : num2 ;
    //printf("the big is : %d\n",big) ;
printf("%s \n",((num1==num2)? "Equal":((num1>num2)? "num1":"num2")));   //complicated condition
    return 0;
}
