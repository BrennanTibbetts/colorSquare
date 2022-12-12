#include <stdio.h>
#include <stdlib.h>
#include "cSquare.h"

void directory(Pixel *grid[GRID_SIZE]) {

float (*fp_array[2])(Pixel **) = {colorRange, placeItem};

int input;
int go;
float result;

go = 1;

do{
input = option();
        if(input == 12){
                break;
        }

result = fp_array[input - 1](grid);

}while(go == 1);

}

