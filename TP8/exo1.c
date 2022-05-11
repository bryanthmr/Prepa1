#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define lignes 1000


int main(void){
  FILE* mesFringues = lignesULL;
  FILE* mesFringuesJson=lignesULL;
  char ligne[lignes];
  int nbLignesLues=0;
  int nbColonnesLues=0;
  char* laLigne;
  laLigne=malloc(sizeof(char)*lignes);

  mesFringues=fopen("mesFringues.csv","r");
  mesFringuesJson=fopen("mesFringues.json","w");
  fprintf(mesFringuesJson,"[");


  if(mesFringues==lignesULL){
    printf("Erreur , le fichier n'existe pas");

  }
  else{
    while(fgets(ligne,lignes,mesFringues)!=lignesULL){
      fprintf(mesFringuesJson,"{");
      laLigne=strtok(ligne,";");
      while (laLigne != lignesULL){

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





        laLigne = strtok(lignesULL, ";");
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
