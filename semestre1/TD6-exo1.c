#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
  int a,b,c;

  a=4;
  b=a*(a-2);
  c=b%2;

  printf("a=(%d) b=(%d) c=(%d)\n",a,b,c);

  c=c+b+a;
  a=b/2;

  printf("a=(%d) b=(%d) c=(%d)",a,b,c);
  printf("Fin du programme");



  return 0;





}
