#include<stdio.h>
#include<assert.h>
#include<math.h>
//交换数组
void exchange_arr(int* x,int* y)
{	
	assert(x != NULL);
	assert(y != NULL);
	int tmp = 0,i=0;
	for (i = 0; i <5 ; i++)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
		x++;
		y++;
	}
}
//水仙花数
double Narcissistic_number(int i)
{
	if (i > 9)
	{
		return pow(i % 10, 3) + Narcissistic_number(i / 10);
	}
	return pow(i % 10, 3);
}
int main()
{
	//交换数组
	//int i = 0;
	//int a[5] = { 1,2,3,4,5 };
	//int b[5] = { 6,7,8,9,10 };
	//exchange_arr(a, b);
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
	//int i;
	//double j, count = 0;
	//for (i = 1; i <= 99; i++)
	//{
	//	j = 1.0 / i;
	//	if (i % 2 == 0)
	//	{
	//		count = count - j;
	//	}
	//	else
	//	{
	//		count = count + j;
	//	}
	//}
	//printf("%lf\n", count);
	//计算1—100中9的个数
	//int i = 0, j = 0, count = 0;
	//for (i = 1; i <= 20; i++)
	//{
	//	j = i;
	//	while(j>0) 
	//	{
	//		if(j%10==9)
	//		count++;
	//		j = j / 10;
	//	}
	//}
	//printf("%d", count);
	// 打印菱形
	//int i, j,k;
	//for (i = 0; i < 7; i++)
	//{
	//	for (k = 6; k >i; k--)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j <2*i+1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (i = 5; i >=0; i--)
	//{
	//	for (k =5;k>=i; k--)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 2*i+1; j >0 ; j--)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 水仙花数
	int i;
	for (i = 0; i < 1000; i++)
	{
		if (i > 99)
		{
			if (i == Narcissistic_number(i))
				printf("%d ", i);
		}
	}


	return 0;

}