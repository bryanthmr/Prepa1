#include "trilent.h"
#include "fonction.h"

/* toutes mes signatures/prototypes de fonctions/méthodes + leur corps */


void triSelection(int* tab){
  int i,j,min;

  for(i=0;i<N;i++){
    min=i;
    for(j=0;j<N;j++){
      if(tab[j]<tab[min]){
        min=i;
      }
    }
    echange(tab,i,min);

  }

}

void triABulle(int* tab){
  int j,enDesordre;
  enDesordre=1;
  while(enDesordre){
    enDesordre=0;
    for(j=0;j<N;j++){
      if(tab[j] > tab[j+1]){
        echange(tab,j,j+1);
        enDesordre=1;
      }
    }
  }
}



void triInsertion(int* tab){
  int i,j,eltEnCours;

  for(i=0;i<N;i++){
    eltEnCours=tab[i];
    for(j=0;i>0 && tab[j-1]>eltEnCours;j++){
      tab[j]=tab[j-1];
    }
    tab[j]=eltEnCours;
  }
}
