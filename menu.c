#include "menu.h"
#include "saisieM.h"
#include "terminalCouleur.h"
#include "affichage.h"


int menu_jouer() {
	
	clear_terminal();
	
	printf("****************************\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"   ");
		color_printf(WHITE,MAGENTA,"2048");
		color_printf(WHITE,MAGENTA,"   ");
	printf("        *\n");
	
	printf("*        ");
	color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("          ");
		color_printf(BLACK,WHITE,"JOUER");
	printf("           *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("        ");
	printf("SAUVEGARDER");
	printf("       *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
	printf("CHARGER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
	printf("QUITTER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("****************************\n");
	
	return 1;
}

int menu_sauvegarder() {
	
	clear_terminal();
	
	printf("****************************\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"   ");
		color_printf(WHITE,MAGENTA,"2048");
		color_printf(WHITE,MAGENTA,"   ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("          ");
	printf("JOUER");
	printf("           *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("        ");
		color_printf(BLACK,WHITE,"SAUVEGARDER");
	printf("       *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
	printf("CHARGER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
	printf("QUITTER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("****************************\n");
	
	return 2;
}

int menu_charger() {
	
	clear_terminal();
	
	printf("****************************\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"   ");
		color_printf(WHITE,MAGENTA,"2048");
		color_printf(WHITE,MAGENTA,"   ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("          ");
	printf("JOUER");
	printf("           *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("        ");
	printf("SAUVEGARDER");
	printf("       *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
		color_printf(BLACK,WHITE,"CHARGER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
	printf("QUITTER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("****************************\n");
	
	return 3;
}



int menu_quitter() {
	
	clear_terminal();
	
	printf("****************************\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"   ");
		color_printf(WHITE,MAGENTA,"2048");
		color_printf(WHITE,MAGENTA,"   ");
	printf("        *\n");
	
	printf("*        ");
		color_printf(WHITE,MAGENTA,"          ");
	printf("        *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("          ");
	printf("JOUER");
	printf("           *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("        ");
	printf("SAUVEGARDER");
	printf("       *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
	printf("CHARGER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("*");
	printf("         ");
		color_printf(BLACK,WHITE,"QUITTER");
	printf("          *\n");
	
	printf("*");
	printf("                          *\n");
	printf("*");
	printf("                          *\n");
	
	printf("****************************\n");
	
	return 4;
}


int sauvegarde (jeu *p) {
	
	int i;
	FILE* save = NULL;
	save = fopen ("sauvegarde.txt","w+");
	
	if (save==NULL)  // Permet de vérifier si le pointeur ne pointe pas sur rien
		return 0;
	
	else {
		
		fprintf(save,"%d\n\n",p->n);
		fprintf(save,"%d\n\n",p->valMax);
		fprintf(save,"%s\n\n",p->pseudo);
		fprintf(save,"%d\n\n",p->score);
		
		for(i=0;i<((p->n)*(p->n));i++) {
			
			fprintf(save,"%d ;",p->grille[i]);
			
		}
	return 1;	
		
	}
	fclose(save);
}




int chargement (jeu *p) {


	int i,n,valMax,score;	
	char pseudo[10];
	
	FILE* save=NULL;
	save = fopen("sauvegarde.txt","r");

	if (save==NULL)
		return 0;

	else {

		fscanf(save,"%d\n\n",&n);
		fscanf(save,"%d\n\n",&valMax);
		fscanf(save,"%s\n\n",pseudo);
		fscanf(save,"%d\n\n",&score);
			
		initialiseJeu(p,n,valMax,score,pseudo);	

		for(i=0;i<(n*n);i++) {
			
			fscanf(save,"%d ;",&p->grille[i]);
		
		}
	}	
	
	fclose(save);
	return 1;	
}



int menu (jeu *p) {
	
	clear_terminal();
	Key saisie;
	int position,fin;
	fin=0;
	position=menu_jouer();
	
	debutTerminalSansR();
	
	while (fin==1 || fin==0) {
	
		saisie = lectureFleche(); // Lecture de ce que l'utilisateur entre comme deplacement
		
		if (position==1) {
		 	
		 	if (saisie==KEY_DOWN){
		 		clear_terminal();
				position=menu_sauvegarder(); 
		 	}
			
			else if (saisie==NO_KEY){
				clear_terminal();	
				fin=3;
			}
			
			else if (saisie==KEY_ESCAPE){
				clear_terminal();	// reprends la partie en cours
				fin=3;
			}
				
		 }
		 
		 else if (position==2) {
		 	
		 	if (saisie==KEY_DOWN){
		 		clear_terminal();
				position=menu_charger();
		 	}
		 	
		 	else if (saisie==KEY_UP){
		 		clear_terminal();
				position=menu_jouer();
		 	}
			
			else if (saisie==NO_KEY){
				clear_terminal();	
				sauvegarde(p); 
				fin=3;
			}
				
			else if (saisie==KEY_ESCAPE){
				clear_terminal();	  // reprends la partie en cours
				fin=3;
			}	
		}
		
		 else if (position==3) {
		 	
		 	if (saisie==KEY_DOWN){
		 		clear_terminal();
				position=menu_quitter();
		 	}
		 	
		 	else if (saisie==KEY_UP){
		 		clear_terminal();
				position=menu_sauvegarder();
		 	}
			
			else if (saisie==NO_KEY){
				clear_terminal();	
				chargement(p);
				fin=3;
			}
			
			else if (saisie==KEY_ESCAPE){ // reprends la partie en cours
				clear_terminal();	 
				fin=3;
			}
				
		}
		
		 else if (position==4) {
		 	
		 	if (saisie==KEY_UP){
		 		clear_terminal();
				position=menu_charger();
		 	}
			
			else if (saisie==NO_KEY){
				clear_terminal();	  // Arrive si lutilisateur veut quitter la partie
				fin=2;
			}
				
			else if (saisie==KEY_ESCAPE){
				clear_terminal();	// reprends la partie en cours
				fin=3;
			}	
		}
	}
	
	finTerminalSansR();
	return fin;
}

