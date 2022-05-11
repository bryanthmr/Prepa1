#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define N 5
#define M 3



void afficherTab(int tab[]){
  int i;

  printf("[");
  for(i=0;i<=N-1;i++){
    if (i==0){
      printf("%d",tab[i]);
    }
    else{
      printf("|");
      printf("%d",tab[i]);

    }
  }
  printf("]\n");


}

int sch(int tab1[],int tab2[]){
  int i,j,total;
  total=0;
  for(i=0;i<=N-1;i++){
    for(j=0;j<=M-1;j++){
      total=total+(tab1[i]*tab2[j]);

    }
  }
  return total;

}

void tabinverse(int Tab[]){
  int i,tmp;

  for(i=0;i<N/2;i++){
    tmp=Tab[i];
    Tab[i]=Tab[N-1-i];
    Tab[N-1-i]=tmp;
  }


}

int carreMagique(int tab[M][M]){
  int somme1,somme2,somme3,somme4;
  somme1=0;
  somme2=0;
  somme3=0;
  somme4=0;

  int i;

/*
  //lignes  marche que si M=3  faire une boucle imbriqué
  for(i=0;i<=M-1;i++){somme1=somme1+tab[0][i];}
  for(i=0;i<=M-1;i++){somme2=somme2+tab[1][i];}
  for(i=0;i<=M-1;i++){somme3=somme3+tab[2][i];}

  if(somme1!=somme2 || somme2!=somme3){
    return 1;
  }
  somme1=0;
  somme2=0;
  somme3=0;
  somme4=0;
*/
  //Lignes V2
  i=0;
  int e=0;
  int tmp=0;
  do{
    somme1=0;
    for(i=0;i<=M-1;i++){somme1=somme1+tab[e][i];}
    if(tmp==0){
      tmp=somme1;
    }
    e++;
    printf("%d\n",e);
  }while(somme1==tmp && e<=M-1);

  if(e<M-1){
    printf("1");
    exit(0);
  }


  //colonnes Marche que si M=3 faire une boucle imbriqué
  for(i=0;i<=M-1;i++){somme1=somme1+tab[i][0];}
  for(i=0;i<=M-1;i++){somme2=somme2+tab[i][1];}
  for(i=0;i<=M-1;i++){somme3=somme3+tab[i][2];}

  if(somme1!=somme2 || somme2!=somme3){
    return 2;
  }
  somme2=0;
  somme3=0;
  somme4=0;


  //diagonale gauche à droite
  for(i=0;i<=M-1;i++){
    somme3=somme3+tab[i][i];
  }
  if (somme1!=somme3){
    return 3;
  }

  //diagonale de droite à gauche
  for(i=M-1;i>=0;i--){
    somme4=somme4+tab[i][i];
  }

  if(somme1!=somme4){
    return 4;
  }





  return 100;
}

int main(){

  //int monTab[]={8,3,2,-1,0};
  //int monTab2[]={2,3,9};
  //afficherTab(monTab);
  //printf("%d\n",sch(monTab,monTab2));
  //tabinverse(monTab);
  //afficherTab(monTab);

  int monTab[M][M]={{8,1,0},{3,5,7},{4,9,2}};

  printf("%d\n",carreMagique(monTab));

  return 0;
}
