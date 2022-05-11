#include <stdio.h>
#include <stdlib.h>
#define N 3

void flush(){  //videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));
}




void afficherGrille(int maGrille[N][N]){
  int i,e;

  printf("╔════╦════╦════╗\n"); // dessus du tableau
  printf("║");

  for(i=0;i<N;i++){ //boucle pour passer d'une ligne à l'autre
    if(i!=0){
      printf("╠════╬════╬════╣\n"); // milieu du tableau
      printf("║");


    }


    for(e=0;e<N;e++){ //lecture de maGrille pour mettre O si maGrille[i][e]==1 ; X si maGrille[i][e]==2 ; et un vide si il est égal à 0

      if(maGrille[2][2]==9){
        switch(maGrille[i][e]){
          case 1 :
            printf(" 1 ");
            break;
          case 2 :
            printf(" 2 ");
            break;

          case 3 :
            printf(" 3 ");
            break;

          case 4 :
            printf(" 4 ");
            break;
          case 5 :
            printf(" 5 ");
            break;

          case 6 :
            printf(" 6 ");
            break;

          case 7 :
            printf(" 7 ");
            break;
          case 8 :
            printf(" 8 ");
            break;

          case 9 :
            printf(" 9 ");
            break;
          default :
            printf("   ");
            break;

        }


      }
      else{
        switch(maGrille[i][e]){
          case 1 :
            printf(" O ");
            break;
          case 2 :
            printf(" X ");
            break;
          default :
            printf("   ");
            break;

        }
      }




      if(e!=N-1){ //barre du milieu sauf la dernière qui est spéciale
        printf(" ║");

      }





    }


    printf(" ║");//dernière barre horrizontale
    printf("\n");


  }
  printf("╚════╩════╩════╝\n");//barre du bas





}


int victoire(int maGrille[N][N]){
  int tmp,i,a,j;
  tmp=0;
  //lignes
  for(i=0;i<N;i++){
    if(maGrille[i][0]==maGrille[i][1] && maGrille[i][0]==maGrille[i][2]){ // vérification si 1er = 2ème = 3ème élément de i lignes
      if(maGrille[i][0]==1){ //si le 1er de la ligne appartient au joueur 1 alors la ligne entière lui appartient et il a gagné
        printf("Le joueur 1 a remporté la victoire FÉLICITATIONS !\n");
        tmp=1;//valeur de fin du jeu
      }
      else if(maGrille[i][0]==2){//si le 1er de la ligne appartient au joueur 2 alors la ligne entière lui appartient et il a gagné
        printf("Le joueur 2 a remporté la victoire FÉLICITATIONS !\n");
        tmp=1;
      }
      else{
        tmp=0;// valeur pour dire qu'il n'y pas de victoire
      }
    }
  }

  //colonnes
  for(i=0;i<N;i++){
    if(maGrille[0][i]==maGrille[1][i] && maGrille[0][i]==maGrille[2][i]){ // pareil mais pour les colonnes
      if(maGrille[0][i]==1){
        printf("Le joueur 1 a remporté la victoire FÉLICITATIONS !\n");
        tmp=1;
      }
      else if(maGrille[0][i]==2){
        printf("Le joueur 2 a remporté la victoire FÉLICITATIONS !\n");
        tmp=1;
      }
      else{
        tmp=0;
      }
    }
  }

  //diagonale gauche
  if(maGrille[0][0]==maGrille[1][1] && maGrille[0][0]==maGrille[2][2]){
    if(maGrille[0][0]==1){
      printf("Le joueur 1 a remporté la victoire FÉLICITATIONS !\n");
      tmp=1;
    }
    else if(maGrille[0][0]==2){
      printf("Le joueur 2 a remporté la victoire FÉLICITATIONS !\n");
      tmp=1;
    }
    else{
      tmp=0;
    }
  }

  //diagonale droite
  if(maGrille[0][2]==maGrille[1][1] && maGrille[0][2]==maGrille[2][0]){
    if(maGrille[0][2]==1){
      printf("Le joueur 1 a remporté la victoire FÉLICITATIONS !\n");
      tmp=1;
    }
    else if(maGrille[0][2]==2){
      printf("Le joueur 2 a remporté la victoire FÉLICITATIONS !\n");
      tmp=1;
    }
    else{
      tmp=0;
    }
  }

//match nul
  a=0; //valeur permettant de savoir si toutes la cases sont remplies
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(maGrille[i][j]!=0){ // on parcours tout le tableau et si la case n'est pas vide on ajoute 1 à a
        a++;
      }
    }
  }
  if(a==9){// si a vaut 9 c'est que toutes les cases sont remplies
    printf("Match nul , bien joué à tous les deux !\n");
    tmp=1;
  }

  return tmp; // retourne 1 si la partie est terminé , 0 si il n'y a pas de victoire





}







void joue(int maGrille[N][N]){
  int i,j,a;
  a=1;


  while (!(victoire(maGrille))){ //vérifie si il y a une victoire sinon continue la boucle

    if(a==1){ //tour du joueur 1
      printf("Joueur 1 (O) c'est à toi de jouer !\n");
      do{
        printf("Entrez le numéro de la case: ");
        scanf("%d",&i);
        flush();
        printf("\n");
        printf("------------------------\n");

        switch(i){
          case 1 :
            i=0;
            j=0;
            break;
          case 2 :
            i=0;
            j=1;
            break;

          case 3 :
            i=0;
            j=2;
            break;

          case 4 :
            i=1;
            j=0;
            break;
          case 5 :
            i=1;
            j=1;
            break;

          case 6 :
            i=1;
            j=2;
            break;

          case 7 :
            i=2;
            j=0;
            break;
          case 8 :
            i=2;
            j=1;
            break;

          case 9 :
            i=2;
            j=2;
            break;
          default :
            i=100; //relancer la boucle en mettant une valeur fausse
            break;
        }

      }while((i<0)||(i>2)|| (j<0) ||(j>2) || maGrille[i][j]!=0); //vérifie si la ligne et la colonne sont entre 0 et 2 et si la case est vide
      a=0; //passage au tour 2
      maGrille[i][j]=1; //on met un O dans la case si la case vaut 1
      afficherGrille(maGrille);// on actualise la grille



  }


  else{// identique à joueur 1 sauf que c'est pour joueur 2
    printf("Joueur 2 (X) c'est à toi de jouer !\n");
    do{
      printf("Entrez le numéro de la case: ");
      scanf("%d",&i);
      flush();
      printf("\n");
      printf("------------------------\n");

      switch(i){
        case 1 :
          i=0;
          j=0;
          break;
        case 2 :
          i=0;
          j=1;
          break;

        case 3 :
          i=0;
          j=2;
          break;

        case 4 :
          i=1;
          j=0;
          break;
        case 5 :
          i=1;
          j=1;
          break;

        case 6 :
          i=1;
          j=2;
          break;

        case 7 :
          i=2;
          j=0;
          break;
        case 8 :
          i=2;
          j=1;
          break;

        case 9 :
          i=2;
          j=2;
          break;
        default :
          i=100; //relancer la boucle en mettant une valeur fausse
          break;
      }





    }while((i<0)||(i>2)|| (j<0) ||(j>2) || maGrille[i][j]!=0);
    a=1;
    maGrille[i][j]=2;
    afficherGrille(maGrille);
}

  }

}






int main(){

  int maGrille[N][N]={{0,0,0},{0,0,0},{0,0,0}};
  int grilleExemple[N][N]={{1,2,3},{4,5,6},{7,8,9}}; //création du tableau



  afficherGrille(grilleExemple); //affiche la grille vide
  joue(maGrille);//fonction principale



  return 0;



}
