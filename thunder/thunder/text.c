#include"thunder.h"
void menu()
{
	printf("********************************\n");
	printf("**********1.��ʼ��Ϸ************\n");
	printf("**********0.������Ϸ************\n");
	printf("********************************\n");
}
void game()
{
	int ret=1;
	int count = 0;
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	//��ʼ������
	Initboard(mine, ROW, COL, '0');
	Initboard(show, ROW, COL, '*');
	//����
	Setmine(mine, ROW, COL);
	//�������
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
		printf("��Ϸʤ��\n");
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
			case 1:printf("��ʼ��Ϸ\n");
				game(); break;
			case 0:printf("������Ϸ\n");
				break;
			default:
				printf("��������������");
				break;
			}
	} while (input);
}
int main()
{
	text();
	return 0;
}