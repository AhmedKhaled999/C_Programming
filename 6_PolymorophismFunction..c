#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Add(int , int);
void Sub(int , int);
void Mul(int , int);

void operation(void (*ptr)(int,int),int ,int);

/*
 *  App.c
 *
 *
 *      Created on: 6/1/2022
 *      Author    : Ahmed Khaled
 *
 */
/**********************************************************************************/


											/*include some libiraies*/

#include <stdio.h>
#include <stdlib.h>
 
                                           /**Functions prototype***/
void Add(int , int);
void Sub(int , int);
void Mul(int , int);

void operation(void (*ptr)(int,int),int ,int);

int main()
{

operation(Sub,5,7);
operation(Add,5,7);

 return 0 ;
}
void Add(int a, int b){

printf("the result = %d\n",a+b);


}
void Sub(int a , int b){

printf("the result = %d\n",a-b);

}
void Mul(int a , int b){

printf("the result = %d\n",a*b);

}
void operation(void (*ptr)(int,int),int a ,int b){

  if(ptr==Add){
    ptr(a,b);
  }else if(ptr==Sub){
  ptr(a,b);
  }else if(ptr==Mul){
  ptr(a,b);
  }
}
