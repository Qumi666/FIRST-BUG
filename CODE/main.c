#include <stdio.h>
#include <math.h>
#include "YLIFT.h"
#include "TIPROOTRATIO.h"

int main()
{
    int select;
    float result;
    
    printf("1.YLIFT\n2.TIPROOTRATIO\n");
    
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        result = YLIFT();
        printf("Ylift = %f \n", result);
        break;
    case 2:
        result = TIPROOTRATIO();
        printf("Tiprootratio = %f \n", result);
        break;
    default:
        break;
    }

    return 0;
}
