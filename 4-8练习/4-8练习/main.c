#include<stdio.h>
//�ж���������ӡ
void prime_number(int x,int y)
{
	int i = 0, j;
	for (i = x; i <= y; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
			printf("%d ", i);
	}
}
//����˷��ھ���
void mul_t(int x)
{
	int i, j;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", j, i, i * j);
		}
		printf("\n");
	}
}
//�ж�����
void leap_year(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		printf("������");
	else
		printf("��������");
}
//������������
void exchange(int *x, int* y)
{
	/*int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;*/

	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main()
{
	/*int i, j,x;
	scanf_s("%d %d %d", &i, &j,&x);
	prime_number(i, j);
	mul_t(i);
	leap_year(x);*/
	int i, j;
	scanf_s("%d %d", &i, &j);
	exchange(&i, &j);
	printf("%d %d", i, j);
	return 0;
}