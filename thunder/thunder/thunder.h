#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 10
void Initboard(char board[ROWS][COLS], int row, int col, char set);
void Displayboard(char board[ROWS][COLS],int row, int col );
void Setmine(char board[ROWS][COLS], int row, int col);
int Playermove(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);




