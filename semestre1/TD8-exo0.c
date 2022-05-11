#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


void sapin(int n){
  //char* etoile="*";
  int i,j,k;



  for(i=0;i<n;i++){
    for(k=n-i-1;k>0;k--){
      printf(" ");
    }
    for(j=0;j<2*i-1;j++){
      printf("*");
    }
    printf("\n");

  }

  for(k=n-1-1;k>0;k--){
    printf(" ");
}
  printf("@ \n");

  for(k=n-1-1;k>0;k--){
    printf(" ");
}
  printf("@ \n");








}


int main(){
  sapin(50);
  return 0;
}
