#ifndef __soccer_H_
#define __soccer_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct joueur joueur;
struct joueur{
  char* Nom;
  char* Prenom;
  char* Poste;
  int Numero;
  int Age;
  int nbBut;

};

typedef struct equipe equipe;
struct equipe{
  char* Nom;
  char* pays;
  char* chp;
  int classement;
  int nbJoueur;
  joueur* compo;
};

void flush();

void creationJoueur(joueur* j);

void afficherJoueur(joueur* j);

void creationEquipe(equipe* e);

void afficherEquipe(equipe* e);

void ajouterJoueur(equipe* e, joueur j);

#endif
