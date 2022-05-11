#ifndef __ecole_H_
#define __ecole_H_
#define N 1000

typedef struct etudiant etudiant;
struct etudiant{
  int numEtudiant;
  char* nom;
  char* prenom;
  int mesNotes[N];



};

typedef struct tabEtudiant tabEtudiant;
struct tabEtudiant{
  etudiant* tabEtudiant;
  int taille;

};

/* Auteur : Brybry
* Date :   05/04/22
* Résumé : lis un CSV
* Entrée(s) : le contenu d'un fichier csv en pointeur de tableau de chaine
* Sortie(s) :  renvoie un tableau d'étudiant
*/
tabEtudiant* lireCSV(char* ficherNotes);















#endif
