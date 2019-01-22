#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"
void affichersomme(tVector somme)
{
    printf("\nLa somme des deux vecteurs est : \n");
    printf("X(origine) : %d Y(origine) : %d\n",somme.nTailX,somme.nTailY);
    printf("X(tete) : %d Y(tete) : %d\n",somme.nHeadX,somme.nHeadY);
}
void afficherdiff(tVector diff)
{
    printf("\nLa difference des deux vecteurs est : \n");
    printf("X(origine) : %d Y(origine) : %d\n",diff.nTailX,diff.nTailY);
    printf("X(tete) : %d Y(tete) : %d\n",diff.nHeadX,diff.nHeadY);
}
