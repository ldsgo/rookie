#include<stdio.h>
#include<assert.h>
#include<string.h>
//模拟实现strchr
char* My_strchr(const char* arr, int a)
{
	assert(arr);
	while (*arr != 0)
	{
		if (*arr == a)
		{
			return (char*)arr;
		}
		else
			arr++;
	}
	return NULL;
}
//模拟实现strcmp
int My_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	while (*arr1 != '\0' || *arr2 != '\0')
	{
		if ((*arr1 - *arr2) == 0)
		{
			arr1++;
			arr2++;
		}
		else
			return *arr1 - *arr2;
	}
	return *arr1 - *arr2;
}
//模拟实现memcpy（无法进行重叠区域的拷贝操作）
void* my_memcpy(void* dest, void* src, size_t n)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (n--)
	{
		*((char*)dest)++ = *((char*)src)++;
	}
	return ret;
}
//模拟实现memmove
void* my_memmove(const void* dest, void* src, size_t n)
{
	assert(dest);
	assert(src);
  	char* ret =(char*) dest;
	if (dest <= src) {
		while (n--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		(char*)src += n-1;
		(char*)dest +=n-1;
		char* bet = (char*)dest;
		while (n--)
		{
			*((char*)dest)-- = *((char*)src)--;
		}
	}
	return ret;
}
int main()
{
	char arr[] = "abcdfghi";
	char brr[] = "abcdfghi";
	memmove(arr+2 , arr, 3);
	my_memmove(brr+2, brr, 3);
	printf("%s\n", arr);
	printf("%s\n", brr);

}