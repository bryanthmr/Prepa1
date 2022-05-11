#include <stdio.h>
#include <stdlib.h>

void flush() {
  char c;
  
  while (((c = getchar()) != '\n') && (c != EOF)); 
}


void testChar1() {
  char ch1, ch2;

  printf("*********** Exemple 1 ************\n");
  printf("Saisir le 1er caractere:"); 
  scanf("%c", &ch1);
  
  printf("Saisir le 2nd caractere:"); 
  scanf("%c", &ch2);
  
  printf("ch1=%c, ASCII code = %d\n", ch1, ch1);
  printf("ch2=%c, ASCII code = %d\n", ch2, ch2);
  printf("**********************************\n\n");
  
}

void testChar2() {
  char ch1, ch2;

  printf("*********** Exemple 2 ************\n");
  printf("Saisir le 1er caractere:"); 
  scanf("%c", &ch1);
  flush();
  
  printf("Saisir le 2nd caractere:"); 
  scanf("%c", &ch2);
  flush();
  
  printf("ch1=%c, ASCII code = %d\n", ch1, ch1);
  printf("ch2=%c, ASCII code = %d\n", ch2, ch2);
  printf("**********************************\n\n");
}


void testStr1() {
  char rep1[20];
  char rep2[20];

  printf("*********** Exemple 3 ************\n");
  printf("Saisir une chaine:\n"); 
  scanf("%s", rep1);
  //scanf("%s", rep2);
  
  printf("Vous avez saisi: %s\n", rep1);
  //printf("Vous avez saisi: %s\n", rep2);
  printf("**********************************\n\n");
}


void testStr2() {
  char rep1[20];

  printf("*********** Exemple 4 ************\n");
  printf("Saisir une chaine:\n"); 
  scanf("%20[^\n]", rep1);
  flush();
  printf("Vous avez saisi: %s\n", rep1);
  printf("**********************************\n\n");
}


void testStr3() {
  char* reponse = NULL;
  size_t n = 0;
  ssize_t nbLus = 0;

  printf("*********** Exemple 5 ************\n");
  printf("Saisir une chaine:\n"); 
  nbLus = getline(&reponse, &n, stdin);
  printf("Vous avez saisi: %s\n", reponse);
  printf("Taille: %lu, nbLus: %lu\n", n, nbLus);  
  printf("**********************************\n\n");
}

int main(int argc, char *argv[])
{
  //testChar1();
  //testChar2();
  //testStr1();
  //testStr2();
  //testStr3();
  
  return EXIT_SUCCESS;
}
