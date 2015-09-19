#include "finPartie.h"




int gagne (jeu * p) {

	int i;

	for(i=0;i<(p->n*p->n);i++) { // Boucle parcourant la grille

		if((p->grille[i])>=(p->valMax)) // S'arretant si la valeur de la grille est supérieur ou égale à la valeur maximal valMax
			return 1;
	}

	return 0;

}




int perdu (jeu * p) {

	int i,j,nb_case_vide,nb_case_diff,nb_iteration; 
	nb_case_vide=0;
	nb_case_diff=0;
	nb_iteration=0;

	for(i=0;i<(p->n);i++) { // Boucle parcourant la grille
		for(j=0;j<(p->n);j++) { // Boucle parcourant les lignes de la grille
			if(caseVide(p,i,j)==1)
				nb_case_vide++;
		}
	}

	for(i=0;i<(p->n);i++) {
		for (j=0;j<((p->n)-1);j++) {
			
			if ( p->grille[((i*(p->n))+j)]!=p->grille[((i*(p->n))+j)+1] ) // Si la case est differente de celle a coté d'elle alors le nombre de case différente s'incrémente
				nb_case_diff++;	
				nb_iteration++;
			
		}
	}
	
	for(i=0;i<((p->n)-1);i++) {
		for (j=0;j<(p->n);j++) {
			
			if ( p->grille[((i*(p->n))+j)]!= p->grille[((i*(p->n))+j)+(p->n)] ) // Si la case est differente de celle a coté d'elle alors le nombre de case différente s'incrémente
				nb_case_diff++;
				nb_iteration++;	
			
		}
	}

	if (nb_case_diff == nb_iteration && (nb_case_vide==0)) // Si il y a autant de cases differentes que de cases dans la partie et aucune case vide
		return 1;

	else
		return 0;
}





int finPartie (jeu * p) {

	if(gagne(p)==1 || perdu(p)==1) // Si une des deux fonctions renvoie un, c'est que la partie est soit perdue soit gagnée
		return 1;

	else
		return 0;
}
