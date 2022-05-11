#ifndef __puissance4_H_
#define __puissance4_H_
#include <stdio.h>
#include <stdlib.h>
#define N 7

/*???*/
void flush();





/*date:28/02/22
*auteur: Bryan
*Pre condition:aucune
*Post condition: renvoie le pointeur de la matrice alloué
*/
int** allouerMatrice();

/*date:28/02/22
*auteur: Bryan
*Pre condition: le pointeur de pointeur de la matrice
*Initialise la matrice à -1
*/
void initMatrice(int** matrice);

/*date:28/02/22
*auteur: Bryan
*Pre condition: un poiteur de pointeur d'une matrice initialisé
*affiche la matrice dans le terminal
*/
void afficherMatrice(int** matrice);

/*date:28/02/22
*auteur: Bryan
*Pre condition: un poiteur de pointeur d'une matrice initialisé
*free tous les pointeurs de la matrice.
*/
void freeMatrice(int** matrice);

/*date:01/03/22
*auteur: Bryan
*Pre condition: un poiteur de pointeur d'une matrice initialisé et le numéro du joueur
*Renvoie 1 si le joueur a placé son pion.
*/
int jouer(int** matrice,int joueur);




#endif
