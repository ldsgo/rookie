#include<stdio.h>

//
//int main()
//{
//	/*喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//		给20元，可以多少汽水。
//		编程实现。*/
//	//接法一：
//	//int m = 0;
//	//int total = 0;
//	//int e = 0;
//	//scanf_s("%d", &m);//输入拥有的钱的数额
//	//total = m;
//	//e = m;
//	//while (e/2)
//	//{
//	//	total += e / 2;
//	//	e = e / 2 + e % 2;
//	//}
//	//printf("%d", total);
//	//接法二
//	/*int m = 0;
//
//	scanf_s("%d", &m);
//	if (m > 0)
//		printf("%d", m * 2 - 1);
//	else
//		printf("%d", 0);*/
//	return 0;
//}
//将奇数全部调到偶数前面
//void sort(int arr[], int sz)
//{
//	int left = 0,tmp=0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] %2== 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	for(i=0;i<sz;i++)
//	{ 
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
