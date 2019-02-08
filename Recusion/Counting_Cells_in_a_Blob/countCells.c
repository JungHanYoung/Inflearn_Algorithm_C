#include <stdio.h>

#define N 8
#define IMAGE_COLOR 1
#define ALREADY_COUNTED 2

int countCells(int x, int y, int grid[][8])
{
    // 현재 위치의 픽셀이 grid밖이면..
    if (x < 0 || x >= N || y < 0 || y >= N)
        return 0;
    // 이미지 픽셀이 아니면...
    else if (grid[x][y] != IMAGE_COLOR)
        return 0;
    else
    {
        grid[x][y] = ALREADY_COUNTED;
        return 1 + countCells(x - 1, y - 1, grid) + countCells(x, y - 1, grid) + countCells(x + 1, y - 1, grid) + countCells(x - 1, y, grid) + countCells(x, y, grid) + countCells(x + 1, y, grid) + countCells(x - 1, y + 1, grid) + countCells(x, y + 1, grid) + countCells(x + 1, y + 1, grid);
    }
}