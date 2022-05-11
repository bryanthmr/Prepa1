#include "puissance4.h"
#include <stdlib.h>
#include <stdio.h>

void flush(){//videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}

int** allouerMatrice(){
  int i;
  int** matrice;
  matrice = malloc(N*sizeof(int*));
  for(i=0;i<N;i++){
    matrice[i]=malloc(N*sizeof(int));
}
  return matrice;

}

void initMatrice(int** matrice){
  for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
      matrice[i][j]=-1;
    }
  }

}

void afficherMatrice(int** matrice){
  int i,e,j;
  for(i=0;i<N;i++){ //crée chaque lignes
    for(j=0;j<N;j++){//crée chaque barre horrizontale
      printf("+---");
    }
    printf("+");//ajoute un + à la fin
    printf("\n");
    for(e=0;e<N;e++){// crée chaque barre verticale
      printf("|");
      switch(matrice[i][e]){
        case 1:
          printf(" O ");
          break;
        case 2:
          printf(" X ");
          break;
        default:
          printf("   ");
          break;

      }



    }
    printf("|");//ajoute la dernière barre verticale
    printf("\n");
  }

  for(j=0;j<N;j++){ //ajoute la dernière barre horrizontale
    printf("+---");

 }
  printf("+\n");



}






void freeMatrice(int** matrice){
  int i;
  for(i=0;i<N;i++){
    free(matrice[i]);
    }
  free(matrice);
  matrice=NULL;
  }

int jouer(int** matrice,int joueur){
  int colonne;
  int a,i;
  int res;

  res=0;
  i=0;

  printf("Saisir les coordonnées de la case:\n");
  do{

    printf("Colonne: ");
    scanf("%d",&colonne);
    colonne--;

  }while(colonne<0 || colonne>=N || matrice[0][colonne]!=-1);

  while(i<N || !res){

    if(matrice[i][colonne]!=-1){
      matrice[i-1][colonne]=joueur;
      res=1;
      i++;
    }
    else if(matrice[N-1][colonne]=-1){
      matrice[N-1][colonne]=joueur;
      res=1;
      i++;
    }
    else{
      i++;
    }

  }

  return res;
  }
