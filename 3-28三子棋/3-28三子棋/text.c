#include"game.h"
void game()
{
	char ret;
	char board[ROW][COL] = {0};
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	while (1)
	{
		//�����
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
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
		printf("���Ӯ\n");
		}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void text()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		printf("**********************************\n");
		printf("****1.����Ϸ***0.�˳���Ϸ*********\n");
		printf("**********************************\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case	1:
			game();
			break;
		case 0: printf("�˳���Ϸ\n");
			break;
		default:printf("��������������\n"); break;
		}
	} while (input);

}
int main()
{
	text();
	return 0;
}