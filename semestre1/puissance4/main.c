#include "puissance4.h"


int main(void){

  int** matrice;
  int tmp;
  matrice=allouerMatrice();
  initMatrice(matrice);
  afficherMatrice(matrice);
  tmp=jouer(matrice,2);
  printf("%d \n",tmp);
  afficherMatrice(matrice);
  freeMatrice(matrice);

  return 0;
}
