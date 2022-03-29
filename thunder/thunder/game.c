#include"thunder.h"
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] -8*'0';

}
void Initboard(char board[ROWS][COLS], int row, int col, char set)
{
	int i, j;
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");	
	}
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = 0;
	while (count < Easy_count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}
}
int Playermove(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x=0, y=0;
	while (1)
	{
		scanf_s("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col&&show[x][y]=='*')
		{
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("boom！，游戏结束\n");
				Displayboard(mine, ROW, COL);
				return 0;
			}
			else
			{
				int count = get_mine_count(mine,x,y);
				show[x][y] = count+'0';
				//if (count == 0)扩散到周围
				//{
				//	spread();
				//}
				return 1;
			}
		}
		else
		{
			printf("非法坐标，请重新输入");
		}
	}
}