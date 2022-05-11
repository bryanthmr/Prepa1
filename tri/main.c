#include <stdio.h>
#include <stdlib.h>
#include "trisRapide.h"
#include "fonction.h"
#include "trilent.h"
#include <time.h>

int main(int argc,char** argv){
  int* tab;
  tab=allouerTab();
  initTab(tab);

  //tri Rapide
  //afficherTab(tab);
  //printf("--------------------------------------\n");
  //triRapide(tab,0,N-1);
  //afficherTab(tab);

  //afficherTab(tab);
  //printf("--------------------------------------\n");
  //triFusion(tab,0,N-1);
  //afficherTab(tab);


  clock_t t1,t2;
  float temps_total;
  t1=clock();
  triRapide(tab,0,N-1);
  t2=clock();
  temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
  printf("triRapide a mis %f de secondes à s'executer \n",temps_total);




  t1=clock();
  triFusion(tab,0,N-1);
  t2=clock();
  temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
  printf("triFusion a mis %f de secondes à s'executer \n",temps_total);







  /*
  srand(time(NULL));


  int* tab=allouerTab();
  int* tab2=allouerTab();
  initTab(tab);
  //afficherTab(tab);

  copie(tab,tab2);

  afficherTab(tab);
  printf("---------------------------------\n");
  triSelection(tab2);
  afficherTab(tab2);







  freeTab(tab);
  freeTab(tab2);
  */





    return 0;
}
