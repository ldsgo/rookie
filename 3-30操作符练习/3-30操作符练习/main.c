#include<stdio.h>
//���ز����������� 1 �ĸ���
//int  count_one_bits(unsigned int value)
//{
//    //�ʹ�
//    //int i;
//    //int count = 0;
//    //for (i = 0; i < 32; i++)
//    //{
//    //    if (1== 1&(value>>i))
//    //        count++;
//    //}
//    //����׷����
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
//��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//int main()
//{
//	int num, i, j;
//
//	scanf_s("%d", &num);
//	//ԭ�����Ķ���������
//	printf("ԭ�����Ķ���������Ϊ\n");
//		for (i = 0; i < 32; i++)
//		{
//			printf("%d ", num >> (32 -i - 1) & 1);
//		}
//	printf("\n");
//	//ż��
//	printf("ż��λΪ\n");
//	for (i = 0; i < 16; i++)
//	{	
//		printf("%d ", num>>(32 - 2 * i-1)&1);
//	}
//	printf("\n");
//	//����
//	printf("����λΪ\n");
//	for (i = 1; i < 17; i++)
//	{
//		printf("%d ",num>>(32 - 2 * i )&1 );
//	}
//
//	return 0;
//}
//�ж�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
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