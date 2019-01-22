#ifndef VECTORS_H_INCLUDED
#define VECTORS_H_INCLUDED

typedef struct tVector
{
    int nTailX;
    int nTailY;
    int nHeadX;
    int nHeadY;
}tVector;
typedef struct tVector3d
{
    int nTailX;
    int nTailY;
    int nTailZ;
    int nHeadX;
    int nHeadY;
    int nHeadZ;
}tVector3d;

extern tVector setvec();
extern tVector sommevec(tVector Vec,tVector Vec2);
extern tVector diffvec(tVector Vec,tVector Vec2);
extern void affichersomme(tVector);
extern void afficherdiff(tVector);

#endif // VECTORS_H_INCLUDED
