#include <stdio.h>
int main() {
   int p; //principal value//
  int n;//no of years//
  float r; //rate of interest//
  float i; //interest//
  
  //input//
 printf("enter principal value= ");
    scanf("%d",&p);
 printf("no of year= ");
 scanf("%d",&n);
 printf("rate of interest=  ");
    scanf("%f",&r);
    
    //calculation//
   i=(p*r*n)/100;
   
   //output//
   
   printf("interest=%.2f",i);
  return 0;
}