#include "fonction.h"
#include <time.h>
/* toutes mes signatures/prototypes de fonctions/méthodes + leur corps */



int* allouerTab(){

  int* tab;
  tab=NULL;
  tab=malloc(N * sizeof(int));


  return tab;
}




void initTab(int* tab){
  int i;
  for(i=0;i<N;i++){
    tab[i]=rand()%101;
  }

}



void afficherTab(int* tab){
  int i;
  printf("[");
  for(i=0;i<N;i++){
    printf("%d |", tab[i]);

  }
  printf("]\n");


}



void freeTab(int* tab){


  free(tab);
  tab=NULL;
}


void copie(int* tab, int* tabCopie){
  int i;

  for(i=0;i<N;i++){
    tabCopie[i]=tab[i];

  }
}


void echange(int* tab, int i, int j){
  int tmp;

  tmp=tab[i];
  tab[i]=tab[j];
  tab[j]=tmp;


}
