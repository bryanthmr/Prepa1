#include "fonction.h"

int main(int argc, char* argv[]){
  int** matrice;
  int lignes;
  int colonnes;
  int nbTour;
  int typeMat;


  //colonnes
  //printf("Entrez le nombre de lignes: ");
  scanf("%d",&lignes);
  //printf("\n");
  //flush(); attention ne pas utiliser de flush !


  //colonnes
  //printf("Entrez le nombre de colonnes: ");
  scanf("%d",&colonnes);
  //printf("\n");
  //flush(); attention ne pas utiliser de flush !

  matrice=allouer(lignes,colonnes);
  initialiser(matrice,lignes,colonnes);


  for(int e=0;e<lignes;e++){
    for(int f=0;f<colonnes;f++){
      scanf("%d",&matrice[e][f]);
    }
  }

  scanf("%d",&nbTour);

  scanf("%d",&typeMat);




  for(int i=0;i<nbTour;i++){
    afficher(matrice,lignes,colonnes);
    CalculVoisin(matrice,lignes,colonnes,typeMat);
    printf("\n");
    usleep(500000);
    system("clear");

  }

  freeMatrice(matrice,lignes,colonnes);





  return 0;






}
