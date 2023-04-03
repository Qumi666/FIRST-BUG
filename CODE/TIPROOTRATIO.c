#include <stdio.h>
#include "GLOBALV.h"

float TIPROOTRATIO()
{
    extern float b1;
    extern float b0;
    extern float eta;

    printf("b0 b1\n");
    scanf("%f%f", &b0, &b1);

    eta = b1 / b0;

    return eta;
}
