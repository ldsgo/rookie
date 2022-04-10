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
		printf("输入一个数字\n");
		scanf_s("%d", &num);
		if (num == a)
		{
			printf("猜对了\n");
			return 0;
		}
		else if(num!=a&&i>0)
		{
			printf("猜错了,还有%d次机会\n",i);
		}
	}
	printf("很遗憾，你输了\n");
	return 0;
}