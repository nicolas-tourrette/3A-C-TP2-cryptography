/*******************************************
    Programme   : cryptographie
    Fichier     : cesar.h
    Objectif    : réaliser l'algorithmes de cryptographie de César
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 19-12-2018
    Version     : V1
********************************************/

#ifndef CESAR_H
#define CESAR_H

#include <stdio.h>
//#include <time.h>
//#include <math.h>
#include <string.h>
#include <ctype.h>

char MiseEnMajuscules(char une_chaine[]) ;
void ChiffrementCesar(char chaine_a_coder[], char chaine_codee[], int decalage) ;
void DechiffrementCesar(char chaine_a_decoder[], char chaine_decodee[], int decalage) ;

#endif
