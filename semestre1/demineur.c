 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 8
#define M 10


typedef struct caze caze;
struct caze{
  int contient; //vaut 0 si case vide , 1 si minée
  int visible; //0 si non visible , 1 si visible
  int marque; //0 si case non marquée , 1 si marquée
  int nbMineVois;//nb de mines aux voisinages



};

void decouvreRec(caze maGrille[N][N],int i,int j){
  if(maGrille[i][j].nbMineVois!=0){
    maGrille[i][j].visible=1;

  }
  else{
    if(i && j){
      decouvreRec(maGrille,i+1,j);
      decouvreRec(maGrille,i+1,j+1);
      decouvreRec(maGrille,i,j+1);
    }
    else if(i && !j && j!=N-1){

    }

  }



  }






void perdu(caze maGrille[N][N]){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      maGrille[i][j].visible=1;

    }
  }
  printf("Perdu !!\n");
}

void victoire(){
  printf("****************************\n");
  printf("**  Victoire, Bravo  !!!  **\n");
  printf("****************************\n");

}

void placeFanion(caze maGrille[N][N],int x,int y){
  if(maGrille[x][y].marque==0){
    maGrille[x][y].marque==1;
  }
  else{
    maGrille[x][y].marque=0;
  }
}

void nbMineVoisin(caze maGrille[N][N]){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(maGrille[i][j].contient){
        if(i==0 && j==0){
          maGrille[i][j+1].nbMineVois++;
          maGrille[i+1][j].nbMineVois++;
          maGrille[i+1][j+1].nbMineVois++;




        }
        else if(i==0 && j!=0 && j!=N-1){
          maGrille[i][j+1].nbMineVois++;
          maGrille[i+1][j].nbMineVois++;
          maGrille[i+1][j+1].nbMineVois++;
          maGrille[i][j-1].nbMineVois++;
          maGrille[i+1][j-1].nbMineVois++;

        }
        else if(i==0 && j==N-1){
          maGrille[i][j-1].nbMineVois++;
          maGrille[i+1][j].nbMineVois++;
          maGrille[i+1][j-1].nbMineVois++;

        }
        else if(j==0 && i!=0 && i!=N-1){
          maGrille[i-1][j].nbMineVois++;
          maGrille[i-1][j+1].nbMineVois++;
          maGrille[i][j+1].nbMineVois++;
          maGrille[i+1][j].nbMineVois++;
          maGrille[i+1][j+1].nbMineVois++;
        }
        else if(j==N-1 && i!=0 && i!=N-1){
          maGrille[i-1][j].nbMineVois++;
          maGrille[i-1][j-1].nbMineVois++;
          maGrille[i][j-1].nbMineVois++;
          maGrille[i+1][j].nbMineVois++;
          maGrille[i+1][j-1].nbMineVois++;
        }

        else if(i==N-1 && j==0){
          maGrille[i-1][j].nbMineVois++;
          maGrille[i-1][j+1].nbMineVois++;
          maGrille[i][j+1].nbMineVois++;

        }

        else if(i==N-1 && j==N-1){
          maGrille[i-1][j].nbMineVois++;
          maGrille[i-1][j+1].nbMineVois++;
          maGrille[i][j+1].nbMineVois++;

        }
        else if(i==N-1 && j!=0 && j!=N-1){
          maGrille[i][j-1].nbMineVois++;
          maGrille[i-1][j-1].nbMineVois++;
          maGrille[i-1][j].nbMineVois++;
          maGrille[i-1][j+1].nbMineVois++;
          maGrille[i][j+1].nbMineVois++;



        }
        else{
          maGrille[i][j-1].nbMineVois++;
          maGrille[i-1][j-1].nbMineVois++;
          maGrille[i-1][j].nbMineVois++;
          maGrille[i-1][j+1].nbMineVois++;
          maGrille[i][j+1].nbMineVois++;
          maGrille[i+1][j+1].nbMineVois++;
          maGrille[i+1][j].nbMineVois++;
          maGrille[i+1][j-1].nbMineVois++;


        }
      }

    }
  }



}


void placerMines(caze maGrille[N][N]){
  int x,i,y;
  x=0;
  y=0;
  srand(time(NULL));

  for(i=0;i<M;i++){
    x=rand()%N;
    y=rand()%N;

    if(!maGrille[x][y].contient){
      maGrille[x][y].contient=1;
    }


  }




}

void init(caze maGrille[N][N]){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      maGrille[i][j].contient=0;
      maGrille[i][j].visible=0;
      maGrille[i][j].marque=0;
      maGrille[i][j].nbMineVois=0;

    }
  }
  placerMines(maGrille);
  nbMineVoisin(maGrille);
}


/*date:11/01/22
*auteur: Bryan
*Pre condition: une grille initialisé
*Post condition: aucune
*affiche une grille en fonction du tableau en entrée
*/

void afficherGrille(caze maGrille[N][N]){
  int i,j,e;



  for(i=0;i<N;i++){ //crée chaque lignes
    for(j=0;j<N;j++){//crée chaque barre horrizontale
      printf("+---");
    }
    printf("+");//ajoute un + à la fin
    printf("\n");
    for(e=0;e<N;e++){// crée chaque barre verticale
      printf("|");
      switch(maGrille[i][e].visible){
        case 1:
          if(maGrille[i][e].contient){
            printf(" ◎ ");
          }
          if(!(maGrille[i][e].contient) && (maGrille[i][e].nbMineVois==0)){
            printf("   ");
          }

          if((maGrille[i][e].contient) && maGrille[i][e].nbMineVois!=0){
            printf(" %d ",maGrille[i][e].nbMineVois);
          }

          break;
        default:
          if(!(maGrille[i][e].marque)){
            printf(" ■ ");
        }
          else{
            printf(" 🚩");

        }
          break;

      }



    }
    printf("|");//ajoute la dernière barre verticale
    printf("\n");
  }

  for(j=0;j<N;j++){ //ajoute la dernière barre horrizontale
    printf("+---");

 }
  printf("+\n");



}









int main(){

  caze maGrille[N][N];
  init(maGrille);





  decouvreRec(maGrille,7,0);
  afficherGrille(maGrille);

  return 0;
}
