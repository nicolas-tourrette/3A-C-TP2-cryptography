/*******************************************
    Programme   : cryptographie
    Fichier     : monoalph.h
    Objectif    : réaliser l'algorithmes de cryptographie monoalphabétique
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 19-12-2018
    Version     : V1
********************************************/

#ifndef MONOALPH_H
#define MONOALPH_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void ChiffrementMonoAlp(char chaine_a_coder[], char chaine_codee[]) ;
void DechiffrementMonoAlph(char chaine_a_decoder[], char chaine_decodee[], int tableau_cle[]) ;

#endif
