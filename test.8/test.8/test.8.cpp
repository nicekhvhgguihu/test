
//#include<stdio.h>
////输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。
//int  main(void)
//{
//	int arr[10];
//	int i,sum=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//
//	}
//	sum = sum / 10.0;
//	int count=0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > sum)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//
//	
//}
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	printf("%o",x);
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	float b;
//	scanf("%d",&a);
//	b = 5.0 * (a - 32) / 9.0;
//	printf("%.2f",b);
//}
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	float y;
	if (x < 1)
	{
		y = x;
	}
	else if (1 <= x &&x < 10)
	{
		y = 2 * x - 1;
	}
	else
	{
		y = 3 * x - 11;
	}
	printf("%.2f",y);
}
