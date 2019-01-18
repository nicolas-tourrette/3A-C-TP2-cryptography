/*******************************************
    Programme   : cryptographie
    Fichier     : vigenere.h
    Objectif    : réaliser l'algorithmes de cryptographie de Vigenère
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 08-01-2019
    Version     : V1
********************************************/

#ifndef VIGENERE_H
#define VIGENERE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void ChiffrementVigenere(char chaine_a_coder[], char chaine_codee[], int longueur) ;
void DechiffrementVigenere(char chaine_a_decoder[], char chaine_decodee[], int tableau_cle[], int longueur) ;

#endif
