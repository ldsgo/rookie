#include<stdio.h>
#include<string.h>
#include<search.h>
#include<stdlib.h>
//函数指针的使用
//char* my_strcpy(char* dest, const char* src);
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfarr[4])(char*, const char*) = my_strcpy;
//qsort 使用练习
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_f(const void* e1, const void* e2)
{
	return (int)( * (float*)e1 - *(float*)e2);
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
	return (((struct MyStruct*)e1)->age)-(((struct MyStruct*)e2)->age);

}
int main()
{
	int i;
	int arr[] = { 1,2,5,4 };
	float frr[] = { 3.0,7.0,5.0,8.0 };
	struct MyStruct s[3] = { {"zhangsan",10},{"lisi",50},{"texe",40}};
	qsort(s,3,sizeof(s[0]),cmp_age );
	for (i = 0; i < 4; i++)
	{
		printf("%f ", frr[i]);
	}
	return 0;
}