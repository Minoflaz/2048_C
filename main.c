#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <termios.h>
#include "jeu.h"
#include "initialiseJeu.h"
#include "terminalCouleur.h"
#include "saisieM.h"
#include "affichage.h"
#include "Val.h"
#include "finPartie.h"
#include "mouvement.h"
#include "menu.h"
	


int main() {

srand(time(NULL));

jeu partie;
int n,valMax,score;
char pseudo[10];
score = 0;

clear_terminal();
printf("Saisir n, de la grille de taille n*n :\n");
scanf("%d",&n);
printf("Saisir la valeur a atteindre :\n");
scanf("%d",&valMax);
printf("Saisir Votre pseudo (9 char max) :\n");
scanf("%s",pseudo);
initialiseJeu(&partie,n,valMax,score,pseudo); 	
clear_terminal();
jouer(&partie);
libereMemoire(&partie);




return 0;
}









