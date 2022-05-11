#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush(){//videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}



int main(){
  unsigned int n;
  int i,retour;

  do{
    printf("Saisir un entier positif\n");
    retour=scanf("%d",&n);
    flush();

  }while(retour==0);

  printf("-----------------------------------------------\n");

  for(i=0;i<n;i++){
    if (i%8==0){
      printf("%d\n",i);
    }



  }




    return 0;
}
