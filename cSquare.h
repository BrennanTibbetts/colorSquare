
#define RED "\x1b[31m"
#define GRN "\x1b[32m"
#define YEL "\x1b[33m"
#define BLU "\x1b[34m"
#define MAG "\x1b[35m"
#define CYN "\x1b[36m"
#define WHT "\x1b[0;37m"
#define BLK "\033[0;30m"
#define GRID_SIZE 5000

typedef struct{
	
	int x;
	int y;
	char *color;
	char *symbol;

} Pixel;

void display(int p, Pixel *grid[GRID_SIZE]);

int option();

void directory(Pixel *grid[GRID_SIZE]);

float colorRange(Pixel *grid[GRID_SIZE]);

float placeItem(Pixel *grid[GRID_SIZE]);
