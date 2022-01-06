 /*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Hi, This My Second Program 
 *
 */

/**************************************************************/

                          /*Include Some Libiraies*/
					   
#include <stdio.h>
#include <stdlib.h>
                                       
/*---------------------------------------- Data Types------------------------------------------*/
/*
1 - char
2 - unsigned char
3 - signed char
4 - int
5 - unsigned int
6 - signed int
7 - short int
8 - unsigned short int
9 - signed short int
10- long int
11- unsigned long int
12- signed long int
13- long long int
14- unsigned long long int
15- signed long long int
16- float
17- double
18- long double
*/

/*******************************************************************************************/

int main()                 /*********Compiler Dependent**********/
{                /* we use sizeof() operator to return NO. of bytes  */
    printf("%d\n",sizeof(char));     //equavialant to signed char
	printf("%d\n",sizeof(short));    //equavialant to short signed int
    printf("%d\n",sizeof(int));      //equavialant to signed int
	printf("%d\n",sizeof(long int));
	printf("%d\n",sizeof(long long int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
	             /* we use SHRT_MAX(),SHRT_MIN() to return Range  of data types */
				 
    printf("Range of char :%d to %d \n",CHAR_MIN,CHAR_MAX);
    printf("Range of short :%d to %d \n",SHRT_MIN,SHRT_MAX);
    printf("Range of unsigned short :0 to %d \n",USHRT_MAX);
    return 0;
}
