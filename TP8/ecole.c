#include <stdlib.h>
#include <stdio.h>
#include "ecole.h"
#include <string.h>



tabEtudiant* lireCSV(char* fichierNotes){
  FILE* notesCSV=NULL;
  char* laLigne=malloc(sizeof(char)*N);
  char ligne[N];
  int nbLignesLues=0;
  int nbColonnesLues=0;
  int i=0;


  tabEtudiant* tab;
  tab=malloc(sizeof(tabEtudiant));
  tab->tabEtudiant=malloc(sizeof(etudiant));
  tab->taille=1;


  //printf("%ld\n",strlen(fichierNotes));





  notesCSV=fopen(fichierNotes,"r");

  if(notesCSV==NULL){
    printf("Erreur impossible d'ouvrir le fichier demandé");
  }
  else{


    while(fgets(ligne,N,notesCSV)!=NULL){

      if(tab->taille>0){
        tab->taille++;
        tab->tabEtudiant=realloc(tab->tabEtudiant,sizeof(etudiant)*tab->taille);


      }




      laLigne=strtok(ligne,";");

      while(laLigne!=NULL){
        switch (nbColonnesLues){
          case 0:

          //printf("%d\n",atoi(laLigne));

          tab->tabEtudiant[nbLignesLues].numEtudiant=atoi(laLigne);
          break;

          case 1:
          //printf("%s\n",laLigne);
          tab->tabEtudiant[nbLignesLues].prenom=laLigne;
          break;

          case 2:
          //printf("%s\n",laLigne);
          tab->tabEtudiant[nbLignesLues].nom=laLigne;
          break;

          default:
          tab->tabEtudiant[nbLignesLues].mesNotes[i]=atoi(laLigne);
          i++;
          break;
          }
      nbColonnesLues++;
      laLigne=strtok(NULL,";");




      }
      nbColonnesLues=0;
      nbLignesLues++;
      i=0;


    }
  }
  fclose(notesCSV);
  free(laLigne);

  return tab;

}
