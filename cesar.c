/*******************************************
    Programme   : cryptographie
    Fichier     : cesar.c
    Objectif    : réaliser l'algorithmes de cryptographie de César
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 19-12-2018
    Version     : V1
********************************************/

#include "cesar.h"

/*char MiseEnMajuscules(char une_chaine[]){
    char chaine_majuscule[255] ;
    for(int i=0 ; i < strlen(une_chaine) ; i++){
        chaine_majuscule[i] = toupper(une_chaine[i]) ;
        printf("%c", chaine_majuscule[i]);
    }

    //return chaine_majuscule ;
}*/

void ChiffrementCesar(char chaine_a_coder[], char chaine_codee[], int decalage){
    for(int i=0 ; i < strlen(chaine_a_coder) ; i++){
        if((chaine_a_coder[i] >= 48 && chaine_a_coder[i] <= 57) || (chaine_a_coder[i] >= 65 && chaine_a_coder[i] <= 90) || (chaine_a_coder[i] >= 97 && chaine_a_coder[i] <= 122)){
            chaine_codee[i] = chaine_a_coder[i] + decalage ;
        }
        else{
            chaine_codee[i] = chaine_a_coder[i] ;
        }
        printf("%c", chaine_codee[i]) ;
    }
}

void DechiffrementCesar(char chaine_a_decoder[], char chaine_decodee[], int decalage){
    for(int i=0 ; i < strlen(chaine_a_decoder)-3 ; i++){
        if((chaine_a_decoder[i] >= 48 + decalage && chaine_a_decoder[i] <= 57 + decalage) || (chaine_a_decoder[i] >= 65 + decalage && chaine_a_decoder[i] <= 90 + decalage) || (chaine_a_decoder[i] >= 97 + decalage && chaine_a_decoder[i] <= 122 + decalage)){
            chaine_decodee[i] = chaine_a_decoder[i] - decalage ;
        }
        else{
            chaine_decodee[i] = chaine_a_decoder[i] ;
        }
        printf("%c", chaine_decodee[i]) ;
    }
}
