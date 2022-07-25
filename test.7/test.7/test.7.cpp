//将三个字符串进行排序
//#include<stdio.h>
//#include<string.h>
//void true_switch(char* (* arr3), int sz)
//{
//	
//	int i,j;
//	for (i = 0; i < sz; i++)
//	{
//		int b = 0;
//		for (j = b+1; j < 3; j++)
//		{
//			if ((*(arr3+b))[i] > (*( arr3 + j))[i])
//			{
//				b++;
//				char* p = (*(arr3+b));
//				(*(arr3+b)) = (*(arr3 + j));
//				(*(arr3 + j)) = p;
//			}
//		}
//	}
//}
//int main()
//{
//	char arr[10];
//	char arr1[10];
//	char arr2[10];
//	
//	int sz = strlen(arr);
//	gets_s(arr);
//	gets_s(arr1);
//	gets_s(arr2);
//	char* arr4[3] = { arr,arr1,arr2 };
//	true_switch(arr4,sz);
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n",arr4[i]);
//	}
//}
// 对后面数据的位移
////#include<stdio.h>
////void print(int arr[100], int g, int x)
////{
////	int arr1[50] = { 0 };
////	int i,j=0;
////	int* p = &arr[0];
////	int* d = &arr[x - g];
////	for (i = (x - g ); i <x; i++)
////	{
////		arr1[j++] =(*d)++;
////	}
////	for (i = 0; i < (x - g ); i++)
////	{
////		arr1[j++] =(*p)++;
////	}
////	for (i = 0; i < x; i++)
////	{
////		printf("%d",arr1[i]);
////		if (i != x - 1)
////		{
////			printf(" ");
////		}
////	}
////}
////int main()
////{
////	int x,i,g;
////	scanf("%d",&x);
////	int arr[100] = {0};
////	for (i = 0; i < x; i++)
////	{
////		scanf("%d",&arr[i]);
////	}
////	scanf("%d",&g);
////	print(arr,g,x);
////}
//#include<stdio.h>//实现两个数组，一个进行挑选出最后一个数，然后与另一个数组求按位异或为零的数，求出的就是位置
//int deal_with(int arr[100], int arr1[100]);//返回正确的位置
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	int arr[100];
//	int arr1[100];
//	int i;
//	for (i = 1; i <= x; i++)//对数组进行初始化
//	{
//		arr[i-1] = i;
//		arr1[i - 1] = i;
//	}
//	int ret=deal_with(arr, arr1);
//	printf("%d",ret);
//}
//int deal_with(int arr[100], int arr1[100])
//{
//
//}
#include"tesu.h"

int main()
{
	int arr[30];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	dlive(arr, 3);
}