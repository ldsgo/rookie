#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS1
int find_n(int arr[][3],int k,int*row,int*col )//杨氏矩阵查找
{
	int x = 0;
	int y = *col - 1;
	while (x <= *row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}
void left_s(char* dest, int k)//左旋法一
{
	assert(k <= strlen(dest));
	char tmp = 0;
	int i;
	char* arr = dest;
	for (i = 0; i < k; i++)
	{	
		tmp = *arr;
		while (*dest)
		{
			*dest = *(dest+1);
			dest++;
		}
		*(dest - 1) = tmp;
		dest = arr;
	}
}
void reverse(char* dest, char* src)//逆序字符串
{
	assert(dest);
	assert(src);
	char tmp;
	while (dest < src)
	{
		tmp = *dest;
		*dest = *src;
		*src = tmp;
		dest++;
		src--;
	}
}
void left_s2(char* dest, int k)//左旋法二
{
	assert(dest);
	size_t len = strlen(dest);
	assert(k <= len&&k>=0);
	reverse(dest, dest +k-1);
	reverse(dest + k , dest + len - 1);
	reverse(dest, dest + len - 1);
}
int judge(char* dest, char* src)//判断是否经过旋转法一
{
	size_t len1 = strlen(dest);
		int i;
		for (i = 0; i < len1; i++)
		{
			if (strcmp(dest, src) == 0)
				return 1;
			left_s2(dest, i);
		}
		return 0;
}
int judge2(char* dest, char* src)//判断是否经过旋转法二
{
	size_t len1 = strlen(dest);
	size_t len2 = strlen(src);
	int i;
	if (len1 != len2)
		return 0;
	strncat(dest, dest,len1);
	char*tmp=strstr(dest, src);
	if (tmp != NULL)
	{
		return 1;
	}
	else
		return 0;
}
//int main()
//{
//	//杨氏矩阵
//	int k=6;
//	//int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	//int arr[3][3] = { {1,3,4},{2,4,5},{4,5,6} };
//	int x = 3;
//	int y = 3;
//	int ret = find_n(arr, k, &x, &y);
//	if (ret == 0)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标为[%d][%d]", x, y);
//	}
//	return 0;
//}

//int main()
//{
//	//左旋字符
//	char arr[] = "abcd";
//	left_s2(arr, 2);
//	printf("%s", arr);
//	return 0;
//}
int main()
{
	//判断是否经过旋转得来的字符串
	char s1[30] = "abcdef";
	char s2[] = "cdefab";
	int ret=judge2(s1,s2);
	if (ret == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
