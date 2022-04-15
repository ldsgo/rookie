#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char*a,char*b,int sz)
{
	int i,tmp;
	for(i = 0; i < sz; i++)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}
void bubbleqsort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
{
	int i,j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(void* e1, void* e2)
{
	return  * (int*)e1 -  * (int*)e2;
}
int cmp_f(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
struct MyStruct
{
	char* name;
	int  age;
};
int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct MyStruct*)e1)->name, ((struct MyStruct*)e2)->name);
}
int cmp_age(const void* e1, const void* e2)
{
	return (((struct MyStruct*)e1)->age) - (((struct MyStruct*)e2)->age);

}
int main()
{
	
	int arr[] = { 1,2,5,4 };
	float frr[] = { 3.0,7.0,5.0,8.0 };
	struct MyStruct s[3] = { {"zhangsan",10},{"lisi",50},{"texe",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubbleqsort(s, sz, sizeof(s[0]),cmp_name );

	return 0;
}