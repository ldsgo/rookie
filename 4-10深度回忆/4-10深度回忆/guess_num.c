#include<stdio.h>
int game()
{
	int a = rand() % 10;
	int i;
	printf(" --- \n");
	printf("|   |\n");
	printf(" --- \n");
	for (i = 2; i>=0; i--)
	{
		int num;
		printf("����һ������\n");
		scanf_s("%d", &num);
		if (num == a)
		{
			printf("�¶���\n");
			return 0;
		}
		else if(num!=a&&i>0)
		{
			printf("�´���,����%d�λ���\n",i);
		}
	}
	printf("���ź���������\n");
	return 0;
}