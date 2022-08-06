//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	int b, c,i,sum=0,arr[100];
//	
//
//	for (b = 0; b < a; b++)
//	{
//		sum = 0;
//		scanf("%d", &c);
//		for (i = 0; i < c; i++)
//		{
//			scanf("%d",&arr[i]);
//		}
//		for (i = 0; i < c; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%d\n",sum);
//		if (b != (a - 1))
//		{
//			printf(" \n");
//		}
//	}
//}
//#include<stdio.h>
//#include<string.h>
//char* switch_1(char* arr, int sz)
//{
//	char* a = arr + sz-1;//10:27 8:55~
//	char arr1[100];
//	int i = 0;
//	while ((a - arr) >= 0)
//	{
//		arr1[i] = *a;
//		*a = '\0';
//		a--;
//		i++;
//
//	}
//	arr1[i] = '\0';
//	return arr1;
//}
//int main()
//{
//	char arr[100];
//	gets_s(arr);
//	int sz = strlen(arr);
//	char* p= switch_1(arr,sz);//错误的原因可能是出了函数，栈被删除了，导致p为null；
//	
//	printf("%s",p);
//}
//#include<stdio.h>
//#include<string.h>//文件结束符，而不是一定的数
//void switch_1(char (* arr)[100])
//{
//	int sz = 4;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n",arr+i);
//		if (i != (sz - 1))
//		{
//			printf(" \n");
//		}
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	int d = a;
//	getchar();
//	char arr[6][100] ;
//	int b = 4;
//	int i = 0;
//	while (a--)//3 2 1 
//	{
//		gets_s(arr[i]);
//		i++;//0 1 2
//
//	}
//	while (b--)
//	{
//		scanf("%s",&arr[i]);
//		i++;
//	}
//	int j;
//	for (j = 0; j < d; j++)
//	{
//		printf("%s\n", arr[j]);
//		printf(" \n");
//
//	}
//	
//	switch_1(&arr[2]);
//
//}
#include<stdio.h>
void sum(const char* a)
{

}
int main()
{
	char arr[100];
	sum(arr);
}