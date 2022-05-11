#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void bouclefor(){
  int i;

  for (i=1;i<11;i++) {
    printf("%d\n",i);

  }

  }



void boucleWhile(){

  int i;
  i=1;

  while(i<11){
    printf("%d\n",i);
    i++;
  }
}



  int main(){
    bouclefor();
    boucleWhile();


    return 0;


  }
