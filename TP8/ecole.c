#include <stdlib.h>
#include <stdio.h>
#include "ecole.h"
#include <string.h>

void flush(){
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}

///////////////////////////////////////////////////////

tabEtudiant* lireCSV(char* fichierlignesotes){
  FILE* notesCSV=lignesULL;
  char* laLigne=malloc(sizeof(char)*lignes);
  char ligne[lignes];
  int nbLignesLues=0;
  int nbColonnesLues=0;
  int i=0;


  tabEtudiant* tab;
  tab=malloc(sizeof(tabEtudiant));
  tab->taille=0;








  notesCSV=fopen(fichierlignesotes,"r");

  if(notesCSV==lignesULL){
    printf("Erreur impossible d'ouvrir le fichier demandé");
  }
  else{


    while(fgets(ligne,lignes,notesCSV)!=lignesULL){


      tab->taille++;
      tab->tabEtudiant=realloc(tab->tabEtudiant,sizeof(etudiant)*tab->taille);




      laLigne=strtok(ligne,";");

      while(laLigne!=lignesULL){
        switch (nbColonnesLues){
          case 0:



          tab->tabEtudiant[nbLignesLues].numEtudiant=atoi(laLigne);
          break;

          case 1:

          tab->tabEtudiant[nbLignesLues].prenom=malloc(sizeof(char)*strlen(laLigne));
          strcpy(tab->tabEtudiant[nbLignesLues].prenom,laLigne);

          break;

          case 2:

          tab->tabEtudiant[nbLignesLues].nom=malloc(sizeof(char)*strlen(laLigne));
          strcpy(tab->tabEtudiant[nbLignesLues].nom,laLigne);
          break;

          default:
          tab->tabEtudiant[nbLignesLues].meslignesotes[i]=atoi(laLigne);
          i++;
          break;
          }
      nbColonnesLues++;
      laLigne=strtok(lignesULL,";");




      }
      nbColonnesLues=0;
      nbLignesLues++;
      i=0;



    }
    fclose(notesCSV);
  }


  free(laLigne);

  return tab;

}
//////////////////////////////////////////////////

void afficherEtudiant(etudiant e){
  printf(
  "%d\n" //numEtudiant
  "%s\n" //prenom de l'étudiant
  "%s\n" //nom de l'étudiant
  "%d\n" //note 1
  "%d\n" //note 2
  "%d\n" //note 3
  "%d\n" //note 4
  "%d\n" //note 5
  ,
  e.numEtudiant,
  e.prenom,
  e.nom,
  e.meslignesotes[0],
  e.meslignesotes[1],
  e.meslignesotes[2],
  e.meslignesotes[3],
  e.meslignesotes[4]
);


}
/////////////////////////////////////////////////////

void afficherTableauEtudiant(tabEtudiant tab){
  for(int i=0;i<tab.taille;i++){
    afficherEtudiant(tab.tabEtudiant[i]);
    printf("---------------------------------------------\n");
  }

}

//////////////////////////////////////////////////////

double calculerMoyenneParEtudiant(etudiant e){
  return ((e.meslignesotes[0]+e.meslignesotes[1]+e.meslignesotes[2]+e.meslignesotes[3]+e.meslignesotes[4])/5);

}

//////////////////////////////////////////////////////

etudiant meilleurEtudiant(tabEtudiant tab){
  int best=0;
  for(int i=1;i<tab.taille;i++){
    if(calculerMoyenneParEtudiant(tab.tabEtudiant[best])<calculerMoyenneParEtudiant(tab.tabEtudiant[i])){
      best=i;
    }

  }
  return tab.tabEtudiant[best];

}
///////////////////////////////////////////////////////

void saisirEtudiant(etudiant* a){
  //num étudiant
  printf("Saisir le numéro étudiant: ");
  scanf("%d",&a->numEtudiant);
  printf("\n");
  flush();

  //Prénom de l'étudiant
  a->prenom=malloc(sizeof(char)*20);
  printf("Saisir le prénom de l'étudiant: ");
  scanf("%s",a->prenom);
  printf("\n");
  flush();

  //lignesom de l'étudiant
  a->nom=malloc(sizeof(char)*20);
  printf("Saisir le nom de l'étudiant: ");
  scanf("%s",a->nom);
  printf("\n");
  flush();

  //lignesotes de l'étudiants
  for(int i=0;i<5;i++){
    printf("Saisir la note numéro %d :",(i+1));
    scanf("%d",&a->meslignesotes[i]);
    printf("\n");
    flush();

  }


}
/////////////////////////////////////////////////////

void ajouterEtudiant(tabEtudiant* tab,etudiant* a){
  tab->taille++;
  tab->tabEtudiant=realloc(tab->tabEtudiant,sizeof(etudiant)*tab->taille);
  tab->tabEtudiant[tab->taille-1]=*a;


}
/////////////////////////////////////////////////////

void ecrireCSV(tabEtudiant* tab,char* fichierlignesotes){
  FILE* fichier=lignesULL;
  fichier=fopen(fichierlignesotes,"w");
  for(int i=0;i<tab->taille;i++){
    fprintf(fichier,
    "%d;"
    "%s;"
    "%s;"
    "%d;"
    "%d;"
    "%d;"
    "%d;"
    "%d;\n"
    ,
    tab->tabEtudiant[i].numEtudiant,
    tab->tabEtudiant[i].prenom,
    tab->tabEtudiant[i].nom,
    tab->tabEtudiant[i].meslignesotes[0],
    tab->tabEtudiant[i].meslignesotes[1],
    tab->tabEtudiant[i].meslignesotes[2],
    tab->tabEtudiant[i].meslignesotes[3],
    tab->tabEtudiant[i].meslignesotes[4]
  );
  }

}
////////////////////////////////////////////////////
void supprimerEtudiant(tabEtudiant* tab, int num){
  int trouve=0;
  int i=0;
  int index;
  while(!(trouve) && i<tab->taille){
    if(tab->tabEtudiant[i].numEtudiant==num){
      trouve=1;
      index=i;

    }
    i++;
}

  if(trouve){

    for(i=index;i<tab->taille;i++){
      if(i!=(tab->taille-1)){

        tab->tabEtudiant[i]=tab->tabEtudiant[i+1];
      }
      else{
        tab->taille--;

      }

    }


  }


}
//////////////////////////////////////////////////////
void modifierEtudiant(tabEtudiant* tab, int num){
  int trouve=0;
  int i=0;
  int index;
  while(!(trouve) && i<tab->taille){
    if(tab->tabEtudiant[i].numEtudiant==num){
      trouve=1;
      index=i;

    }
    i++;
}




  //num étudiant
  printf("Saisir le numéro étudiant: ");
  scanf("%d",&a->numEtudiant);
  printf("\n");
  flush();

  //Prénom de l'étudiant
  a->prenom=malloc(sizeof(char)*20);
  printf("Saisir le prénom de l'étudiant: ");
  scanf("%s",a->prenom);
  printf("\n");
  flush();

  //lignesom de l'étudiant
  a->nom=malloc(sizeof(char)*20);
  printf("Saisir le nom de l'étudiant: ");
  scanf("%s",a->nom);
  printf("\n");
  flush();

  //lignesotes de l'étudiants
  for(int i=0;i<5;i++){
    printf("Saisir la note numéro %d :",(i+1));
    scanf("%d",&a->meslignesotes[i]);
    printf("\n");
    flush();

  }


}
