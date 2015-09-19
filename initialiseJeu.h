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


/*!
* Alloue la grille de la variable jeu passée par adresse.
* Initialise les cases de la grille avec des cases vides (valeurs nulles)
* Initialise les champs n et valMax avec les valeurs passées en paramètre
*
* \param p : pointeur sur une partie de 2048
* \param n : taille de la grille
* \param nbCasesLibres : nombre de case libre
* \param valMax : valeur à atteindre pour gagner
*/

void initialiseJeu (jeu *p, int n, int valMax,int score, char pseudo[10]);
