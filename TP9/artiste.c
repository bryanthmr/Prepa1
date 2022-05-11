#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TAILLE 20

typedef struct Artiste Artiste;
struct Artiste{
  char* nom;
  char* prenom;
  int nbDisques;
  int anneeN;
};



void ajouterArtiste(Artiste art);

int main(int argc,char* argv[]){
  Artiste art;

  if(argc!=5){
    printf("Il n'y a pas le bon nombres d'arguments");

  }
  else{
    art.nom=malloc(strlen(argv[1])*sizeof(char));
    art.nom=argv[1];

    art.prenom=malloc(strlen(argv[2])*sizeof(char));
    art.prenom=argv[2];

    art.nbDisques=atoi(argv[3]);

    art.anneeN=atoi(argv[4]);

    ajouterArtiste(art);
  }


  return 0;
}


void ajouterArtiste(Artiste art){
  FILE* fichier;
  fichier=NULL;
  fichier=fopen("mesArtistes.csv","a");

  if(fichier != NULL){
    fprintf(fichier,"Nom: %s \nPrenom: %s \nNombre de disque: %d \nAnnée de naissance: %d \n"
    ,art.nom,art.prenom,art.nbDisques,art.anneeN);
    fclose(fichier);
  }


}
