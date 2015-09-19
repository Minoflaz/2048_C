#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <termios.h>




typedef struct {

int n;   //Correspond au nombre de case(n*n)
int valMax; //Correspond au score a atteindre pour gagner
int nbCasesLibres; // Correspond au nombre de case libre
int score;
int *grille; //Pointeur vers le tableau comprenant les cases
char pseudo[10]; //Pseudo limité a 9 char

} jeu;


