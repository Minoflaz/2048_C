#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <termios.h>
#include "jeu.h"



/*
 * Effectue les mouvements (à gauche ou à droite) des cases d’une ligne.
 * Renvoie 1 si l’on a deplacé au moins une case, 0 sinon.
 *
 * \param p : pointeur sur un jeu
 * \param ligne : indice de ligne
 * \param direction : 1 pour déplacement vers la gauche et -1 pour un déplacement vers la droite
 */

int mouvementLigne(jeu *p, int ligne, int direction);



/*!
 * Effectue les mouvements (à gauche ou à droite) des cases sur toutes les lignes.
 * Renvoie 1 si l’on a deplacé au moins une case, 0 sinon.
 *
 * \param p : pointeur sur un jeu
 * \param direction : 1 pour déplacement vers la gauche et -1 pour un déplacement vers la droite
 */

int mouvementLignes(jeu * p, int direction);




/*
 * Effectue les mouvements (vers le haut ou vers le bas) des cases d’une colonne.
 * Renvoie 1 si l’on a deplacé au moins une case, 0 sinon.
 *
 * \param p : pointeur sur un jeu
 * \param colonne : indice de colonne
 * \param direction : -1 pour déplacement vers la bas et 1 vers le haut
 */

int mouvementColonne (jeu *p, int colonne, int direction);



/*
 * Effectue les mouvements (vers le haut ou vers le bas) des cases sur toutes les colonne.
 * Renvoie 1 si l’on a deplacé au moins une case, 0 sinon.
 *
 * \param p : pointeur sur un jeu
 * \param direction : -1 pour déplacement vers la bas et 1 vers le haut
 */

int mouvementColonnes(jeu * p, int direction);





/*
 * Effectue le mouvement sur les lignes ou sur les colonnes suivant la valeur de direction.
 *
 * \param p : pointeur sur un jeu
 * \param direction : entier donnant la direction :
 * 0 : vers le bas
 * 1 : vers la droite
 * 2 : vers le haut
 * 3 : vers la gauche
 * Renvoie 1 si l’on a deplacé au moins une case, 0 sinon
 */
int mouvement(jeu * p, int direction);
