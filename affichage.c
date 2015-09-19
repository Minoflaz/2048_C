#include "affichage.h"
#include "terminalCouleur.h"
#include "jeu.h"

void espace_gauche (int nb_gauche){ //Permet de faire la partie gauche d'une case de 2048

	COULEUR_TERMINAL couleur[6]={BLUE,CYAN,MAGENTA,RED,YELLOW,GREEN};

	if ((int)(log10(nb_gauche))==0) // Si le nombre de la grille a un chiffre
		color_printf(WHITE,couleur[((int)log2(nb_gauche))%6],"   "); // Place 3 espaces a gauche du nombre

	else if ((int)(log10(nb_gauche))==1 || ((int)(log10(nb_gauche))==2)) // Si le nombre de la grille a deux ou trois chiffres
		color_printf(WHITE,couleur[((int)log2(nb_gauche))%6],"  ");

	else if ((int)(log10(nb_gauche))==3 || ((int)(log10(nb_gauche))==4)) // Si le nombre de la grille a quatre ou cinq chiffres
		color_printf(WHITE,couleur[((int)log2(nb_gauche))%6]," ");



}

void espace_droite (int nb_droite){

	COULEUR_TERMINAL couleur[6]={BLUE,CYAN,MAGENTA,RED,YELLOW,GREEN};

	if ((int)(log10(nb_droite))==0 || ((int)(log10(nb_droite))==1))  // Si le nombre de la grille a un chiffre
		color_printf(WHITE,couleur[((int)log2(nb_droite))%6],"   "); // Place 3 espaces a droite du nombre avec la meme couleur que celle du nombre

	else if ((int)(log10(nb_droite))==2 || ((int)(log10(nb_droite))==3)) // Si le nombre de la grille a deux ou trois chiffres
		color_printf(WHITE,couleur[((int)log2(nb_droite))%6],"  ");

	else if ((int)(log10(nb_droite))==4 || ((int)(log10(nb_droite))==5)) // Si le nombre de la grille a quatre ou cinq chiffres
		color_printf(WHITE,couleur[((int)log2(nb_droite))%6]," ");



}


void affichage (jeu *p) {


	COULEUR_TERMINAL couleur[6]={BLUE,CYAN,MAGENTA,RED,YELLOW,GREEN};

	int i,j,k,l,m,s,q,r;  // i,j et k seront les iterateurs utilisés dans les boucles suivantes
	s=0; // iterateur utilisé dans la boucle 1 pour atteindre le nombre de valeur de la grille, il permet de parcourir la grille et d'afficher une couleur differente pour chaque valeur
	k=0; // iterateur utilisé dans la boucle 2 pour atteindre le nombre de valeur de la grille, il permet de parcourir la grille et d'afficher une couleur differente pour chaque valeur
	q=0; // iterateur utilisé dans la boucle 3 pour atteindre le nombre de valeur de la grille, il permet de parcourir la grille et d'afficher une couleur differente pour chaque valeur
	
	
	for (m=0;m<(7*(p->n));m++) {		
		
		printf("*");	
	
	}
	
	printf("\n");
	printf(" %s",p->pseudo);
	printf(" ");
	color_printf(WHITE,BLACK,"%d\n",p->score);
	
	for (m=0;m<(7*(p->n));m++) {		
		
		printf("*");	
	
	}

	printf("\n");

	for(i=0;i<(p->n);i++) {  // Boucle principale s"éxecutant n fois

		for(l=0;l<(p->n);l++) { // Boucle  1 affichant des espaces au dessus des nombres formant le haut de la case

			if(p->grille[s]==0)
					color_printf(WHITE,BLACK,"       "); // Crée un espace dessus noir si la valeur de la grille est de 0 (valeur par défaut)

			else
				color_printf(WHITE,couleur[((int)log2(p->grille[s]))%6],"       ");
				s++;
		}
		printf("\n");

		for(j=0;j<(p->n);j++) {  // Boucle 2 permattant d'afficher une ligne de la grille en s'arretant a la n ème valeur

				if(p->grille[k]==0)
					color_printf(WHITE,BLACK,"   "); // Crée un epsace gauche noir si la valeur de la grille est de 0 (valeur par défaut)

				else
					espace_gauche(p->grille[k]); // Crée l'espace avant le nombre dans la case si la valeur de la grille n'est pas égale a 0

				if(p->grille[k]==0)
					color_printf(WHITE,BLACK,"."); // Met un point a la place d'un chiffre si la valeur de la grille est de 0 (valeur par défaut)

				else
					color_printf(WHITE,couleur[((int)log2(p->grille[k]))%6],"%d",p->grille[k]); // Affiche une case avec une des 6 couleurs du tableau couleur qui sera choisie en fonction de log2 de la valeur grille[k] si la valeur de la grille n'est pas égale a 0

				if(p->grille[k]==0)
					color_printf(WHITE,BLACK,"   "); // Crée un espace droit noir si la valeur de la grille est de 0 (valeur par défaut)

				else
					espace_droite(p->grille[k]); // Crée l'espace apres le nombre dans la case si la valeur de la grille n'est pas égale a 0
			k++;
		}
		printf("\n");

		for(r=0;r<(p->n);r++){ // Boucle 3 affichant des espaces au dessous des nombres formant le bas de la case

			if(p->grille[q]==0)
					color_printf(WHITE,BLACK,"       "); // Crée un epsace dessous noir si la valeur de la grille est de 0 (valeur par défaut)

			else
				color_printf(WHITE,couleur[((int)log2(p->grille[q]))%6],"       ");
				q++;


		}
		printf("\n");  // Saut de ligne en fin de ligne afin d'afficher une nouvelle ligne au bout de n valeurs affichées
	}

}



