#include<stdio.h>
#include<string.h>
#include<assert.h>
#define _CRT_SECURE_NO_WARNINGS 1
char* my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return ret;
}
char* my_strncpy(char* dest, const char* src, size_t n)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;
}
char* my_strcat(char* dest, char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return ret;
}
char* my_strncat(char* dest, char* src,size_t n)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (n--&&*src!='\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return ret;
}
char* my_strstr(const char* dest, const char* src)
{
	assert(dest);
	assert(src);
     char* ret = (char*)dest;
	 char* set = (char*)src;
	 if (!*src)
	 {
		 return	 (char*) dest;
	 }
	while (*dest)
	{
		dest = ret;
		src = set;
		while (*dest == *src&&*src)
		{
			dest++;
			src++;
		}
		if (!*src)
		{
			return ret;
		}
		ret++;
	}
	return NULL;
}
int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "abcdef";
	
	//strncpy(arr1, arr2,6);
	printf("%s",my_strstr(arr1, arr2));
	return 0;
}