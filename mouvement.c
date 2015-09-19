#include "mouvement.h"







int mouvementLigne(jeu *p, int ligne, int direction) {

	int i,j,l,fin_boucle,nb_deplacement; // Où i permet d'indiquer la case a évaluer, j est l'itérateur de la boucle décalant les cases a gauche et l permet d'arreter l'évaluation de la ligne
	nb_deplacement=0; // Le nombre de deplacement augementera que si une case est deplacée


	if(direction==1) {       // Decalage gauche

		i=(ligne*(p->n));
		l=i;
		fin_boucle=i+((p->n)-1);

		while (l<fin_boucle) { // i pointe au départ vers la premiere case de la ligne indiquée et la boucle s'arretera lorsque la ligne entiere sera parcouru (n valeurs)

			
			
			if (p->grille[i]==0) { // Si la case est vide


					for (j=i;j<fin_boucle;j++) {  // Boucle ayant pour but de décaler les cases a gauche

						p->grille[j]=p->grille[j+1];
						p->grille[j+1]=0;

					}

				l++;
				
				if (p->grille[i]!=0)
					nb_deplacement++;

			}
			
			
			else {  // Si la case contient un nombre
				
				if (p->grille[i+1]==0) {  // Rabat les cases a droite du nombre
					
					for(j=i+1;j<fin_boucle;j++) {
						
						p->grille[j]=p->grille[j+1];
						p->grille[j+1]=0;
						
					}
					
					l++;
					
					if (p->grille[i+1]!=0)
						nb_deplacement++;
				
				}
				
				else if (p->grille[i]==p->grille[i+1]) { // Si la case a droite de la case évaluée a la meme valeur alors les cases s'additionnent
			
					p->score += p->grille[i];
					p->grille[i]*=2;
					p->grille[i+1]=0;
					i++;
					l++;
					nb_deplacement++;					
	
				}
				
	
				else if (p->grille[i]!=p->grille[i+1]) {  // Si la case a droite de la case évaluée n'a pas la même valeur alors la case suivante sera évaluée
					i++;
					l++;
				}
			}	
		}
	}

	if (direction==-1) {          // Decalage droite

		i=((ligne*(p->n))+((p->n)-1)); // Pointe vers la derniere case de la ligne
		l=i;
		fin_boucle=(ligne*(p->n));


		while (l>fin_boucle) { // i pointe au départ vers la premiere case de la ligne indiquée et la boucle s'arretera lorsque la ligne entiere sera parcouru (n valeurs)

			if (p->grille[i]==0) { // Si la case est vide


					for (j=i;j>fin_boucle;j--) {  // Boucle ayant pour but de décaler les cases a droite

						p->grille[j]=p->grille[j-1];
						p->grille[j-1]=0;

					}

				l--;

				if (p->grille[i]!=0)
						nb_deplacement++;
				
			}

			else {
				
				if (p->grille[i-1]==0) {    // Si la case n'est pas vide


					for (j=i-1;j>fin_boucle;j--) {  // Rabat les cases a gauche du nombre

						p->grille[j]=p->grille[j-1];
						p->grille[j-1]=0;

					}
					
					l--;
				
					if (p->grille[i-1]!=0)
						nb_deplacement++;

				}

				else if (p->grille[i]==p->grille[i-1]) { // Si la case a gauche de la case évaluée a la meme valeur alors les cases s'additionnent
	
					p->score += p->grille[i];
					p->grille[i]*=2;
					p->grille[i-1]=0;
					i--;
					l--;
					nb_deplacement++;
	
				}
	
	
	
				else if (p->grille[i]!=p->grille[i-1]) {  // Si la case a gauche de la case évaluée n'a pas la même valeur alors la case suivante sera évaluée
					i--;
					l--;
				}
			}
		}


	}

// Si lors de l'évaluation de la ligne, toute les cases sont differentes (avec ((p->n)-1) évaluations)
		return nb_deplacement;



}




int mouvementLignes(jeu * p, int direction) {

	int j,nb_deplacement_case;  // Où j est un itérateur
	nb_deplacement_case=0;

	for (j=0;j<(p->n);j++) {

		nb_deplacement_case+=mouvementLigne(p,j,direction);

	}


		return nb_deplacement_case;


}




int mouvementColonne (jeu *p, int colonne, int direction) {

	int i,j,l,fin_boucle,nb_deplacement; // Où i permet d'indiquer la case a évaluer, j est l'itérateur de la boucle décalant les cases a gauche et l permet d'arreter l'évaluation de la ligne
	nb_deplacement=0; // Le nombre de deplacement augementera que si une case est deplacée


	if (direction==1) {       // Decalage haut

		i=colonne;
		l=i;
		fin_boucle=(((p->n)-1)*(p->n))+i; // La fin de la boucle se situe sur  : la premiere case de la derniere ligne + i


		while (l<fin_boucle) { // i pointe au départ vers la premiere case de la colonne indiquée et la boucle s'arretera lorsque la colonne entiere sera parcouru (n valeurs)

			if (p->grille[i]==0) {


					for (j=i;j<fin_boucle;j+=(p->n)) {  // Boucle ayant pour but de décaler les cases en haut et s'arrete a l'avant derniere case de la colonne

						p->grille[j]=p->grille[j+(p->n)];
						p->grille[j+(p->n)]=0;

					}

				l+=(p->n);

				
				if (p->grille[i]!=0)
						nb_deplacement++;

			}

			else {
				
				if (p->grille[i+(p->n)]==0 && i<(fin_boucle-(p->n))) {


					for (j=i+(p->n);j<fin_boucle;j+=(p->n)) {  // Boucle ayant pour but de décaler les cases en haut et s'arrete a l'avant derniere case de la colonne

						p->grille[j]=p->grille[j+(p->n)];
						p->grille[j+(p->n)]=0;

					}
					
					l+=(p->n);
					
					if (p->grille[i+(p->n)]!=0)
						nb_deplacement++;

					
				}			


				else if (p->grille[i]==p->grille[i+(p->n)]) { // Si la case en bas de la case évaluée a la meme valeur alors les cases s'additionnent
	
					
					p->score += p->grille[i];
					p->grille[i]*=2;
					p->grille[i+(p->n)]=0;
					i+=(p->n);
					l+=(p->n);
					nb_deplacement++;
	
				}
	
	
	
				else if (p->grille[i]!=p->grille[i+(p->n)]) {  // Si la case en bas de la case évaluée n'a pas la même valeur alors la case suivante sera évaluée
					i+=(p->n);
					l+=(p->n);
				}
			}	
		}
	}

	
	if(direction==-1) {       // Decalage bas

		i=((((p->n)-1)*(p->n))+colonne);
		l=i;
		fin_boucle= colonne;// La fin de la boucle se situe sur  : la premiere case de la derniere ligne + i


		while (l>fin_boucle) { // i pointe au départ vers la premiere case de la ligne indiquée et la boucle s'arretera lorsque la ligne entiere sera parcouru (n valeurs)

			if (p->grille[i]==0) {


					for (j=i;j>fin_boucle;j-=(p->n)) {  // Boucle ayant pour but de décaler les cases en bas et s'arrete a l'avant derniere case de la colonne

						p->grille[j]=p->grille[j-(p->n)];
						p->grille[j-(p->n)]=0;

					}

				l-=(p->n);
				
				if (p->grille[i]!=0)
						nb_deplacement++;
				
			}

			else {
				
				if (p->grille[i-(p->n)]==0 && i>(fin_boucle+(p->n))) {


					for (j=i-(p->n);j>fin_boucle;j-=(p->n)) {  // Boucle ayant pour but de décaler les cases en bas et s'arrete a l'avant derniere case de la colonne

						p->grille[j]=p->grille[j-(p->n)];
						p->grille[j-(p->n)]=0;

					}
					
					l-=(p->n);

					if (p->grille[i-(p->n)]!=0)
						nb_deplacement++;

					
				}				

				else if (p->grille[i]==p->grille[i-(p->n)]) { // Si la case au dessus de la case évaluée a la meme valeur alors les cases s'additionnent

					p->score += p->grille[i];	
					p->grille[i]*=2;
					p->grille[i-(p->n)]=0;
					i-=(p->n);
					l-=(p->n);
					nb_deplacement++;
	
				}
	
	
	
				else if (p->grille[i]!=p->grille[i-(p->n)]) {  // Si la case au dessus de la case évaluée n'a pas la même valeur alors la case suivante sera évaluée
					i-=(p->n);
					l-=(p->n);
	
				}
			}
		}	
	}


		// Si lors de l'évaluation de la ligne, toute les cases sont differentes (avec ((p->n)-1) évaluations)
		return nb_deplacement;


}





int mouvementColonnes(jeu * p, int direction) {

	int j,nb_deplacement_case;  // Où j est un itérateur
	nb_deplacement_case=0;

	for (j=0;j<(p->n);j++) {

		nb_deplacement_case+=mouvementColonne(p,j,direction);

	}

		return nb_deplacement_case;


}




int mouvement(jeu * p, int direction) {

	int nb_deplacement_case;
	nb_deplacement_case=0;

	if (direction==0)                                  // Mouvement vers le bas
		nb_deplacement_case+=mouvementColonnes(p,-1);

	else if (direction==1)	                           // Mouvement vers la droite
		nb_deplacement_case+=mouvementLignes(p,-1);

	else if (direction==2)                             // Mouvement vers le haut
		nb_deplacement_case+=mouvementColonnes(p,1);

	else if (direction==3)                             // Mouvement vers la gauche
		nb_deplacement_case+=mouvementLignes(p,1);



		return nb_deplacement_case;


}

