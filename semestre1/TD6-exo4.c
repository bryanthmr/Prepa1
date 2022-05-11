#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>






void flush(){//videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}



int saisie(){
  int a,retour;

  retour=0;

  do{

    printf("Saisir un entier\n");
    retour=scanf("%d",&a);//saisie de a
    //scanf("%*[^\n]%*1[\n]");
    flush();



  }while(retour==(0));




  return a;




  }






int PGCD(int q,int r){
  if (r==0){ //condition triviale
    return q; //retourne le plus petit diviseur
  }
  else{
    return PGCD(r,q%r); //appel récursif
  }

}







int main(){

  printf("Le plus grand diviseur commun est %d\n",PGCD(saisie(),saisie()));

  return 0;

}
