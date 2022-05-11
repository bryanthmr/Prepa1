#include "soccer.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
  joueur* MessInes;

  MessInes=malloc(sizeof(joueur)*1);
  /*
  MessInes->Poste=malloc(20*sizeof(char));
  MessInes->Poste="Tout";
  MessInes->Nom=malloc(20*sizeof(char));
  MessInes->Nom="Messi";
  MessInes->Prenom=malloc(20*sizeof(char));
  MessInes->Prenom="Ines";
  MessInes->Numero=1;
  MessInes->Age=100;
  MessInes->nbBut=100000;
  */
  //printf("Nom : %s \n Prénom: %s \n Poste: %s \n Numéro: %d \n Age: %d \n nbBut: %d \n",MessInes->Nom,MessInes->Prenom,MessInes->Poste,MessInes->Numero, MessInes->Age, MessInes->nbBut);





  equipe* OnlyFoot;

  OnlyFoot=malloc(sizeof(equipe)*1);
  /*
  OnlyFoot->Nom=malloc(sizeof(char)*20);
  OnlyFoot->Nom="OnlyFun";
  OnlyFoot->pays=malloc(sizeof(char)*20);
  OnlyFoot->pays="ClémentCentrie";
  OnlyFoot->chp=malloc(sizeof(char)*30);
  OnlyFoot->chp="OnlyFanDeFoot";
  OnlyFoot->classement=1;
  OnlyFoot->nbJoueur=89;
*/
  //printf("Nom : %s \n Pays: %s \n Championnat: %s \n Classement: %d \n NombreDeJoueur: %d\n",OnlyFoot->Nom,OnlyFoot->pays,OnlyFoot->chp,OnlyFoot->classement,OnlyFoot->nbJoueur);


  joueur* j1;
  j1=malloc(sizeof(joueur));

  joueur* j2;
  j2=malloc(sizeof(joueur));

  joueur* j3;
  j3=malloc(sizeof(joueur));

  creationJoueur(MessInes);
  creationJoueur(j1);
  creationJoueur(j2);
  creationJoueur(j3);
  afficherJoueur(MessInes);

  creationEquipe(OnlyFoot);


  ajouterJoueur(OnlyFoot,*MessInes);
  ajouterJoueur(OnlyFoot,*j1);
  ajouterJoueur(OnlyFoot,*j2);
  ajouterJoueur(OnlyFoot,*j3);

  afficherEquipe(OnlyFoot);






  free(OnlyFoot);
  free(MessInes);
  return 0;
}
