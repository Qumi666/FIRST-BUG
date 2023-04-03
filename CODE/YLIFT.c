#include <stdio.h>
#include <math.h>
#include "GLOBALV.h"

float YLIFT()
{
    extern float Ylift;
    extern float Clift;
    extern float S;
    extern float Velocity;
    extern float RHO;

    printf("Clift S Velocity RHO\n");
    scanf("%f%f%f%f", &Clift, &S, &Velocity, &RHO);

    Ylift = 0.5 * Clift * S * Velocity * Velocity * RHO;
    
    return Ylift;
}