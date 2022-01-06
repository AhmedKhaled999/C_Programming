/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author: Ahmed Khaled
 *      Hi, this my first program 
 *
 */

/**************************************************************/

                          /*include some libiraies*/
					   
#include <stdio.h>
#include <stdlib.h>
                   /*printf format to print string for user*/
				   
int main(void)          //program entry point 
{   
    /*printf()---> it's a function from stdio libiray to print and return number of printed character*/
    printf("Hello ");printf("world");
	printf("My Name Is Ahmed Khaled\n ");
	     /* Note : \n is a type of Escape operators(\n,\t,\v,\',\") but \n  for New line*/
    printf("\nwelcome to "),printf("c\n");
	printf("Hello" " " "world" "\n");
    printf("=============================Formate specifer[%d,%s%,%c,%f,%p,%x,%u,%i,.....]============================================\n");
    printf("%s @ %s \n","Hi" ,"c");      //%s  string format
    printf("%d \n" ,5);                  //%d decimal format & (%ld) long decimal format &(%lld)
    printf("%i \n" ,7);                  //%i int format note (%lu) unsigned long
    printf("%f \n" ,7.5);                //%f float format
    printf("%.2f \n" ,7.5);              //%.nf float with n after .
    printf("%c %c %c \n",'A','l','i');   //%c character format
    printf("%c \n",65);                  //the o/p is : will print Ascii code A
    printf("%i\n",'a');                  //the o/p is :
    printf("%e\n",777);                  //exponent
    printf("%E\n",777);                  //exponent
    printf("%g\n",777.5);                //print float number without zeros
    printf("%G\n",777.5);                //print float number without zeros 
    printf("%o\n",777);                  //octal
    printf("%x\n",777);                  //hexadecimal
    printf("%X\n",777);                  //hexadecimal
    printf("%u\n",777);                  //unsigned decimal
    printf("%p\n",330);                  //point of address
    printf("%p\n","Hello");              //point of address
	printf("%s","Ahmed Khaled Hammad");  //printf function take string by default so you can remove %s
    return 0;