#include <stdio.h>
#include "countCells.h"

int main(void)
{

    int grid[][8] = {
        {1, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 0, 0},
        {1, 1, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0},
        {1, 0, 0, 0, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1, 1}};
    int result;
    result = countCells(5, 3, grid);
    printf("result: %d", result);

    return 0;
}