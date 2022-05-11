#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void flush(){  //videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}

int main(){
  float n1,n2,n3,max;

  printf("Saisir le 1er nombre réel\n");
  scanf("%f",&n1);//saisie du premier nombre
  flush();//videur de tampon

  printf("Saisir le 2ème nombre réel\n");
  scanf("%f",&n2);// saisie du deuxième nombre
  flush();//videur de tampon

  printf("Saisir le 3ème nombre réel\n");
  scanf("%f",&n3);//saisie du troisième nombre
  flush();//videur de tampon






  max=fmax(n1,n2);//max en 2 nombres
  max=fmax(max,n3);// max entre le max au dessus et le 3ème nombre




















/*  max=n1;

  if (max<=n2){
    max=n2;
  }

  else if (max <= n3){
    max=n3;
  }

  else{
    max=n1;
  }
*/

  printf("Le maximum est (%f)\n",max);

  return 0;







}
