/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 *
 *  editted by: Michael Castillo
 *  editted on: 9/14/17
 *
 */

#include <stdio.h>
#include <unistd.h>
#include "life.h"

int main(int argc, char *argv[])
{
    int board[XSIZE][YSIZE];
    int rounds = DEFAULTROUNDS;
    
    initBoard(board);
    board[5][5] = ALIVE;
    board[5][6] = ALIVE;
    board[5][7] = ALIVE;
    board[6][6] = ALIVE;
    
    printf("Playing %d rounds.\n\n", rounds);
    for (int i=0; i<rounds; i++) {
        printf("Round: %d\n", i+1);
        printBoard(board);
        playRound(board);
        
        sleep(1);
    }
    
    return 0;
}


void initBoard(int vBoard[][YSIZE])
{
    for(int i = XSIZE-1; i >= 0; i--)
    {
        for(int j = 0; j < YSIZE; j++)
        {

            vBoard[i][j] = DEAD;

        }
    }

}

void playRound(int vBoard[][YSIZE])
{
    
    int tmpBoard[XSIZE][YSIZE];
    initBoard(tmpBoard);
    
    // perform the algorithm on vBoard, but update tmpBoard
    // with the new state
    
    for(int i = XSIZE; i >= 0; i--)
    {
        for(int j = 0; j < YSIZE; j++)
        {
           int n = neighbors(vBoard, i, j);
            if(vBoard[i][j] == ALIVE)
            {
                if(n==2 || n==3)
                {
                    tmpBoard[i][j] = ALIVE;
                }
            }
            else
            {
                if(n==3)
                {
                    tmpBoard[i][j] = ALIVE;
                }
            }
        }
    }
        
    // copy tmpBoard over vBoard
    for (int y = 0; y < YSIZE; y++)
    {
        for (int x = 0; x < XSIZE; x++)
        {
            vBoard[x][y] = tmpBoard[x][y];
        }
    }
}

int onBoard(int x, int y)
{
    if (x < 0 || x >= XSIZE)
        return 0;
    else
        if (y < 0 || y >= YSIZE) return 0;
        else
            return 1;
}

int neighbors(int vBoard[][YSIZE], int x, int y)
{
    int n=0;
    
    int xp1 = x + 1;
    int xm1 = x - 1;
    int yp1 = y + 1;
    int ym1 = y - 1;
    
    if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
    if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
    if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
    if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
    if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
    if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
    if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
    if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;
    
    return n;
}

void printBoard(int vBoard[][YSIZE])
{
    
    for(int i = 0; i < XSIZE; i++)
    {
        for(int j = 0; j <YSIZE; j++)
        {
            if(vBoard[i][j] == DEAD)
            {
                printf("|_|");
            }
            else
            {
                printf("|X|");
            }
        }
        printf("\n");
    }
}
