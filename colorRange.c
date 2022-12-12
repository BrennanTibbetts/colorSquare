#include <stdlib.h>
#include <stdio.h>
#include "cSquare.h"

float colorRange(Pixel *grid[GRID_SIZE]){

int i;
int j;

int x1;
int y1;
int x2;
int y2;
int clr;

printf("Enter 2 Coordinate Range in the form (x₁ y₁ x₂ y₂):");
scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
printf("Coordinates Chosen: (%d, %d),(%d, %d)\n", x1, y1, x2, y2);

printf("\nOptions: 1-" RED"RED " GRN"2-GRN " YEL"3-YEL " BLU"4-BLU " MAG"5-MAG " CYN"6-CYN " WHT"7-WHT " BLK"\x1b[47m8-BLK\x1b[0m\n");
printf("New Color #:");
scanf("%d", &clr);

for(i = y1; i < y2+1; i++){

	for(j = x1; j < x2+1; j++){

		switch(clr) {

   			case 1 :
      				grid[i*GRID_SIZE / 50 + j]->color = RED;
      			break; /* optional */
			
			case 2 :
                                grid[i*GRID_SIZE / 50 + j]->color = GRN;
                        break; /* optional */
			
			case 3 :
                                grid[i*GRID_SIZE / 50 + j]->color = YEL;
                        break; /* optional */
			
			case 4 :
                                grid[i*GRID_SIZE / 50 + j]->color = BLU;
                        break; /* optional */

			case 5 :
                                grid[i*GRID_SIZE / 50 + j]->color = MAG;
                        break; /* optional */
			
			case 6 :
                                grid[i*GRID_SIZE / 50 + j]->color = CYN;
                        break; /* optional */
			
			case 8 :
                                grid[i*GRID_SIZE / 50 + j]->color = BLK;
                        break; /* optional */

   			default : /* Optional */
      				grid[i*(GRID_SIZE / 50)+ j]->color = WHT;
		}
	}
}
display(1, grid);

return 0.0;
}
