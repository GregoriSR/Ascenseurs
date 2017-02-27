#include <stdio.h>
#include <stdlib.h>
#include <time.h>       //pour l'utilisation de srand
#include <windows.h>        //pour l'utilisation de sleep
#include "actions.h"

void appel (int *etg)
    {
        while (etg != 100)      //début de la boucle appel de l'ascenseur
            {
            printf("A quel etage etes-vous ?");
            scanf("%d", &etg);
                if (-5 <= etg >= 15)
                    {
                    printf("L'ascenseur arrive a l'etage %d", etg);
                    }
                else if (etg == 100)
                    {
                    printf("Arret des ascenseurs");
                    }
                else
                    {
                    }
            }
    }

void deplacements (int *tabAscenseurs, int etgAppel)
    {
    int choixAscenseur();       //apppel des 4 fonctions
    void deplacementAscenseur();
    void selection();
    void deplacementAscenseur();
    }

void selection (int *etg)
    {
            printf("A quel etage voulez vous aller ?");
            scanf("%d", &etg);
       while (etg > 15 || etg < -5)     //début de la boucle selection de l'etage
            {
            printf("A quel etage voulez vous aller ?");
            scanf("%d", &etg);
                if (etg < 15 || etg > -5)
                    {
                    printf("direction etage %d\n", etg);
                    }
                else if (etg > 15 || etg < -5)
                    {
                    printf("A quel etage voulez vous aller ?");
            scanf("%d", &etg);
                    }
            }
    }

int choixAscenseur (int *tabAscenseurs, int etgAppel)
    {
srand(time(NULL));
rand() % NBASC;
printf("Je suis l'ascenseur %d et je suis a l'etage %d", numAsc, numEtg);
    }

void deplacementAscenseur (int *tabAscenseurs, int etgDest, int numAsc)
    {

    }
