#include <iostream>
#include "fonctions.h"

using namespace std;


void menuJoueur(void)
{
  puts("--Choisir le nombre de Joueurs--\n");
  puts("-           1 - Solo           -\n");
  puts("-           2 - Multi          -\n");
  puts("--------------------------------\n");
}

void menuDifficulte(void)
{
  puts("-----Choisir la difficulte------\n");
  puts("-           1 - 0 a 100        -\n");
  puts("-           2 - 0 a 1000       -\n");
  puts("-           3 - 0 a 10000      -\n");
  puts("--------------------------------\n");
}

int nombreMystere(int choixDifficulte, int MAX)
{

  switch(choixDifficulte)
  {
    case 1:
      MAX = 100;
    break;

    case 2:
      MAX = 1000;
    break;

    case 3:
      MAX = 10000;
    break;
  }

  srand(time(NULL));
  return (rand() % (MAX - 1 + 1)) +1;
}
