#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>




float Leibniz(){
  int operand;
  float somme;
  float d;
  float res;

  operand=0;
  somme=1;
  d=3;

  while (d<10000){
    res=1/d;
    //printf("%f\n",res);
    if (operand==0){

      somme=somme-(res);
      d=d+2;
      operand=1;
    }
    else{
      somme=somme+(res);
      d=d+2;
      operand=0;
    }
  }

  return somme;






}

int main(){
  float pi;
  pi=4*Leibniz();

  printf("%f\n",pi);
  return 0;
}
