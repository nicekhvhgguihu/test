//#include<stdio.h>
//int  judeg(int i)
//{
//	long long  a=i;
//	int count = 1;
//	while (a!= 1)
//	{
//		if (a % 2 == 0)
//		{
//			a = a / 2;
//			count++;
//		}
//		else
//		{
//			a = a * 3 + 1;
//			count++;
//		}
//	}
//	return count;
//}
//int judeg_1(int* arr, int sz);
//int main()
//{
//	int a, b,t;
//	while (~(scanf("%d %d", &a, &b)))
//	{
//		if (a > b)
//		{
//			t = a;
//			a = b;
//			b = t;
//		}
//		int arr[10000000] = {0};
//		int i, c = 0;
//		for (i = a; i <= b; i++)
//		{
//			arr[c] = judeg(i);
//			c++;
//		}
//		int sz = b-a;
//		
//		int ret=judeg_1(arr,sz);
//		printf("%d %d %d\n",a,b,ret);
//	}
//
//}
//int judeg_1(int* arr, int sz)
//{
//	int max = *arr;
//	int i;
//	for (i = 0; i <= sz; i++)
//	{
//		if (max < *(++arr))
//		{
//			max = *arr;
//		}
//	}
//	return max;
//}
#include<stdio.h>
struct st
{
	double a;
	char b;
};
void print(const struct st* s)
{
}
int main()
{
	struct st s = { 0 };
	print(&s);
	
}