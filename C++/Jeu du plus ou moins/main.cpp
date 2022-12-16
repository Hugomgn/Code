#include <iostream>
#include <ctime>
#include "fonctions.h"

using namespace std;


int main()
{
  int choixJoueur, choixDifficulte;
  int nombreRechercher, nombreEntre;
  int MAX;
  bool continuerPartie = true;


  while(continuerPartie != false)
{

  int compteur = 0;

  menuJoueur();
  cin >> choixJoueur;

  menuDifficulte();
  cin >> choixDifficulte;

  nombreRechercher = nombreMystere(choixDifficulte, MAX);

  switch(choixJoueur)
  {

    case 1:

        do
        {
            compteur++;

            puts("Rentrez un nombre :\n");
            cin >> nombreEntre;

            if(nombreRechercher > nombreEntre)
              puts("C'est plus !\n");
            else if(nombreRechercher < nombreEntre)
              puts("C'est moins ! \n");
            else
              cout << "Bravo ! Vous avez trouve le nombre mystere en " << compteur << " coups !!!" << endl;



        }
        while (nombreEntre != nombreRechercher);
        puts("Voulez vous rejouer ? 1/0");
        cin >> continuerPartie;

    break;


    case 2:


        puts("Joueur 1, Rentrez votre nombre :\n");
        cin >> nombreRechercher;

        do
        {
            compteur++;

            puts("Rentrez un nombre :\n");
            cin >> nombreEntre;

            if(nombreRechercher > nombreEntre)
              puts("C'est plus !\n");
            else if(nombreRechercher < nombreEntre)
              puts("C'est moins ! \n");
            else
              cout << "Bravo ! Vous avez trouve le nombre mystere en " << compteur << " coups !!!" << endl;



        }
        while (nombreEntre != nombreRechercher);
        puts("Voulez vous rejouer ? 1/0");
        cin >> continuerPartie;

    default:
      puts("Cette option n'existe pas\n");

    break;


  }


} 

}
