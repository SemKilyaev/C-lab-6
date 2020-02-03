#define sizew 20
#define sizeh 10
#include <stdio.h>
#include "task7.h"

char maze[sizeh][sizew]{
    '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
    '#',' ',' ',' ','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#',
    '#',' ','#',' ','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#','#','#','#','#',
    '#',' ','#',' ',' ','#','#','#',' ','#',' ','#',' ','#','#','#',' ','#','#','#',
    '#',' ','#','#',' ','#','#','#',' ','#',' ',' ',' ','#','#','#',' ',' ',' ','#',
    '#',' ','#','#',' ',' ','#','#',' ','#','x','#',' ',' ',' ',' ',' ','#',' ','#',
    '#',' ','#','#',' ',' ','#','#',' ','#','#','#','#','#',' ','#','#','#',' ',' ',
    '#',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#',' ','#','#','#','#','#',
    ' ',' ','#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#',
    '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
};

int main()
{
    int x = 10;
    int y = 5;
    printMaze();
    place(x, y);
    putchar('\n');
    printMaze();
    return 0;
}
