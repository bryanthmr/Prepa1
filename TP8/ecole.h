#ifndef __ecole_H_
#define __ecole_H_
#define lignes 1000

typedef struct etudiant etudiant;
struct etudiant{
  int numEtudiant;
  char* nom;
  char* prenom;
  int meslignesotes[lignes];



};

typedef struct tabEtudiant tabEtudiant;
struct tabEtudiant{
  etudiant* tabEtudiant;
  int taille;

};

/* Auteur : Bryan
* Date :   05/04/22
* Résumé : vide le tampon
* Entrée(s) : rien
* Sortie(s) :  rien
*/

void flush();



/* Auteur : Bryan
* Date :   05/04/22
* Résumé : lis un CSV
* Entrée(s) : le contenu d'un fichier csv en pointeur de tableau de chaine
* Sortie(s) :  renvoie un tableau d'étudiant
*/
tabEtudiant* lireCSV(char* ficherlignesotes);

/* Auteur : Bryan*/
/* Date :   09/04/22 */
/* Résumé : Affiche les données d'un étudiant */
/* Entrée(s) : l'étudiant à afficher de type etudiant*/
/* Sortie(s) :  aucun */

void afficherEtudiant(etudiant e);


/* Auteur : Bryan*/
/* Date :   09/04/22*/
/* Résumé : Affiche les étudiants du tableau */
/* Entrée(s) : un tableau non vide de type tabEtudiant */
/* Sortie(s) :  rien */

void afficherTableauEtudiant(tabEtudiant tab);



/* Auteur : Bryan */
/* Date :   09/04/22*/
/* Résumé : Calcule la moyenne des 5 notes d'un étudiant */
/* Entrée(s) : un étudiant  avec 5 notes */
/* Sortie(s) :  la moyenne des notes de l'étudiant */

double calculerMoyenneParEtudiant(etudiant e);



/* Auteur : Bryan*/
/* Date :   09/04/22*/
/* Résumé : Cherche le meilleur étudiant en fonction des moyennes*/
/* Entrée(s) : un tableau d'étudiants */
/* Sortie(s) :  le meilleur étudiant de type étudiant */

etudiant meilleurEtudiant(tabEtudiant tab);


/* Auteur : Bryan*/
/* Date : 09/04/22  */
/* Résumé : Permet de faire saisir les données d'un étudiant par l'utilisateur */
/* Entrée(s) : un étudiant temporaire qui prendra les données saisis */
/* Sortie(s) :  rien  */

void saisirEtudiant(etudiant* a);

/* Auteur : Bryan */
/* Date :   09/04/22 */
/* Résumé : ajoute un étudiant dans un tableau d'étudiant */
/* Entrée(s) : un tableau d'étudiants et l'étudiant à ajouter dans le tableau */
/* Sortie(s) : rien */

void ajouterEtudiant(tabEtudiant* tab,etudiant* a);

/* Auteur :  Bryan*/
/* Date :   09/04/22*/
/* Résumé : Ecrit dans un fichier csv */
/* Entrée(s) : un tableau d'étudiants et une chaines de caractère contenant le nom du fichier csv */
/* Sortie(s) :  rien */

void ecrireCSV(tabEtudiant* tab,char* fichierlignesotes);

/* Auteur : Bryan */
/* Date :   09/04/22 */
/* Résumé : Suprrime un étudiant d'un tableau */
/* Entrée(s) : un tableau d'étudiants et un entier  */
/* Sortie(s) :  rien  */

void supprimerEtudiant(tabEtudiant* tab, int num);

/* Auteur : Bryan */
/* Date :   09/04/22*/
/* Résumé : Modifie un étudiant d'un tableau avec son numéro entré en paramètre */
/* Entrée(s) : tableau d'étudiant non vide et le numéro de l'étudiant a modifier */
/* Sortie(s) :  rien  */

void modifierEtudiant(tabEtudiant* tab, int num);











#endif
