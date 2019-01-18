/*******************************************
    Programme   : cryptographie
    Fichier     : monoalph.c
    Objectif    : réaliser l'algorithmes de cryptographie monoalphabétique
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 08-01-2019
    Version     : V2
********************************************/

#include "monoalph.h"

char tableau_cle[26] ;

void ChiffrementMonoAlp(char chaine_a_coder[], char chaine_codee[]){
    srand(time(NULL)) ;
    for(int i=0 ; i<26 ; i++){
        tableau_cle[i] = rand()%26 + 65 ;
    }

    for(int i=0 ; i < strlen(chaine_a_coder) ; i++){
        if((chaine_a_coder[i] >= 48 && chaine_a_coder[i] <= 57) || (chaine_a_coder[i] >= 65 && chaine_a_coder[i] <= 90) || (chaine_a_coder[i] >= 97 && chaine_a_coder[i] <= 122)){
            int indice = ((int)chaine_a_coder[i] - 65)%26 ;
            chaine_codee[i] = tableau_cle[indice] ;
        }
        else{
            chaine_codee[i] = chaine_a_coder[i] ;
        }
        printf("%c", chaine_codee[i]) ;
    }
}

void DechiffrementMonoAlph(char chaine_a_decoder[], char chaine_decodee[], int tableau_cle[]){
    for(int i=0 ; i < strlen(chaine_a_decoder)-3 ; i++){
        if((chaine_a_decoder[i] >= 48 && chaine_a_decoder[i] <= 57) || (chaine_a_decoder[i] >= 65 && chaine_a_decoder[i] <= 90) || (chaine_a_decoder[i] >= 97 && chaine_a_decoder[i] <= 122)){
            for(int j=0 ; j < 26 ; j++){
                if((int)chaine_a_decoder[i]-65 == tableau_cle[j]){
                    chaine_decodee[i] = (char)tableau_cle[j] + 65 ;
                }
            }
        }
        else{
            chaine_decodee[i] = chaine_a_decoder[i] ;
        }
        printf("%c", chaine_decodee[i]) ;
    }
}
