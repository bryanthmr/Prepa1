#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush(){//videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}

void saisie(){
  int retour,n;


  printf("Saisir un entier entre 0 et 100\n");
  retour=scanf("%d",&n);
  flush();

  if (retour==0 || n>100 || n<0){
    printf("ERREUR : la valeur de n n'est pas dans l'intervalle [0,100]\n");
  }







  }









int main(){

  saisie();

  return 0;

}
