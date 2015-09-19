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



// libère la mémoire de la grille allouée 

// pointeur p : pointe vers une partie de 2048

void libereMemoire (jeu * p);
