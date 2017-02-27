#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED
#define NBASC 6

void appel (int *etg);
void deplacements (int *tabAscenseurs, int etgAppel);
void selection (int *etg);
int choixAscenseur (int *tabAscenseurs, int etgAppel);
void deplacementAscenseur (int *tabAscenseurs, int etgDest, int numAsc);

#endif
