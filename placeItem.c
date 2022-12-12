#include <stdlib.h>
#include <stdio.h>
#include "cSquare.h"

float placeItem(Pixel *grid[GRID_SIZE]){

int i;
int j;

int x1;
int y1;
int x2;
int y2;
char clr;

FILE *itemFile;
char filename[60];

printf("Enter The Filename of the item you wish to place:");

scanf("%s", filename);
itemFile = fopen(filename, "r");

printf("Enter 2 Coordinate position in the form (x₁ y₁, x₂, y₂):");
scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
printf("Coordinates Chosen: (%d, %d),(%d, %d)\n", x1, y1, x2, y2);


for(i = y1; i < y2+1; i++){
	if(1 == 2){
		next:
			i++;
	}
        for(j = x1; j < x2+1; j++){
		
		clr = getc(itemFile);

                switch(clr) {

                        case '1' :
                                grid[i*GRID_SIZE / 50 + j]->color = RED;
                        break; /* optional */

                        case '2' :
                        	grid[i*GRID_SIZE / 50 + j]->color = GRN;
                        break; /* optional */

                        case '3' :
                                grid[i*GRID_SIZE / 50 + j]->color = YEL;
                        break; /* optional */

                        case '4' :
                                grid[i*GRID_SIZE / 50 + j]->color = BLU;
                        break; /* optional */

                        case '5' :
                                grid[i*GRID_SIZE / 50 + j]->color = MAG;
                        break; /* optional */

                        case '6' :
                                grid[i*GRID_SIZE / 50 + j]->color = CYN;
                        break; /* optional */

                        case '7' :
                                grid[i*GRID_SIZE / 50 + j]->color = WHT;
                        break; /* optional */

                        case '8' : /* Optional */
                                grid[i*(GRID_SIZE / 50)+ j]->color = BLK;
                	break;
	
			case '\n' :
				goto next;
			break; 
		}
        }
}
display(1,grid);

return 0.0;
}
