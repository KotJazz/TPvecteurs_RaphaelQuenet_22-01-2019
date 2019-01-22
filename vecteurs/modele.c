#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"

tVector sommevec(const tVector Vec,const tVector Vec2)
{
    tVector somme;
    somme.nHeadX=Vec.nHeadX+Vec2.nHeadX;
    somme.nHeadY=Vec.nHeadY+Vec2.nHeadY;
    somme.nTailX=Vec.nTailX+Vec2.nTailX;
    somme.nTailY=Vec.nTailY+Vec2.nTailY;
    affichersomme(somme);
    return somme;
}
tVector diffvec(const tVector Vec,const tVector Vec2)
{
    tVector diff;
    diff.nHeadX=Vec.nHeadX-Vec2.nHeadX;
    diff.nHeadY=Vec.nHeadY-Vec2.nHeadY;
    diff.nTailX=Vec.nTailX-Vec2.nTailX;
    diff.nTailY=Vec.nTailY-Vec2.nTailY;
    afficherdiff(diff);
    return diff;
}
