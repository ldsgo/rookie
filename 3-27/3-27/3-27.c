#include<stdio.h>
#include<math.h>
//쳲��������еݹ�ͷǵݹ�д��
//int main()
//{	
//	int n;
//	int p = 1;
//	int b = 1;
//	int c = 1;
//	scanf_s("%d", &n);
//	while (n > 2)
//	{
//		p = b + c;
//		b = c;
//		c = p;
//		n--;
//	}
//	printf("%d", p);
//	return 0;
//}
//int Fibonacci(int n)
//{
//
//	if (n > 2)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//	return 1;
//}
//int main()
//{
//	int n,p;
//	scanf_s("%d", &n);
//	p = Fibonacci(n);
//	printf("%d", p);
//	return 0;
//}
//n^k�ĵݹ�ʵ��
//int power_caculation(int n, int k)
//{
//	if (k >=1)
//	{
//		k--;
//		return n * power_caculation(n, k);
//	}
//	return 1;
//}
//int main()
//{
//	int n=0, k=0,a;
//	scanf_s("%d %d", &n, &k);
//	a = power_caculation(n, k);
//	printf("%d", a);
//	return 0;
//}
//����������ֵĺ�
//int DigitSum(int n)
//{
//
//	if (n > 9)
//	{   
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//int main()
//{
//	unsigned int n;
//	int m;
//	scanf_s("%d", &n);
//	 m=DigitSum(n);
//	printf("=%d", m);
//	 return 0;
//}
int my_strlen(char* x)
{
	if (*x != '\0')
	{
		return 1 + my_strlen(x + 1);
	}
	else
	{
		return 0;
	}
}
void reverse_string(char* str)
{
	int len = my_strlen(str);

}

int main()
{
	char ch1[] = "abcedf";
	
	reverse_string(ch1);
}