#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

typedef struct point point;
struct point{
  float x;
  float y;



};



void flush(){//videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}



  int main(){
    float rayon;
    point p;
    int retour1,retour2,retour3;

    do{
      printf("-------------------------------------------\n");
      printf("Saisir le rayon du cercle\n");
      retour1=scanf("%f",&rayon);
      //flush();
      //scanf("%*[^\n]%*1[\n]");

      printf("Saisir les coordonnées du point A : \n");
      printf("x: ");
      retour2=scanf("%f",&p.x);
      //flush();
      //scanf("%*[^\n]%*1[\n]");

      printf("y: ");
      retour3= scanf("%f",&p.y);
      //flush();
      //scanf("%*[^\n]%*1[\n]");
      printf("-------------------------------------------\n");

    }while (retour1==(0) || retour2==(0) || retour3==(0));


    if(pow(p.x,2) + pow(p.y,2) == pow(rayon,2)){
      printf("Le point A(%f,%f) est sur le cercle de rayon %f\n",p.x,p.y,rayon);

    }
    else if (pow(p.x,2)+pow(p.y,2)>pow(rayon,2))){
      printf("Le point A(%f,%f) n'appartient pas au cercle de rayon %f\n",p.x,p.y,rayon);
    }
    else {
      printf("Le point A(%f,%f) appartient au cercle de rayon %f\n",p.x,p.y,rayon);

    }


  return 0;
}
