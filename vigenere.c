/*******************************************
    Programme   : cryptographie
    Fichier     : vigenere.c
    Objectif    : réaliser l'algorithmes de cryptographie de Vigenère
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 08-01-2019
    Version     : V1
********************************************/

#include "vigenere.h"

int tableau_cle[26] ;

void ChiffrementVigenere(char chaine_a_coder[], char chaine_codee[], int longueur){
    srand(time(NULL)) ;
    for(int i=0 ; i<longueur ; i++){
        tableau_cle[i] = rand()%26 ;
        printf("%d ", tableau_cle[i]);
    }
    printf("\n");
    for(int i=0 ; i < strlen(chaine_a_coder) ; i++){
        if((chaine_a_coder[i] >= 48 && chaine_a_coder[i] <= 57) || (chaine_a_coder[i] >= 65 && chaine_a_coder[i] <= 90) || (chaine_a_coder[i] >= 97 && chaine_a_coder[i] <= 122)){
            for(int j=0 ; j < longueur ; j++){
                chaine_codee[i] = chaine_a_coder[i] + tableau_cle[j] ;
            }
        }
        else{
            chaine_codee[i] = chaine_a_coder[i] ;
        }
        printf("%c", chaine_codee[i]) ;
    }
}

void DechiffrementVigenere(char chaine_a_decoder[], char chaine_decodee[], int tableau_cle[], int longueur){
    for(int i=0 ; i < strlen(chaine_a_decoder)-3 ; i++){
        for(int j=0 ; j < longueur ; j++){
            int decalage = tableau_cle[j] ;
            if((chaine_a_decoder[i] >= 48 + decalage && chaine_a_decoder[i] <= 57 + decalage) || (chaine_a_decoder[i] >= 65 + decalage && chaine_a_decoder[i] <= 90 + decalage) || (chaine_a_decoder[i] >= 97 + decalage && chaine_a_decoder[i] <= 122 + decalage)){
                chaine_decodee[i] = chaine_a_decoder[i] - decalage ;
            }
            else{
                chaine_decodee[i] = chaine_a_decoder[i] ;
            }
        }
        printf("%c", chaine_decodee[i]) ;
    }
}
