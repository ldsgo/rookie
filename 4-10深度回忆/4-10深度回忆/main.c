#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和，其中a是一个数字
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
//猜数字游戏
void game();
void guess_num()
{
	int j=0;
		do
		{	
			printf("********************************************\n");
			printf("**************  猜数字游戏  ****************\n");
			printf("********************************************\n");
			printf("********1.开始游戏******0.退出游戏**********\n");
			scanf_s("%d", &j);
			switch (j)
			{
			case 1:game(); break;
			case 0:printf("退出游戏\n"); break;
			default:printf("错误信息，请重新输入\n");
				break;
			}
		} while (j);

}
//折半查找
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
	 //guess_num();猜数字游戏函数


	//转换大小写
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
	//折半查找有序数组
	/*int a[10] = { 0,2,4,8,12,15,47,58,68,100 };
	int sz = sizeof(a) / sizeof(a[0]);
	int x,b;
	scanf_s("%d", &x);
	b=search(a,sz,x);
	printf("%d", b);*/
	return 0;
}