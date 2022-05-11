#include <stdlib.h>
#include <stdio.h>
#include "trisRapide.h"
#include "fonction.h"


int partitionner(int* tab,int p, int r){
  int pivot,i,j;
  pivot=tab[r]; //pivot égal au dernier élément
  i=p-1; //indice élément plus petit que pivot
  for(j=p;j<=r-1;j++){
    if(tab[j]<pivot){ // si les éléments sont plus petits que pivot
      i++;// on ajoute 1 a i du coté plus petit
      echange(tab,i,j);// et on échange les valeurs pour que la valeur plus petite que le pivot soit au début

    }
  }
  echange(tab,i+1,r);// on met le pivot entre les valeurs plus petites et plus grandes
  return (i+1); // retourne l'indice du pivot
}


void triRapide(int* tab,int p,int r){
    int q;
    if(p < r){
      q=partitionner(tab,p,r); //q c'est l'indice du pivot
      triRapide(tab,p,q-1); // tri la partie du tableau plus petit que le pivot(gauche)
      triRapide(tab,q+1,r);// tri la partie plus grande (droite)
    }

}

void fusionner(int* tab, int d, int m, int f){
  int i,max,gauche,droite;
  int* tabTmp;
  tabTmp=NULL;
  i=0;
  max=f-d;
  gauche=d;
  droite=m+1;
  tabTmp=allouerTab();

  while(gauche<=m && droite <= f){
    if(tab[gauche]<tab[droite]){
      tabTmp[i]=tab[gauche];
      gauche++;
    }
    else{
      tabTmp[i]=tab[droite];
      droite++;

    }
    i++;
  }

  while (gauche<=m){
    tabTmp[i]=tab[gauche];
    gauche++;
    i++;

  }
  while(droite <= f){
    tabTmp[i]=tab[droite];
    droite++;
    i++;
  }
  for(i=0;i<max+1;i++){
    tab[i+d]=tabTmp[i];

  }
  freeTab(tabTmp);
}


void triFusion(int* tab,int d, int f){
  int m;
  if(d<f){
    m=(d+f)/2; // on déclare le milieu du tableau
    triFusion(tab,d,m); //partie a gauche du milieu
    triFusion(tab,m+1,f);// partie a droite du milieu
    fusionner(tab,d,m,f);// les refusionnent une fois que le début est égal a la fin (cas ou il y a qu'un élément
  }



}
