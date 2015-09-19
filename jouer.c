#include "jouer.h"


void jouer(jeu *p) {

	int fin,mvmt,debut;
	fin=0;
	debut=0;
	Key saisie;
	
	while(debut!=3) {  // Menu de départ
		
		debut=menu(p);
		
		if(debut==2) // Au cas ou la personne quitte des le debut
			exit(0);
		
	}

	ajouteValAlea (p);  // Commence la partie avec un 2 ou un 4 sur la grille
	debutTerminalSansR();

	while(fin!=2 && finPartie(p)==0) {
		
		affichage(p);
		saisie = lectureFleche();

		if (saisie==KEY_DOWN) { // Si le joueur veut déplacer en bas
			mvmt=mouvement(p,0);
			if (mvmt>0)   // Si il y a eu un deplacement alors on ajoute un 2 ou un 4
				ajouteValAlea (p);
			clear_terminal();
		}

		else if (saisie==KEY_RIGHT) {  // Si le joueur veut déplacer à droite
			mvmt=mouvement(p,1);
			if (mvmt>0)   // Si il y a eu un deplacement alors on ajoute un 2 ou un 4
				ajouteValAlea (p);
			clear_terminal();
		}

		else if (saisie==KEY_UP) { // Si le joueur veut déplacer en haut
			mvmt=mouvement(p,2);
			if (mvmt>0)   // Si il y a eu un deplacement alors on ajoute un 2 ou un 4
				ajouteValAlea (p);
			clear_terminal();
		}

		else if (saisie==KEY_LEFT) {  // Si le joueur veut déplacer à gauche
			mvmt=mouvement(p,3);

			if (mvmt>0)   // Si il y a eu un deplacement alors on ajoute un 2 ou un 4
				ajouteValAlea (p);
			clear_terminal();
		}

		else if (saisie==KEY_ESCAPE) {
			fin=menu(p); //fin prendra la valeur retournée par menu qui vaudra donc 2 si lutilisateur veut quitter la partie
		}
	}

	finTerminalSansR();
	clear_terminal();
	
	if (gagne(p)==1){  // Si la personne gagne en atteignant le score voulu
		affichage(p);
		printf("\n     ");
		color_printf(BLACK,WHITE,"C'EST GAGNE WE DID IT HOURRA, VOUS GAGNEZ UNE PATATE ! \n");
	}

	
	else {  // Si la personne perd lorsqu'elle n'a plus de case disponible et aucun mouvement faisable
		affichage(p);
		printf("\n     ");
		color_printf(BLACK,WHITE,"GAME OVER \n");
	}
		
	if (fin==2) {  // Si l'utilisateur quitte volontairement a l'aide du menu
		clear_terminal();
		printf("     ");
		printf("Vous avez volontairement quitté la partie !\n");
		}
		

}






