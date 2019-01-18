/*******************************************
    Programme   : cryptographie
    Fichier     : main.c ## MAINFILE
    Objectif    : réaliser différents algorithmes de cryptographie (César, Vigenère, Enigma, DES, RSA)
    Auteur      : Nicolas TOURRETTE (ESIREM Dijon) - nicolas_tourrette@etu.u-bourgogne.fr
    Date        : 19-12-2018
    Version     : V1
********************************************/

#include "cesar.h"
#include "monoalph.h"
#include "vigenere.h"

extern int tableau_cle[26] ;

int main(){
    int decalage ;
    //char chaine_saisie[255] = "Un deux Trois : 4 5 6 !" ;
    char chaine_saisie[255] = "Hello World" ;
    //char chaine_saisie[255] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam fringilla quis eros at suscipit. Morbi vehicula sem in interdum tincidunt. Nunc eros mauris, hendrerit ut arcu sit amet, molestie posuere ipsum. Suspendisse sed hendrerit massa, sed nullam." ;
    char chaine_codee[255] ;
    char chaine_decodee[255] ;

    printf("********  ALGORITHME DE CÉSAR  ********\nSaisir une chaine à coder : ");
    /*do{
        scanf("%s\n", &chaine_saisie) ;
    } while(strlen(chaine_saisie)>255) ;*/
    printf("Saisir le décalage à effectuer : ");
    scanf("%d", &decalage) ;

    printf("%s\n", chaine_saisie);

    printf("Chiffrement de César :\n");
    ChiffrementCesar(chaine_saisie, chaine_codee, decalage) ;
    printf("\nDéchiffrement de César :\n");
    DechiffrementCesar(chaine_codee, chaine_decodee, decalage) ;

    printf("\n\n********  ALGORITHME MONOALPHABÉTIQUE  ********\nSaisir une chaine à coder : ");
    /*do{
        scanf("%s\n", &chaine_saisie) ;
    } while(strlen(chaine_saisie)>255) ;*/

    printf("Chiffrement monoalphabétique :\n");
    ChiffrementMonoAlp(chaine_saisie, chaine_codee) ;
    printf("\n");
    DechiffrementMonoAlph(chaine_codee,chaine_decodee,tableau_cle) ;

    printf("\n\n********  ALGORITHME DE VIGENÈRE  ********\nSaisir une chaine à coder : ");
    /*do{
        scanf("%s\n", &chaine_saisie) ;
    } while(strlen(chaine_saisie)>255) ;*/

    printf("Chiffrement de Vigenère :\n");
    ChiffrementVigenere(chaine_saisie, chaine_codee, 5) ;
    printf("\n");
    DechiffrementVigenere(chaine_codee,chaine_decodee,tableau_cle, 5) ;
    printf("\n");

    return 0 ;
}
