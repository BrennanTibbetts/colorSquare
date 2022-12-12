
#include "cSquare.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
/* create a 50x50 sized grid of Blank Pixels (WHITE)*/
Pixel* grid[GRID_SIZE];

printf("\nCSQUARE INTERFACE\n   ");
for(i = 0; i < (GRID_SIZE/50); i++){
	printf("-");
}
printf("\n");

for(i = 0; i < GRID_SIZE; i++){
	grid[i] = (Pixel *)malloc(sizeof(Pixel));
}
display(0, grid);
directory(grid);

return 0;
}
