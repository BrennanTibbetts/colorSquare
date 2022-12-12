#include "cSquare.h"
#include <stdio.h>
#include <stdlib.h>

void display(int p, Pixel *grid[GRID_SIZE]){


int i;
int j;

printf("\n");

for(i = 0; i < (GRID_SIZE / 100); i++){
	if((i+1) % 5 == 0)
		printf(WHT "%2d ", 49-i);
	else
		printf("   ");
	for(j = 0; j < (GRID_SIZE / 50); j++){
		
		if(p == 0){
			Pixel *newPix;
			newPix = (Pixel *)malloc (sizeof (Pixel));
			newPix->color = WHT;
			newPix->x = j;
			newPix->y = i;
			newPix->symbol = "█";
			grid[i*(GRID_SIZE / 50) + j] = newPix;
		
		}
	
			printf("%s",grid[i*GRID_SIZE / 50 + j]->color);               
			printf("%s", grid[i*GRID_SIZE / 50 + j]->symbol);	
			printf(WHT);
		
	}
 	printf("\n");

}

printf("   ");
for(i = 0; i < (GRID_SIZE / 50); i = i+5){
        printf(WHT "%-2d   ", i);
}
}
