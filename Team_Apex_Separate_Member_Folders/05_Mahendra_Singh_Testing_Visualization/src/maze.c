#include "support.h"
#include <stdlib.h>
void generate_random_walls(int grid[ROWS][COLS],unsigned int seed,int percent,
                           int sr,int sc,int er,int ec){
    if(percent<0)percent=0;if(percent>100)percent=100;
    srand(seed);
    for(int r=0;r<ROWS;r++)for(int c=0;c<COLS;c++)
        grid[r][c]=(rand()%100)<percent;
    if(is_valid_cell(sr,sc))grid[sr][sc]=0;
    if(is_valid_cell(er,ec))grid[er][ec]=0;
}