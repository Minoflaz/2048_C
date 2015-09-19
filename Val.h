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
* Fonction retournant 1 si la case (i,j) existe, 0 sinon.
*
*/

int indiceValide (jeu * p, int i, int j);


/*!
* Fonction retournant la valeur de la case (ligne,colonne) de la partie p,
* ou -1 si la case n’existe pas.
*
* \param p : pointeur sur la partie en cours
* \param ligne : entier correspondant au numéro de ligne
* \param colonne : entier correspondant au numéro de colonne
*/
int getVal(jeu * p, int ligne, int colonne);



/*!
* Fonction modifiant la valeur de la case (ligne,colonne) de la partie p, avec la valeur val
*
* \param p : pointeur sur la partie en cours
* \param ligne : entier orrespondant au numéro de ligne
* \param colonne : entier orrespondant au numéro de colonne
* \param val : entier à mettre dans la case (i,j) (si elle existe)
*/


void setVal(jeu * p, int ligne, int colonne, int val);



/*
 * Retourne 1 si la case est vide, 0 sinon
 */

int caseVide (jeu * p, int i, int j);




/*
 * Ajoute un 2 ou un 4 sur une case vide choisie aléatoirement
 *
 */
void ajouteValAlea (jeu * p);
