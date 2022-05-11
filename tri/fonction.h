#ifndef __fonctions_H_
#define __fonctions_H_
#define N 1000000000
#include <stdlib.h>
#include <stdio.h>
/* toutes mes signatures/prototypes de fonctions/méthodes */

/*date:15/03/22
*auteur: Bryan
*Pre condition:aucune
*Post condition: renvoie un tableau dynamique d'entier
*/
int* allouerTab();

/*date:15/03/22
*auteur: Bryan
*Pre condition:un tableau dynamique d'entier alloué
*Post condition: remplie le tableau de valeur aléatoire
*/
void initTab(int* tab);


/*date:15/03/22
*auteur: Bryan
*Pre condition:un tableau dynamique d'entier initialisé
*Affiche graphiquement le tableau dans le terminal
*/
void afficherTab(int* tab);



/*date:15/03/22
*auteur: Bryan
*Pre condition:un tableau dynamique d'entier initialisé
*libère les données du tableau de pointeur
*/
void freeTab(int* tab);

/*date:15/03/22
*auteur: Bryan
*Pre condition:deux tableaux alloué dont l'original est initialisé et de même taille
*copie les éléments de tab0 sur tabCopie
*/
void copie(int* tab, int* tabCopie);

/*date:15/03/22
*auteur: Bryan
*Pre condition:un tableau initialisé , 2 indices des éléments a échanger
*échange 2 valeurs d'un tableau
*/
void echange(int* tab, int i, int j);






#endif
