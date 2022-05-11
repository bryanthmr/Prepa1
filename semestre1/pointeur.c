#include <stdio.h>
#include <stdlib.h>





void test(int* b){

  *b=*b+1;
}




int main(){
  int* p_a;
  int a;
  a=5;
  p_a=&a;

  test(p_a);
  printf("%d\n",a);






  return 0;
}
