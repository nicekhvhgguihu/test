//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int i,sum=0;
//	double d = n;
//	while ( n--)
//	{
//		scanf("%d", &i);
//		sum += i;
//	}
//	printf("%d %.5lf",sum,sum/d);
//}
//#include<stdio.h>
//#include<malloc.h>
//int  foam(int* arr,int n);
//int main()
//{
//	int n,i;
//	scanf("%d",&n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	int ret=0;
//	if (arr == NULL)
//		return 0;
//	else
//	{
//		for (i = 0; i < n; i++)
//			scanf("%d", &arr[i]);
//		 ret=foam(arr,n);
//	}
//	printf("%d",ret);
//
//}
//int foam(int* arr,int n)
//{
//	int max = arr[0];
//	int min=arr[0];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	return max - min;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int arr[100][3];
//	int i, j;
//	int arr1[3] = {0};
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			arr1[j] += arr[i][j];
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d",arr1[i]);
//		sum += arr1[i];
//		printf(" ");
//	}
//	printf("%d",sum);
//}
//#include<stdio.h>
//
//long int mow(int a ,int b)
//{
//	long int c = a;
//	long int d = a;
//	int i;
//	for (i = 1; i < b; i++)
//		c *= d;
//	return c;
//}
//int main()
//{
//	int a=0, b=0;
//	scanf("%d %d",&a,&b);
//	printf("%ld", mow(a, b));
//}
//#include<stdio.h>
//void vid(float ji, float qi)
//{
//	if (ji > qi)
//	{
//		if (ji - qi > 0.05)
//			printf("worse\n");
//		else
//			printf("same\n");
//	}
//	else
//	{
//		if (qi - ji > 0.05)
//			printf("better\n");
//		else
//			printf("same\n");
//	}
//}
//int main()
//{
//	int n,c;
//	scanf("%d", &n);
//	float a, b;
//	c = n;
//	float ji;
//	float qi;
//	while (n--)
//	{
//		scanf("%f %f",&a,&b);
//		if (n == c - 1)
//			ji = b / a;
//		else
//		{
//			qi = b / a;
//			vid(ji, qi);
//		}
//
//
//
//		
//
//	}
//}
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	unsigned long long int n;
//	unsigned long long int d;
//	scanf("%lld",&n);
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			d = n/2;
//			printf("%lld/2=%lld\n",n,d);
//			
//		}
//		else
//		{
//			d = n * 3 + 1;
//			printf("%lld*3+1=%lld\n",n,d);
//			
//		}
//		n = d;
//	}
//	printf("End");
//}
//#include<stdio.h>
//int max(int* arr, int i)
//{
//	int j;
//	int max = arr[0];
//	for (j = 0; j <= i; j++)
//	{
//		if (max < arr[j])
//			max = arr[j];
//	}
//	return max;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a, b;
//	int i=0,count=0;
//	int arr[100];
//	while (n--)
//	{
//		scanf("%d %d",&a,&b);
//		if (90 <= a && a <= 140 && 60 <= b && b <= 90)
//		{
//			count++;
//		}
//		else
//		{
//			arr[i] = count;
//			count = 0;
//			i++;
//		}
//
//
//
//	}
//	arr[i] = count;
//	int ret=max(arr, i );
//	printf("%d",ret);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000];
//	char arr1[1000];
//	int i = 1;
//	while (~(scanf("%s", arr)))
//	{
//		int sz = strlen(arr);
//		char* pa = arr + sz-1;
//		int d = sz;
//		while (d--)
//		{
//			if (*pa != '0')
//			{
//				arr1[i] = *pa;
//				i++;
//			}
//			pa--;
//			//abc  d=3 2 1
//		}
//		if (*arr = '-')
//			arr1[0] = '-';
//	}
//}
//#include<stdio.h>
//#include<malloc.h>
//int septinary_number(int i, int** arr);
//int novenary(int i, int** arr);
//int main()
//{
//	int i =10;
//	while (1)
//	{
//		
//		
//		int *septinary__number ;
//		int* novenary1 ;
//		int sz=septinary_number(i, &septinary__number);
//		int sz1=novenary(i, &novenary1);
//		
//	
//		if (sz==sz1&&sz1==3&&septinary__number[0]== novenary1[2]&& septinary__number[2]== novenary1[0])
//		{
//			printf("%d\n",i);
//			printf("%d%d%d\n", septinary__number[2], septinary__number[1], septinary__number[0]);
//			printf("%d%d%d", novenary1[2], novenary1[1], novenary1[0]);
//			free(septinary__number);
//			free(novenary1);
//			novenary1 = NULL;
//			septinary__number = NULL;
//			break;
//		}
//		i++;
//		free(septinary__number);
//		free(novenary1);
//	}
//	
//}
//int septinary_number(int i, int** arr)
//{
//	
//	int d, a,f=i,count=0;
//	while (f >= 7)
//	{
//		f = f/7;
//		
//		count++;
//	}
//	*arr = (int*)malloc(sizeof(int) * (count+1));
//	int* uzi = *arr;
//	if (*arr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		d = i % 7;
//		*uzi++ = d;
//		
//		a = i / 7;
//		
//		while (a >= 7)
//		{
//			
//			d = a % 7;
//			a = a / 7;
//			*uzi++ = d;
//			
//		}
//		*uzi = a;
//		
//		
//		return count+1;
//	}
//}
//	
//		
//	
//
//int novenary(int i, int** arr)
//{
//	int d, a, f = i, count = 0;
//	while (f >= 9)
//	{
//		f = f / 9;
//
//		count++;
//	}
//	*arr = (int*)malloc(sizeof(int) * (count + 1));
//	int* uzi = *arr;
//	if (*arr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		d = i % 9;
//		*uzi++ = d;
//
//		a = i / 9;
//		
//		while (a >= 9)
//		{
//			
//			d = a % 9;
//			a = a / 9;
//			*uzi++ = d;
//
//		}
//		*uzi = a;
//		
//
//		return count+1;
//	}
//}
//int i,j;
	//scanf("%d",&i);
	//int* septinary__number;
	//int ret = novenary(i, &septinary__number);//函数的功能将大于七的数字转换为七进制
	//if (ret != 0)
	//{
	//	for (j = ret; j >= 0; j--)
	//	{
	//		printf("%d", septinary__number[j]);
	//		
	//	}
	//	free(septinary__number);
	//	septinary__number == NULL;
	//}
//#include<stdio.h>
//int main() {
//    int n, n7, n9, s9, thisn9;
//    for (n = 100; n <= 999; n++) {
//        s9 = 0;
//        n7 = 100 * (n / 7 / 7) + 10 * (n / 7 % 7) + n % 7;//求n的7进制表达形式
//        n9 = 100 * (n / 9 / 9) + 10 * (n / 9 % 9) + n % 9;//求n的9进制表达形式
//        thisn9 = n9;
//        while (thisn9) {
//            s9 = s9 * 10 + thisn9;//s9为n9的倒序形式（好像碰到尾数有0的不适用）
//            thisn9 /= 10;
//        }
//        if (n7 == s9 && n7 < 1000 && n9 < 1000) {
//            printf("%d", n);
//            printf("%d", n7);
//            printf("%d", n9);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 248;
//	int b = 503;
//	int c = 305;
//	printf("%d\n",a);
//	printf("%d\n", b);
//	printf("%d", c);
//}
#include<stdio.h>
