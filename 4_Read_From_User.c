/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Hi, This My Program 4
 *
 */

/**************************************************************/

                          /*Include Some Libiraies*/
#include <stdio.h>
#include <stdlib.h>


#define Name_size   50
                  /**********************Read From User by scanf ()*************************/
//
int main()
{
    int x ;
    char  my_name[Name_size] ;
    printf("please enter any number to scan it : ");
    scanf("%d",&x);        // &x---> address of x in memory
    printf("you entered number %d \n",x);
    printf("please enter your name  to scan it : ");
    scanf("%s",&my_name);
    printf("your name is  %s \n ",my_name);
    printf("Hello Ahmed Khaled !.\n"); 
	printf("Task1: please print your short biography.Full Name, Birth Year, Faculty, and graduation year\n");
	printf("--------------------------------------------The output--------------------------------------\n");
	printf("my name is Ahmed Khaled. \nmy birth day is 21/2/1997 \nI graduated from faculty of Enginerring\nHelwan university 2020\n");
	printf("--------------------------------------------------------------------------------------------\n");
	printf("please Eng/Ahmed Khaled enter your phone number : ");
	unsigned long long int ph ; 
	scanf("%lld",&ph);   //%lld----->format specifer (long long decimal)
	printf("your number is : %lld \n",ph);

    return 0;
}