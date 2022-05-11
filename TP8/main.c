#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ecole.h"

#define N 1000



int main(void){
  tabEtudiant* tab;
  char* notes=malloc(sizeof(char)*9);
  notes="notes.csv";




  tab=lireCSV(notes);
  printf("%d\n %s\n  %s\n  %d\n %d\n %d\n %d\n %d\n",tab->tabEtudiant[1].numEtudiant,
  tab->tabEtudiant[1].nom,
  tab->tabEtudiant[1].prenom,
  tab->tabEtudiant[1].mesNotes[0],
  tab->tabEtudiant[1].mesNotes[1],
  tab->tabEtudiant[1].mesNotes[2],
  tab->tabEtudiant[1].mesNotes[3],
  tab->tabEtudiant[1].mesNotes[4]);





  //free(tab);
  //free(notes);
  return 0;

}
