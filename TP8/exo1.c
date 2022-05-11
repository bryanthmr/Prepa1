#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 1000


int main(void){
  FILE* mesFringues = NULL;
  FILE* mesFringuesJson=NULL;
  char ligne[N];
  int nbLignesLues=0;
  int nbColonnesLues=0;
  char* laLigne;
  laLigne=malloc(sizeof(char)*N);

  mesFringues=fopen("mesFringues.csv","r");
  mesFringuesJson=fopen("mesFringues.json","w");
  fprintf(mesFringuesJson,"[");


  if(mesFringues==NULL){
    printf("Erreur , le fichier n'existe pas");

  }
  else{
    while(fgets(ligne,N,mesFringues)!=NULL){
      fprintf(mesFringuesJson,"{");
      laLigne=strtok(ligne,";");
      while (laLigne != NULL){

        switch(nbColonnesLues){
          case 0 :
          printf("%s\n",laLigne);
          fprintf( mesFringuesJson,"'id' :'%s',",laLigne);
          break;
          case 1:
          fprintf(mesFringuesJson,"'nom':'%s',",laLigne);
          break;
          case 2:
          fprintf(mesFringuesJson,"'taille':'%s',",laLigne);
          break;
          case 3:
          fprintf(mesFringuesJson,"'prix':'%s'",laLigne);
          break;
          default:
          break;

        }





        laLigne = strtok(NULL, ";");
        nbColonnesLues++;
        }
    fprintf(mesFringuesJson,"},");
    nbLignesLues++;
    nbColonnesLues=0;
    }
    fprintf(mesFringuesJson,"]");


  }


  fclose(mesFringues);
  fclose(mesFringuesJson);
  free(laLigne);


  return  0;
}
