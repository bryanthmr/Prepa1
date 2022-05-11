#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ecole.h"

#define lignes 1000




int main(void){
  etudiant* a=malloc(sizeof(etudiant));
  tabEtudiant* tab;
  tab=malloc(sizeof(tabEtudiant));



  tab=lireCSV("notes.csv");
  //afficherEtudiant(tab->tabEtudiant[0]);



  //printf("%lf\n",calculerMoyenneParEtudiant(tab->tabEtudiant[0]));
  //printf("%s\n",meilleurEtudiant(*tab).nom);
  //saisirEtudiant(a);
  //ajouterEtudiant(tab,a);
  //afficherTableauEtudiant(*tab);
  supprimerEtudiant(tab,22078);
  afficherTableauEtudiant(*tab);


  ecrireCSV(tab,"notesV2.csv");





  free(tab);
  free(a);

  return 0;

}
