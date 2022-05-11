#include "fonction.h"


void flush(){
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}
/////////////////////////////////////////////////////////

int** allouer(int lignes,int colonnes){
  int** ppint_matrice;
  ppint_matrice=malloc(lignes*sizeof(int*));

  for(int i=0;i<lignes;i++){
    ppint_matrice[i]=malloc(colonnes*sizeof(int));
  }

  return ppint_matrice;

}

////////////////////////////////////////////////////////

void initialiser(int** ppint_matrice,int lignes,int colonnes){
  for(int i=0;i<lignes;i++){
    for(int j=0;j<colonnes;j++){
      ppint_matrice[i][j]=0;

    }
  }
}
/////////////////////////////////////////////////////////

void afficher(int** ppint_matrice,int lignes,int colonnes){

  for(int i=0;i<lignes;i++){
    for(int j=0;j<colonnes;j++){
      printf("+---");

    }
    printf("+\n");

    for(int e=0;e<colonnes;e++){
      switch (ppint_matrice[i][e]){
        case 0:
        printf("|   ");
        break;

        case 1:
        printf("| □ ");
      }

    }
    printf("|\n");
 }

 for(int k=0;k<colonnes;k++){
   printf("+---");
 }

 printf("+");


}

//////////////////////////////////////////////////////
void CalculVoisin(int** ppint_matrice,int lignes,int colonnes,int typeMatrice){

  int** matriceTmp;
  matriceTmp=allouer(lignes,colonnes);
  initialiser(matriceTmp,lignes,colonnes);



  int nbVois=0;
  if(!(typeMatrice)){
    for(int i=0;i<lignes;i++){
      for(int j=0;j<colonnes;j++){
        if(!i && !j){ //angle nord-ouest
          nbVois=
          ppint_matrice[1][0]
          +ppint_matrice[1][1]
          +ppint_matrice[0][1];

        }
        else if(!i && j!=0 && j!=colonnes-1){//nord centre
          nbVois=
          ppint_matrice[i][j+1]
          +ppint_matrice[i+1][j+1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i][j-1]
          +ppint_matrice[i+1][j-1];


        }
        else if(!i && j==colonnes-1){ //angle nord est
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i+1][j-1]
          +ppint_matrice[i+1][j];



        }
        else if(i!=0 && i!=lignes-1 && !j){ //cases dans la face ouest
          nbVois=
          ppint_matrice[i][j+1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i+1][j+1];




        }
        else if(i!=0 && i!=lignes-1 && j==colonnes-1){//cases dans la face est
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j-1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i+1][j-1];
        }
        else if(i==lignes-1 && !j){//angle sud ouest
          nbVois=
          ppint_matrice[i][j+1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j+1];

        }
        else if(i==lignes-1 && j!=0 && j!=colonnes-1){//cases dans la face sud
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j-1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i][j+1];

        }
        else if(i==lignes-1 && j==colonnes-1){//angle sud est
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j-1]
          +ppint_matrice[i-1][j];

        }
        else{ //le reste dans le centre
          nbVois=
          ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i][j+1]
          +ppint_matrice[i+1][j+1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i+1][j-1]
          +ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j-1];


        }

        if(ppint_matrice[i][j]){ // cellule déjà existante
          if(nbVois>=4){//surpopulation
            matriceTmp[i][j]=0;
          }
          else if(nbVois<=1){//isolement
            matriceTmp[i][j]=0;
          }
          else{
            matriceTmp[i][j]=1; //survie
          }
        }
        else{//cellule non existante
          if(nbVois==3){
            matriceTmp[i][j]=1;//naissance
          }
        }






    }


  }
  for(int i=0;i<lignes;i++){ //copie de la matrice temporaire dans la ppint_matrice
    for(int j=0;j<colonnes;j++){
      ppint_matrice[i][j]=matriceTmp[i][j];
    }
  }


}
  else{
    for(int i=0;i<lignes;i++){
      for(int j=0;j<colonnes;j++){
        if(!i && !j){ //angle nord-ouest
          nbVois=
          ppint_matrice[1][0]
          +ppint_matrice[1][1]
          +ppint_matrice[0][1]
          +ppint_matrice[lignes-1][colonnes-1]
          +ppint_matrice[i][colonnes-1]
          +ppint_matrice[i+1][colonnes-1]
          +ppint_matrice[lignes-1][j]
          +ppint_matrice[lignes-1][j+1];

        }
        else if(!i && j!=0 && j!=colonnes-1){//nord centre
          nbVois=
          ppint_matrice[i][j+1]
          +ppint_matrice[i+1][j+1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i][j-1]
          +ppint_matrice[i+1][j-1];


        }
        else if(!i && j==colonnes-1){ //angle nord est
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i+1][j-1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[lignes-1][j-1]
          +ppint_matrice[lignes-1][j]
          +ppint_matrice[lignes-1][0]
          +ppint_matrice[i][0]
          +ppint_matrice[i+1][0];



        }
        else if(i!=0 && i!=lignes-1 && !j){ //cases dans la face ouest
          nbVois=
          ppint_matrice[i][j+1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i+1][j+1];




        }
        else if(i!=0 && i!=lignes-1 && j==colonnes-1){//cases dans la face est
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j-1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i+1][j-1];
        }
        else if(i==lignes-1 && !j){//angle sud ouest
          nbVois=
          ppint_matrice[i][j+1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i-1][colonnes-1]
          +ppint_matrice[i][colonnes-1]
          +ppint_matrice[0][colonnes-1]
          +ppint_matrice[0][j]
          +ppint_matrice[0][j+1];

        }
        else if(i==lignes-1 && j!=0 && j!=colonnes-1){//cases dans la face sud
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j-1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i][j+1];

        }
        else if(i==lignes-1 && j==colonnes-1){//angle sud est
          nbVois=
          ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j-1]
          +ppint_matrice[i-1][j]
          +ppint_matrice[i-1][0]
          +ppint_matrice[i][0]
          +ppint_matrice[0][0]
          +ppint_matrice[0][j]
          +ppint_matrice[0][j-1];

        }
        else{ //le reste dans le centre
          nbVois=
          ppint_matrice[i-1][j]
          +ppint_matrice[i-1][j+1]
          +ppint_matrice[i][j+1]
          +ppint_matrice[i+1][j+1]
          +ppint_matrice[i+1][j]
          +ppint_matrice[i+1][j-1]
          +ppint_matrice[i][j-1]
          +ppint_matrice[i-1][j-1];


        }

        if(ppint_matrice[i][j]){ // cellule déjà existante
          if(nbVois>=4){//surpopulation
            matriceTmp[i][j]=0;
          }
          else if(nbVois<=1){//isolement
            matriceTmp[i][j]=0;
          }
          else{
            matriceTmp[i][j]=1; //survie
          }
        }
        else{//cellule non existante
          if(nbVois==3){
            matriceTmp[i][j]=1;//naissance
          }
        }






    }


  }
  for(int i=0;i<lignes;i++){ //copie de la matrice temporaire dans la ppint_matrice
    for(int j=0;j<colonnes;j++){
      ppint_matrice[i][j]=matriceTmp[i][j];
    }
  }


}




  freeMatrice(matriceTmp,lignes,colonnes);

}





////////////////////////////////////////////////////////
void freeMatrice(int** matrice,int lignes,int colonnes){
  for(int i=0;i<lignes;i++){
    free(matrice[i]);
  }
  free(matrice);
}
