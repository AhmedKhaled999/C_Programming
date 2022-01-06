/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec4      : Assignment 1
 *
 */
/**********************************************************************************/

/*Write a C program the implement 2 function:
1- Function to get the maximum of 4 values 2- Function to get the minimum of 4 values
The program will ask the user first to enter the 4 values,
 then print the maximum number and minimum number of them.
*/

											/*include some libiraies*/

#include <stdio.h>
#include <stdlib.h>
                              

int x , y , z ,w ;   //global variable
int max(void);
int min(void);           //prototype
int operation(int (*ptr)(void));
int main(void)
{
       printf("please Enter number 1 : ");
       scanf("%d",&x);
       printf("please Enter number 2 : ");
       scanf("%d",&y);
       printf("please Enter number 3 : ");
       scanf("%d",&z);
       printf("please Enter number 4 : ");
       scanf("%d",&w);
       printf("the maximum number is : %d \n",max());
       printf("the minimum number is : %d \n",min());
	   printf("the maximum number is : %d \n",operation(max));
       printf("the minimum number is : %d \n",operation(min));

    return 0;
}
int max(void)
{
  int max ;
  if((x>y)&&(x>z)&&(x>w))
    {
    max = x ;
    }
  else if  ((y>x)&&(y>z)&&(y>w))
  {
    max = y ;
  }
   else if  ((z>x)&&(z>y)&&(z>w))
  {
    max = z ;
  }
  else{
    max = w;
  }
 return max ;
}
int min(void)
{
  int min ;
  if((x<y)&&(x<z)&&(x<w))
    {
    min = x ;
    }
  else if ((y<x)&&(y<z)&&(y<w))
  {
    min = y ;
  }
   else if ((z<x)&&(z<y)&&(z<w))
  {
    min = z ;
  }
  else{
    min = w;
  }
 return min ;
}

                                              /*polymrophism function*/
int operation(int (*ptr)(void))
{
    int x ;

	if(ptr==min)
	{
		x=  ptr();
	}
	else if(ptr==max)
	{
		x=  ptr();
	}
	else{/*Do nothing*/}
     return x;
}
