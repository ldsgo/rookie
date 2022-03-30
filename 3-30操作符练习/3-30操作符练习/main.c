#include<stdio.h>
//返回参数二进制中 1 的个数
//int  count_one_bits(unsigned int value)
//{
//    //低创
//    //int i;
//    //int count = 0;
//    //for (i = 0; i < 32; i++)
//    //{
//    //    if (1== 1&(value>>i))
//    //        count++;
//    //}
//    //猛男追求极致
//    int count = 0;
//    while (value)
//    {
//        count++;
//        value = value & (value - 1);
//    }
//    return count;
//}
//int main()
//{
//    int num, a;
//    scanf_s("%d", &num);
//    a=count_one_bits(num);
//    printf("%d", a);
//    return 0;
//}
//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//int main()
//{
//	int num, i, j;
//
//	scanf_s("%d", &num);
//	//原整数的二进制数列
//	printf("原整数的二进制数列为\n");
//		for (i = 0; i < 32; i++)
//		{
//			printf("%d ", num >> (32 -i - 1) & 1);
//		}
//	printf("\n");
//	//偶数
//	printf("偶数位为\n");
//	for (i = 0; i < 16; i++)
//	{	
//		printf("%d ", num>>(32 - 2 * i-1)&1);
//	}
//	printf("\n");
//	//奇数
//	printf("奇数位为\n");
//	for (i = 1; i < 17; i++)
//	{
//		printf("%d ",num>>(32 - 2 * i )&1 );
//	}
//
//	return 0;
//}
//判断两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
int main()
{
	int i,m, n,count=0;
	scanf_s("%d %d", &m, &n);
	for(i=0;i<32;i++)
	{
		if((n >> (32 - i - 1) & 1) !=( m >> (32 - i - 1) & 1))
			count++;
	}

	printf("%d", count);
}