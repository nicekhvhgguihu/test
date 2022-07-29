#include<stdio.h>
void fun(int arr1[10], int arr[10])
{
	int i,j;
	int tmp = arr1[0];
	for (i = 1; i < 10; i++)
	{
		if (tmp > arr1[i])
		{
			tmp = arr[i];
			j = i;
		}
	}
	int f = arr[j];
	arr[j] = arr[9];
	arr[9] = f;
	for (i = 0; i < 10; i++)
	{
		printf("%d",arr[i]);
		if (i != 9)
		{
			printf(" ");
		}
	}

}
int main()
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	int arr1[10];
	
	for (i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			arr1[i] = -arr[i];
		}
		else
		{
			arr1[i] = arr[i];
		}
	}
	fun(arr1, arr);
}
//#include<stdio.h>
//double fun()
//{
//	int i, j;
//	double x=1,f=0;
//	for (i = 1; i <= 30; i++)
//	{
//		x = 1;
//		for (j = 1; j <= i; j++)
//		{
//			x = x * j;
//			
//		}
//		f += x;
//	}
//	
//	return f;
//}
//int main()
//{
//	double x = fun();
//	printf("%.2e\n",x);
//	//printf("%d",x);
//}
//#include<stdio.h>
//int main()
//{
//    int i;
//    double j = 1, sum = 0;
//    for (i = 1; i <= 30; i++)
//    {
//        j = j * i;
//        sum = sum + j;
//    }
//    printf("%.2e\n", sum);
//
//    return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100];
//
//	gets_s(arr);
//	int sz = strlen(arr);
//	int i,count_a=0,count_k=0,count_s=0,count_q=0;
//	for (i = 0; i < sz; i++)
//	{
//		if (('a' <= arr[i] && arr[i] <= 'z')||('A'<=arr[i]&&arr[i]<='Z'))
//		{
//			count_a++;
//		}
//		else if (arr[i] == ' ')
//		{
//			count_k++;
//		}
//		else if ('1' <= arr[i] && arr[i] <= '9')
//		{
//			count_s++;
//		}
//		else
//		{
//			count_q++;
//
//		}
//	}
//	printf("%d\n",count_a);
//	printf("%d\n",count_k);
//	printf("%d\n",count_s);
//	printf("%d",count_q);
//
//}
//#include<stdio.h>
//
//
//
//void main()
//
//{
//
//    char str;
//
//    int i;
//
//    int zimu, kongge, shuzi, qita;
//
//
//
//    i = 0;
//
//    zimu = kongge = shuzi = qita = 0;
//
//
//
//    while ((str = getchar()) != '\n')
//
//    {
//
//        if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
//
//        {
//
//            zimu++;
//
//        }
//
//        else if (str == ' ')
//
//        {
//
//            kongge++;
//
//        }
//
//        else if (str >= '0' && str <= '9')
//
//        {
//
//            shuzi++;
//
//        }
//
//        else
//
//        {
//
//            qita++;
//
//        }
//
//    }
//
//
//
//    printf("%d\n%d\n%d\n%d\n", zimu, kongge, shuzi, qita);
//
//}
//#include<stdio.h>
//void fun_1(int a, int b)
//{
//	int i = (a > b ? a : b);
//	int j = (a > b ? b : a);
//	int f = i % j;
//	while (f != 0)
//	{
//		int d = j % f;
//		j = f;
//		f = d;
//
//	}
//	printf("%d\n",j);
//}
//void fun_2(int a, int b)
//{
//	int i;
//	for (i = (a > b ? a : b); i <= a * b; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d\n",i);
//			break;
//		}
//	}
//}
//int main() 
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	fun_1(a, b);
//	fun_2(a, b);
//}