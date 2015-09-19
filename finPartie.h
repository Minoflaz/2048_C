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
 * Retourne 1 si la partie est gagnée, 0 sinon.
 */

int gagne (jeu * p);



/*
 * Retourne 1 si la partie est perdue, 0 sinon.
 */

int perdu (jeu * p);



/*
 * Retourne 1 si la partie est terminée, 0 sinon.
 */

int finPartie (jeu * p);
