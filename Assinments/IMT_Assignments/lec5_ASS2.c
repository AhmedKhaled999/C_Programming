/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec 5     : Assignment 2
 *
 */
/**********************************************************************************/

/*Write C code that manage a small school. The school has 3 classes each class contains 10 students. 
Define three arrays for the three classes each one with a length of 10. Save a random numbers in all array elements to indicate the students  grade.
The program will calculate and display the following statistics:
 1- Number of passed students
 2- Number of Failed students 
 3- Highest grade 
 4- Lowest grade 
 5- Average grade 
 Knowing that the total grade is from 100 and the minimum passing grade is 50. 

*/											 

                                         /**Include Some libararies**/
#include <stdio.h>
#include <stdlib.h> 


int main (void) 
{   
   int  passed = 0 , fialed = 0 ,sum = 0; 
   int class1[] = {20 , 10 , 30 , 35 , 40 ,55 , 56 , 78 , 65  ,99 };
   int class2[] = {5  , 15 , 35 , 38 , 70 ,85 , 66 , 68 , 65  ,79 };
   int class3[] = {78 , 59 , 89 , 78 , 88 ,20 , 78 , 5  , 0   ,59 };
   
                          /**Bubble Sorting for class 1**/
   
   for(int i=0; i< 8 ;i++)
    {
        for(int j = 0 ; j<8-i ;j++)
        {
            if(class1[j]>class1[j+1])
            {
                int temp = class1[j] ;
                class1[j] =class1[j+1];
                class1[j+1] = temp ;
            }else{}
        }
		                          /**Bubble Sorting for class 2**/

		for(int j = 0 ; j<8-i ;j++)
        {
            if(class2[j]>class2[j+1])
            {
                int temp = class2[j] ;
                class2[j] =class2[j+1];
                class2[j+1] = temp ;
            }else{}
        }
		                          /**Bubble Sorting for class 3**/

		for(int j = 0 ; j<8-i ;j++)
        {
            if(class3[j]>class3[j+1])
            {
                int temp = class3[j] ;
                class3[j] =class3[j+1];
                class3[j+1] = temp ;
            }else{}
        }
    }
	                              /*Number of passed and fialed students*/
   for (int i = 0 ; i < 10 ; i++)
   {
	   if(class1[i]>=50)
		   passed++ ; 
	   else
		   fialed++ ;
	   if(class2[i]>=50)
		   passed++ ; 
	   else
		   fialed++ ;
	   if(class3[i]>=50)
		   passed++ ; 
	   else
		   fialed++ ; 
       
        sum = sum + class1[i] + class2[i]+class3[i] ;	   
   }
   
   printf("Number of passed students : %d\n", passed);
   printf("Number of fialed students : %d\n", fialed);

   if((class1[9] > class2[9]) && (class1[9] > class3[9] ))
	   printf("the Highest grade : %d\n",class1[9] ) ;
   else if ((class2[9] > class1[9]) && (class2[9] > class3[9] ))
	   	   printf("the Highest grade: %d\n",class2[9] ) ;
   else
	  printf("the Highest grade : %d\n",class3[9] ) ;
  
  if((class1[0] < class2[0]) && (class1[0] < class3[0] ))
	   printf("theLowest grade  : %d\n",class1[0] ) ;
   else if ((class2[0] < class1[0]) && (class2[0] < class3[0] ))
	   	   printf("the Lowest grade : %d\n",class2[0] ) ;
   else
	  printf("the Lowest grade : %d\n",class3[0] ) ; 
  
  printf("the average grade : %0.2f\n",sum/30.0);
	
	return 0 ; 
}