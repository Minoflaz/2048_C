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






void espace_gauche (int nb_gauche); //Permet de faire la partie gauche d'une case de 2048

void espace_droite (int nb_droite) ; //Permet de faire la partie droite d'une case de 2048

void affichage (jeu *p) ; //Affiche la partie de 2048 avec les cases le score et le pseudo
