#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮�ͣ�����a��һ������
double N_items(double a,int n)
{
	assert(n >= 0);
	assert(a > -10 && a < 10);
	int  i, j;
	double sum = 0;
	for (i = 1; i <= n; i++)
	{
		double tmp = a;
		for (j = 1; j < i; j++)
		{
			tmp += a * pow(10, j);
		}
		sum += tmp;
	}
	return sum;
}
//��������Ϸ
void game();
void guess_num()
{
	int j=0;
		do
		{	
			printf("********************************************\n");
			printf("**************  ��������Ϸ  ****************\n");
			printf("********************************************\n");
			printf("********1.��ʼ��Ϸ******0.�˳���Ϸ**********\n");
			scanf_s("%d", &j);
			switch (j)
			{
			case 1:game(); break;
			case 0:printf("�˳���Ϸ\n"); break;
			default:printf("������Ϣ������������\n");
				break;
			}
		} while (j);

}
//�۰����
int search(int a[],int sz,int x)
{
	int left = sz;
	int right = 0;
	int mid = 0;
	while (left>=right)
	{
		mid = (left + right) / 2;
		if (x == a[mid])
		{
			return mid;
		}
		else if(x>a[mid])
		{
			right = mid;
		}
		else
		{
			left = mid;
		}
	}
	return -1;
}
int main()
{
	srand((unsigned int)time(NULL));
	 //guess_num();��������Ϸ����


	//ת����Сд
	//char n;
	//scanf_s("%c", &n,2);
	//if (n >= 'A' && n <= 'Z')
	//{
	//	printf("%c", n + 32);
	//}
	//else if (n >= 'a' && n <= 'z')
	//{
	//	printf("%c", n-32);
	//}
	//�۰������������
	/*int a[10] = { 0,2,4,8,12,15,47,58,68,100 };
	int sz = sizeof(a) / sizeof(a[0]);
	int x,b;
	scanf_s("%d", &x);
	b=search(a,sz,x);
	printf("%d", b);*/
	return 0;
}