#include "initialiseJeu.h"




void initialiseJeu (jeu *p, int n, int valMax,int score, char pseudo[10]) {

	p->n = n;    //La taille de la grille - (*p).n - est égal a n
	p->valMax = valMax; //La valeur - (*p).valMax - est égale a valMax
	p->score  = score;
	p->grille = (int*) calloc((p->n)*(p->n), sizeof(int)); //grille de la structure jeu pointe vers un tableau alloué dynamiquement avec (n*n) cases
	strcpy(p->pseudo,pseudo);

		if (p->grille == NULL) //Si la mémoire a allouer n'est pas suffisante
			printf("Le tableau n'a pas pu être alloué\n");

}
