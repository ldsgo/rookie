#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

void set_password(char a[], int sz)
{
	gets_s(a, 20);
}
void check(char a[],char b[], int sz)
{
	int ct;
	for (ct = 0; ct < 3; ct++)
	{
		printf("ÇëÊäÈëÃÜÂë\n");
		gets_s(b, 20);
		if (strcmp(b, a) == 0)
		{
			printf("ÃÜÂëÕıÈ·\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
}
int search(int a[], int sz, int x)
{
	int left = sz;
	int right = 0;
	int mid = 0;
	while (left >= right)
	{
		mid = (left + right) / 2;
		if (x == a[mid])
		{
			return mid;
		}
		else if (x > a[mid])
		{
			right = mid+1;
		}
		else
		{
			left = mid-1;
		}
	}
	return -1;
}
int main()
{
	//ÃÜÂëÊäÈë
	/*char  j[20],p[20];
	set_password(p,20);
	check(p, j, 20);*/
	//ÕÛ°ë²éÕÒÓĞĞòÊı×é(ĞŞÕı°æ)
	int a[10] = { 0,2,4,8,12,15,47,58,68,100 };
	int sz = sizeof(a) / sizeof(a[0]);
	int x,b;
	scanf_s("%d", &x);
	b=search(a,sz,x);
	printf("%d", b);
	return 0;
}