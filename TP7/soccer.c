#include "soccer.h"

void flush(){  //videur de tampon
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));

}

void creationJoueur(joueur* j){

  j->Nom=malloc(1*sizeof(char));
  j->Prenom=malloc(1*sizeof(char));
  j->Poste=malloc(1*sizeof(char));



  printf("Entrez le nom du joueur: ");
  scanf("%s",j->Nom);
  printf("\n");
  flush();

  printf("Entrez le Prénom du joueur: ");
  scanf("%s",j->Prenom);
  printf("\n");
  flush();

  printf("Entrez le poste du joueur: ");
  scanf("%s",j->Poste );
  printf("\n");
  flush();

  printf("Entrez le Numéro du joueur: ");
  scanf("%d",&j->Numero );
  printf("\n");
  flush();

  printf("Entrez l'age du joueur: ");
  scanf("%d",&j->Age);
  printf("\n");
  flush();

  printf("Entrez le nombre de but d'un joueur: ");
  scanf("%d",&j->nbBut );
  printf("\n");
  flush();
}

void afficherJoueur(joueur* j){

  printf(
"Nom : %s \n"
"Prénom: %s \n"
"Poste:  %s \n"
"Numéro: %d \n"
"Age:    %d \n"
"nombre de But:  %d \n",
j->Nom,
j->Prenom,
j->Poste,
j->Numero,
j->Age,
j->nbBut
);


}


void creationEquipe(equipe* e){
  e->Nom=malloc(1*sizeof(char));
  e->pays=malloc(1*sizeof(char));
  e->chp=malloc(1*sizeof(char));
  e->compo=malloc(1*sizeof(joueur));




  printf("Entrez le nom de l'équipe: ");
  scanf("%s",e->Nom);
  printf("\n");
  flush();

  printf("Entrez le pays de l'équipe: ");
  scanf("%s",e->pays);
  printf("\n");
  flush();

  printf("Entrez le Championnat: ");
  scanf("(%s)",e->chp);
  printf("\n");
  flush();

  printf("Entrez le classement de l'équipe: ");
  scanf("%d",&e->classement);
  printf("\n");
  flush();


  e->nbJoueur=1;




}


void afficherEquipe(equipe* e){

  printf(
"Nom : %s \n"
"pays: %s \n"
"Championnat:  %s \n"
"Classement: %d \n"
"Nombre de joueur:    %d \n",
e->Nom,
e->pays,
e->chp,
e->classement,
e->nbJoueur

);

for(int i=0;i<=e->nbJoueur;i++){
  afficherJoueur(&e->compo[i]);
  }
}



void ajouterJoueur(equipe* e, joueur j){
  e->nbJoueur++;
  e->compo=realloc(e->compo,e->nbJoueur*sizeof(joueur));
  e->compo[e->nbJoueur-1]=j;



}
