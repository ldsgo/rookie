#include"thunder.h"
void menu()
{
	printf("********************************\n");
	printf("**********1.开始游戏************\n");
	printf("**********0.结束游戏************\n");
	printf("********************************\n");
}
void game()
{
	int ret=1;
	int count = 0;
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	//初始化棋盘
	Initboard(mine, ROW, COL, '0');
	Initboard(show, ROW, COL, '*');
	//藏雷
	Setmine(mine, ROW, COL);
	//输出棋盘
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	while (count<ROW*COL-Easy_count)
	{
		
		ret=Playermove(show, mine, ROW, COL);
		count++;
		if (ret == 0)
		{
			break;
		}
		Displayboard(show, ROW, COL);	
	}
	if (count == ROW * COL - Easy_count)
	{
		printf("游戏胜利\n");
		Displayboard(mine, ROW, COL);

	}
	
}
void text()
{
	srand((unsigned int)time(NULL));
	int input;
	do {
			menu();
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:printf("开始游戏\n");
				game(); break;
			case 0:printf("结束游戏\n");
				break;
			default:
				printf("错误！请重新输入");
				break;
			}
	} while (input);
}
int main()
{
	text();
	return 0;
}