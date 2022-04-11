#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

void password(char a[],int sz)
{
	int j;
	for (j = 0; j < sz; j++)
	{
		scanf_s("%c", &a[j],2);
	}

}
int check(char a[],int sz)
{
	char i[5] = { '2','3','3','3','3'};
	int j=0;
	for (j = 0; j < sz; j++)
	{
		scanf_s("%c", &i[j], 2);
	}
	for (j = 0; j < sz; j++)
	{
		if (a[j] != i[j])
			return 0;
	
	}
	return 1;
}
int main()
{
	int j,ct,get;
	char p[5] = { '0'};

	int sz = sizeof(p) / sizeof(p[0]);
	password(p, sz);
	//for (j = 0; j < sz; j++)
	//{
	//	printf("%c", p[j]);
	//}
	printf("\n");
	for (ct = 0; ct < 3; ct++)
	{
		printf("ÇëÊäÈëÃÜÂë\n");
		get = check(p, sz);
		if (get == 1)
		{
			printf("ÃÜÂëÕýÈ·\n");
				break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
	return 0;
}