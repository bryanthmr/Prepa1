/**
 * @file 1-hw.c
 * @brief Mon premier programme 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* @fn int main (int argc, char** argv)
* @author peio loubière <peio.loubiere@cuy.fr>
* @version 0.1
* @date 1 novembre 2020
*
* @brief Fonction principale
*
*
* @return EXIT_SUCCESS : le programme doit se terminer normalement
*
* @remarks
*/
int main(int argc, char** argv) {
  
  printf("Hello world ! \n");
  
  
  
  int a, b, c; // 3 variables bidons
  float x, y; // toujours pour rigoler
  char car; //pour tester les caractères
  char toto[10] = "CY TECH";
  
  
  printf("Tiens, y a-t-il des valeurs dans les variables suivantes (vérifez plusieurs fois) ? \n a=%d, b=%d, x=%f, y=%f, car=%c \n", a, b, x, y, car);
  // Opérations
  x = 12 + 8 ;
  y = 3 * x ;
  a = 12 / 5 ; // Division entière (DIV) !
  x = 12 / 5.0 ;
  c = 12 % 5 ;
  
  printf("entiers : a=%d, b=%d, c=%d \n", a, b, c);
  printf("réels : x=%f, y=%f \n", x, y);
  printf("réels : x=%g, y=%g \n", x, y);
  printf("caractères : %c=%d \n", 'a', 'a');
  printf("retour d'affectation : %d \n", (a=17));
  
  // ATTENTION aux ++, -- !!!
  a=1;
  printf("a=%d\n",a++);
  printf("a=%d\n",a);
  b=1;
  printf("b=%d\n",++b);
  printf("b=%d\n",b);
  
  
  // Comparaisons
  printf("comparaisons : a=2 : %d, b=4 : %d, c <=9 : %d \n", a==2, b!=3, c<=9);
  if (a==2) {
    printf("a=2 -> dans le IF\n");
  }
  
  
  if (a==3) {
    printf("IMPOSSIBLE CAR a=%d\n",a);
  } else {
    printf("Bien sur car a=2 !\n");
  }
  
  
  for(int i=1; i<=15; i+=3) {
    printf("i=%d \n",i);
  }
  
  
  int n, retour;
  
  strcpy(toto,"Peio");
  printf("Coucou %s !! \n Il est %g h \n", toto, 18.00);
  printf("saisir un nb\n");
  retour = scanf("%d", &n);
  if (retour == 0) {
    printf ("Probleme de saisie\n");
    exit (EXIT_FAILURE);
  }  
  
  printf("nb = %d, retour = %d \n", n, retour);
  
  
  char nom[20];
  printf("Votre nom:\n");
  retour = scanf("%s", nom);
  printf("Hello %s !!\n", nom);
  if (retour == 0) {
    printf ("Probleme de saisie\n");
    exit (EXIT_FAILURE);
  }
  
  
  /* */
  
  return EXIT_SUCCESS;
}

