#include <stdio.h>
#include <stdlib.h>
#define MAX_TAILLE 20
#define ANNEE 2022
#define AGE(anneeNaissance) (ANNEE>anneeNaissance ? ANNEE-anneeNaissance : anneeNaissance-ANNEE)

typedef struct joueur joueur;
struct joueur{
  char* nom;
  char* prenom;
  int anneeNaissance;
  int ptsATP;
};


int main(){
  int nbJoueurs;
  joueur* tabJoueurs;

  printf("Combien de joueur voulez vous créer ? ");
  scanf("%d",&nbJoueurs);
  printf("\n");
  tabJoueurs=malloc(nbJoueurs*sizeof(joueur));

  for(int i=0;i<nbJoueurs;i++){
    printf("nom :");
    tabJoueurs[i].nom=malloc(MAX_TAILLE*sizeof(char));
    scanf("%s",tabJoueurs[i].nom);

    printf("prenom :");
    tabJoueurs[i].prenom=malloc(MAX_TAILLE*sizeof(char));
    scanf("%s",tabJoueurs[i].prenom);

    printf("Année de naissance: ");
    scanf("%d",&tabJoueurs[i].anneeNaissance);

    printf("PointsATP :");
    scanf("%d",&tabJoueurs[i].ptsATP);

    printf("Le joueur n°%d a %d ans \n",i+1,AGE(tabJoueurs[i].anneeNaissance));
  }

  #ifdef TUTU
    for(int i=0;i<nbJoueurs;i++){
      printf(
        "---------------------\n "
        "%s \n"
        "%s \n"
        "%d ans \n"
        "%d points \n"
        ,
        tabJoueurs[i].nom,
        tabJoueurs[i].prenom,
        AGE(tabJoueurs[i].anneeNaissance),
        tabJoueurs[i].ptsATP
        );
    }
  #endif
  for(int i=0;i<nbJoueurs;i++){
    free(tabJoueurs[i].nom);
    free(tabJoueurs[i].prenom);

  }
  free(tabJoueurs);

  return 0;
}
