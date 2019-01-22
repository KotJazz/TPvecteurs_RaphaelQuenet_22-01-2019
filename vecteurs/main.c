#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"

int main()
{
    printf("----Vecteur 1----\n");
    tVector Vec=setvec();
    printf("\n----Vecteur 2----\n");
    tVector Vec2=setvec();
    sommevec(Vec,Vec2);
    diffvec(Vec,Vec2);
}
