#include"game.h"
void game()
{
	char ret;
	char board[ROW][COL] = {0};
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	while (1)
	{
		//玩家下
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void text()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		printf("**********************************\n");
		printf("****1.玩游戏***0.退出游戏*********\n");
		printf("**********************************\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case	1:
			game();
			break;
		case 0: printf("退出游戏\n");
			break;
		default:printf("错误，请重新输入\n"); break;
		}
	} while (input);

}
int main()
{
	text();
	return 0;
}