#include <cstdio>
#include <cstring>
#include "fonction.h"

bool estPalindrome(char *chaine)
{

    char *pointeurDebut = chaine;
    char *pointeurFin = chaine + strlen(chaine) - 1;


    while (pointeurDebut < pointeurFin) // tant qu'on est pas au milieu
    {
        if (*pointeurDebut != *pointeurFin) // comparer les caractères pointés
            break;    // au moins 2 lettres symétriques qui sont pas égales
        pointeurDebut++;
        pointeurFin--;
    }


    if (pointeurDebut >= pointeurFin)
        return true;
    return false;

}