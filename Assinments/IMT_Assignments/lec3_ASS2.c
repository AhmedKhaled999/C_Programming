/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec3      : Assignment 2
 *
 */
/**********************************************************************************/


/*Write a login program in C that ask the user to enter his ID and his password,
if the ID is correct the system will ask the user to enter his password up to 3 times,
if he enters the password right the systems welcomes him,
if the three times are incorrect, the system print  No more tries.
If the user ID is incorrect the system print You are not registered
(User  ID Password)
 Ahmed 1234 7788
 Amr   5678 5566
 Wael  9870 1122
Expected Output
----------------
Please Enter your ID :7471
you are not registered :
Please Enter your ID :1234
Please Enter Password :4512
Try again :7788
welcome Ahmed
Please Enter your ID :1234
Please Enter Password :5050
Try again :6060
Try again :7070
INcorrect password for 3 times, no more tries
*/  
                                /*include some libiraies*/

#include <stdio.h>
#include <stdlib.h>

int main()
{      int ID ,password, i=1 ,flag = 0 ;
       printf("Please Enter your ID : ");
       scanf("%d",&ID) ;
       if((ID!=1234) &&(ID!=5678)&& (ID!=9870))
       {
         printf("you are not registered \n");
       }
       else
        {   while (i<=3)
          {

            printf("Please Enter Password : ");
            scanf("%d",&password);
            switch(password)
            {
            case 7788 :
                printf("Welcome Ahmed\n");
				flag++ ; 
                break ;
            case 5566 :
                printf("Welcome Amr\n");
				flag++;
                break ;
            case 1122 :
                printf("Welcome Wael\n");
				flag++ ; 
                break ;
            default :
                if (i!=3)
                printf("Try again \n");
                else{/*Do Nothing*/};
                break ;
            }
           
			if(flag>0){i=4;}
			else{i++;}
           }
		  if(i==4) 
          printf("INcorrect password for 3 times, no more tries\n");
	      else{/*Do Nothing*/}
        }

    return 0;
}
