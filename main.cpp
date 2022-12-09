#include <cstdio>
#include <cstring>
#include "fonction.h"

#define taille 50


int main()
{
    char phrase[taille];


    puts("Saisie d'une phrase : ");
    fgets(phrase, taille, stdin);
    strtok(phrase, "\n");


    if(estPalindrome(phrase))
    {
        puts("C'est un palindrome");
    }
    else 
        puts("Ce n'est pas un palindrome");


    return 0;
}