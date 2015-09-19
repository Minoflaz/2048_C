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
 * Affiche le menu avec le curseur sur "jouer"
 * 
 * Retourne 1
 */

int menu_jouer();


/*
 * Affiche le menu avec le curseur sur "sauvegarder"
 * 
 * Retourne 2
 */

int menu_sauvegarder();



/*
 * Affiche le menu avec le curseur sur "charger"
 * 
 * Retourne 3
 */

int menu_charger();




/*
 * Affiche le menu avec le curseur sur "quitter"
 * 
 * Retourne 4
 */

int menu_quitter();


/*
 * Fonction sauvegardant la partie en cours
 * Retourne 0 en cas de problème, 1 sinon.
 *
 * \param p : pointeur sur la partie courante à sauvegarder
 */

int sauvegarde (jeu *p);




/*!
 * Fonction chargeant la dernière partie sauvegardée.
 * Retourne 0 en case de problème, 1 sinon.
 *
 * \param p : adresse du pointeur sur le jeu
 */

int chargement (jeu *p);


/*!
 * Affiche le menu et permet de se deplacer entre les sous menu
 *
 * Permet de : 
 *
 * Jouer, donc reprendre la partie en cours ou d'en commencer une nouvelle en debut de partie
 * Sauvegarder la partie actuelle
 * Charger la derniere partie sauvegardée
 * Quitter le jeu
 * 
 * Retourne 3 si la partie est repris apres sauvegarde ou chargement y compris
 * Ou retourne 2 si l'utilisateur quitte la partie
 *
 */

int menu (jeu *p);

