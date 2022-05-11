#ifndef __fonction_H__
#define __fonction_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Auteur : Bryan
* Date :   17/04/22
* Résumé : vide le tampon
* Entrée(s) : rien
* Sortie(s) :  rien
*/

void flush();



/* Auteur : Bryan
* Date :   17/04/22
* Résumé : alloue un tableau à 2 dimensions
* Entrée(s) : un entier de lignes et un entier de colonnes
* Sortie(s) :  un tableau 2D de pointeurs d'entiers
*/
int** allouer(int lignes,int colonnes);


/* Auteur : Bryan
* Date :   17/04/22
* Résumé : initialise à 0 un tableau à 2 dimensions
* Entrée(s) : un entier de lignes et un entier de colonnes et un tableau de pointeur d'entier alloué
* Sortie(s) :  rien
*/
void initialiser(int** ppint_matrice,int lignes,int colonnes);

/* Auteur : Bryan
* Date :   17/04/22
* Résumé : affiche un tableau à 2 dimensions
* Entrée(s) : un entier de lignes et un entier de colonnes et un tableau de pointeur d'entier initialisé
* Sortie(s) :  rien
*/
void afficher(int** ppint_matrice,int lignes,int colonnes);

/* Auteur : Bryan
* Date :   21/04/22
* Résumé : analyse et calculs les voisins de chaque case et décide de sa vie ou sa mort
* Entrée(s) : un entier de lignes et un entier de colonnes et un tableau de pointeur d'entier initialisé
* Sortie(s) :  rien
*/

void CalculVoisin(int** ppint_matrice,int lignes,int colonnes,int typeMatrice);





void freeMatrice(int** matrice,int lignes,int colonnes);









#endif
