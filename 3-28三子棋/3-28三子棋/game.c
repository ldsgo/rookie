#include"game.h"
int Isfull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void Initboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < 2)printf("|");
		}
		printf("\n");
		if (i < 2) {
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < 2)printf("|");
			}
		}
		printf("\n");

	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int i, j;
	printf("玩家下\n");
	while (1)
	{
		printf("请输入相应的坐标-> ");
		scanf_s("%d %d", &i, &j);
		if (board[i-1][j-1] == ' ')
		{
			board[i-1][j-1] ='*';
			break;
		}
		printf("该坐标已被占用，请重新输入\n");
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	int i, j;
	printf("电脑下\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}

char Iswin(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[2][j] == board[1][j] && board[1][j] != ' ')
			return board[1][j];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	if (Isfull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
