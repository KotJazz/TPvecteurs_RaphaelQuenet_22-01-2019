#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"

tVector setvec()
{
    tVector Vec;
    printf("Veuillez saisir la position X de l'origine du vecteur.");
    scanf("%d",&Vec.nTailX);
    fflush(stdin);
    printf("Veuillez saisir la position Y de l'origine du vecteur.");
    scanf("%d",&Vec.nTailY);
    fflush(stdin);
    printf("Veuillez saisir la position X de la tete du vecteur.");
    scanf("%d",&Vec.nHeadX);
    fflush(stdin);
    printf("Veuillez saisir la position Y de la tete du vecteur.");
    scanf("%d",&Vec.nHeadY);
    fflush(stdin);
    return Vec;
}
