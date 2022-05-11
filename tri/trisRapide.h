#ifndef __trisLents_H_
#define __trisLents_H_
#include <stdlib.h>
#include <stdio.h>
#define N 1000000000


int partitionner(int* tab,int p, int r);

/*date:21/03/22
*auteur: Bryan
*Pre condition:un tableau initialisé non trié et un pas en entier
*tri le tableau avec la methode de tri rapide
*/
void triRapide(int* tab, int p, int r);

void fusionner(int* tab, int d, int m, int f);


void triFusion(int* tab,int d, int f);







#endif
