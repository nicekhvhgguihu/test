//#include<stdio.h>
//int main()
//{
//	int arr[20];
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int count = 0,sum=0;
//	float d = 0;
//	int* p = arr;
//	while (p < (arr + 20))
//	{
//		if (*p < 0)
//		{
//			count++;
//		}
//		else
//		{
//			sum += *p;
//			d++;
//		}
//		p++;
//	}
//	printf("%d\n",count);
//	printf("%.2f",sum/d);
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 10; i <= 1000; i++)
//	{
//		if (i % 2 == 0 && i % 3 == 0 && i % 7 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	int i,sum=0,j;
//	for (i = 2,j=1;j <= x; i += 3,j++)
//	{
//		sum += i;
//	}
//	printf("%d",sum);
//}
#include<stdio.h>
int fun( int x);
int main()
{
	int x;
	scanf("%d",&x);
	int ret=fun(x);
	printf("%d",ret);

}
int fun(int x)
{
	int a[200];
	int i,sum=0;
	for (i = 0; i < x; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < x; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
		}
	}
	return sum;
}