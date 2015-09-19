#include "Val.h"


int indiceValide (jeu * p, int i, int j) {

	if ((i< p->n && i>=0) && (j< p->n && j>= 0)) //si i et j sont compris entre 0 et n la case éxiste
		return 1;

	else
		return 0;

}


int getVal(jeu * p, int ligne, int colonne) {

	if ( indiceValide(p,ligne,colonne) == 1 )  //Si la case demandée existe, retourne la valeur de celle-ci
		return p->grille[(ligne*(p->n))+colonne];
	else
		return (-1);

}


void setVal(jeu * p, int ligne, int colonne, int val) {

	if(getVal(p,ligne,colonne)!=(-1)) //Si la case existe elle prend la valeur val
		p->grille[(ligne*(p->n))+colonne] = val;


}



int caseVide (jeu * p, int i, int j) {

	/*
		Par définition, la fonction getVal renvoie -1 si une case existe dans la grille et comme lors de l'allocation
		dynamique cette même case est vide alors getVal est vrai si la case (i,j) existe et contient autre chose que 0

	*/

	if (getVal(p,i,j)==0) // Si la case qui existe a pour valeur un 0
		return 1;

	else if(!(getVal(p,i,j)!=0))
		return 0;

	else
		return 0;

}


void ajouteValAlea (jeu * p){

	int i,j,nb_case_vide1,nb_case_vide2;
	nb_case_vide1=0;

	for(i=0;i<(p->n);i++) { // Boucle parcourant la grille
		for(j=0;j<(p->n);j++) { // Boucle parcourant les lignes de la grille
			if(caseVide(p,i,j)==1)
				nb_case_vide1++;
		}
	}

	nb_case_vide2=nb_case_vide1;

	if (nb_case_vide2>0) { // Si il y a au moins une case vide la condition est respectée et une case vide sera remplacée par un 2 ou un 4
		do {
			int nb_alea = rand()%((p->n)*(p->n)); // Déclare un nombre aléatoire comprit entre 0 et (n*n) qui est la taille de la grille

			if (p->grille[nb_alea]==0){ // Si la case aléatoire choisie est vide alors la valaur de deux ou quatre y est ajoutée et le nb de case vide change
				p->grille[nb_alea]=(1+rand()%2)*2;
				nb_case_vide2--;
			}

		} while (nb_case_vide2==nb_case_vide1); // Tant que le nombre de case vide n'a pas varié, répeter la boucle
	}

}
