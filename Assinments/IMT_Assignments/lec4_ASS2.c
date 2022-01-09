/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *      Lec4      : Assignment 2
 *
 */
/**********************************************************************************/

/*Write a C program to act as simple calculator,
first it will ask the user to enter the operation ID,
depending on the operation, the program will ask the user
either to enter 1 operand or 2 operands and the program will execute
the operation and print the result. Each operation should be implemented in a stand a long function.

ID  Operation Number of Operands
1   Add                2
2   Subtract           2
3   Multiply           2
4   Divide             2
5   And                2
6   Or                 2
7   Not                1
8   Xor                2
9   reminder           2
10  Increment          1
11  Decrement          1
*/
                                           /**Include Some libararies**/
#include <stdio.h>
#include <stdlib.h>

int x , y  ;   //global variable 
int add(int x ,int y );
int sub(int x, int y );
int multi(int x, int y );
int divi(int x, int y );        //prototype
int and(int x, int y );
int or( int x, int y);
int not(int x );
int xor(int x, int y );
int rem( int x, int y);
int incr( int x);
int decr(int x );
int operation(int (*ptr)(int,int));

int main()
{      int x , y  ;
       printf("please Enter the operation ID : ");
       scanf("%d",&x);
       switch (x)
       {
       case 1 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x + y = %d\n",add(x,y));
       printf("the result of x + y = %d\n",operation(add));
       break ;}
       case 2 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x - y = %d\n",sub(x,y));
	   printf("the result of x + y = %d\n",operation(sub));
       break ;}
       case 3 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x * y = %d\n",multi(x,y));
       printf("the result of x * y = %d\n",operation(multi));
       break ;}
       case 4 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x / y = %d\n",divi(x,y));
       printf("the result of x / y = %d\n",operation(divi));
       break ;}
       case 5 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x & y = %d\n",and(x,y));
       printf("the result of x & y = %d\n",operation(and));
       break ;}
       case 6 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x | y = %d\n",or(x,y));
       printf("the result of x | y = %d\n",operation(or));
       break ;}
       case 7 :{
       printf("please Enter 1 operands : ");
       scanf("%d",&x);
       printf("the result of  ~ x = %d\n",not(x));
       break ;}
       case 8 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x ^ y = %d\n",xor(x,y));
       printf("the result of x ^ y = %d\n",operation(xor));
       break ;}
       case 9 :{
       printf("please Enter 2 operands : ");
       scanf("%d%d",&x,&y);
       printf("the result of x reminder y = %d \n",rem(x,y));
       printf("the result of x reminder y = %d \n",operation(rem));
       break ;}
       case 10 :{
       printf("please Enter 1 operands : ");
       scanf("%d",&x);
       printf("the result of x++ = %d\n",incr(x));
       break ;}
       case 11:{
       printf("please Enter 1 operands : ");
       scanf("%d",&x);
       printf("the result of x-- = %d\n",decr(x));
       break ;}
       default:
       printf("sorry wrong in program : ");
    }
    return 0;
}
int add(int x,int y)
{
   return x+y ;
}
int sub(int x, int y )
{
    return x-y ;
}
int multi(int x, int y )
{
    return x*y ;
}
int divi(int x, int y )
{
    return x/y ;
}
int and(int x, int y )
{
    return x&y ;
}
int or( int x, int y)
{
    return x|y ;
}
int not(int x )
{
    return ~x ;
}
int xor(int x, int y )
{
    return x^y ;
}
int rem( int x, int y)
{
    return x%y ;
}
int incr( int x)
{
    return ++x ;
}
int decr(int x )
{
    return --x ;
}
                                    /*Debug here and understand what happen*/
int operation(int (*ptr)(int,int)){
	
	if(ptr==add){
		return ptr(x,y);
	}else if(ptr==sub){
		return ptr(x,y);
	}else if(ptr==multi){
		return ptr(x,y);
	}else if(ptr==divi){
		return ptr(x,y);
	}else if(ptr==xor){
		return ptr(x,y);
	}else if(ptr==rem){
		return ptr(x,y);
	}else if(ptr==or){
		return ptr(x,y);
	}else if(ptr==and){
		return ptr(x,y);
	}
}