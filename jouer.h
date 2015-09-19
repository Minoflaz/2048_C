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
#include "initialiseJeu.h"
#include "terminalCouleur.h"
#include "saisieM.h"
#include "affichage.h"
#include "Val.h"
#include "finPartie.h"
#include "mouvement.h"
#include "menu.h"

/* Permet de jouer une partie de 2048
 *
 * Reconnaît si le joueur appuie sur une touche fléchée et deplace les cases en consequence
 *
 * Permet d'acceder au menu en appuyant sur echap
 *
 * Continue la partie tant qu'elle n'est ni perdue ni gagnée
 *
 */



void jouer (jeu *p);
