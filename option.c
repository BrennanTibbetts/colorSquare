#include <stdio.h>
#include <stdlib.h>
#include "cSquare.h"

int option(){

int ans;

printf(WHT "\n\nPIXEL OPTIONS\n");
printf("\n1 -> COLOR A RANGE OF PIXELS\n");
printf("\n2 -> PLACE ITEM FROM FILE\n");
printf("\nOption: ");
scanf("%d", &ans);

return ans;
}
