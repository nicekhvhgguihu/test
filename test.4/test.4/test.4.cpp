//#include<stdio.h>
//#include<string.h>
////写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出
//void judge(char* arr, char* arr1,int sz,char arr2[])
//{
//	int i,j;
//	for (i = 0; i < sz; i++)
//	{
//		char u = *arr ++ ;
//		if (u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u')
//		{
//			*arr1++ = u;
//		}
//	}
//	int d = strlen(arr2);
//	int s = d;
//	for (i = 0; i < d; i++)
//	{
//		for (j = i+1; j <d; j++)
//		{
//			if (arr2[i] > arr2[j])
//			{
//				char imp = arr2[i];
//				arr2[i] = arr2[j];
//				arr2[j] = imp;
//			}
//			
//		}
//	}
//	arr2[d + 1] = '\0';
//	
//}
//int main()
//{
//	char arr[100] = "";
//	char arr1[50] = "";
//	gets_s(arr);
//	int sz = strlen(arr);
//	judge(arr, arr1, sz, arr1);
//	printf("%s", arr1);
//
//}
//#include<stdio.h>
////写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
//void switch_1(int x)
//{
//	int i;
//	int arr[4];
//	for (i = 0; i < 4; i++)
//	{
//		int b= x % 10;
//		x = x / 10;
//		arr[i] = b;
//	}
//	for (i = 3; i >= 0; i--)
//	{
//		printf("%d",arr[i]);
//		if (i != 0)
//		{
//			printf(" ");
//		}
//	}
//}
//int main(void)
//{
//	int x;
//	scanf("%d", &x);
//	switch_1(x);
//}
// 对数字和字符类型的统计
//#include<stdio.h>
//#include<string.h>
//void judge(char *arr,int sz)
//{
//	int i;
//	int count=0,z=0,d=0,w=0;
//	for (i = 0; i < sz; i++)
//	{
//		if ('a' <= *arr && *arr <= 'z'|| 'A' <= *arr && *arr <= 'Z')
//		{
//			arr++;
//			count++;
//		}
//		else if (*arr==' ')
//		{
//			arr++;
//			z++;
//		}
//		else if ('0'<= * arr&&*arr<='9')
//		{
//			arr++;
//			d++;
//		}
//		else
//		{
//			arr++;
//			w++;
//		}
//		
//	}
//	printf("%d %d %d %d",count,d,z,w);
//}
//int main(void)
//{
//	char arr[100];
//	gets_s(arr);
//	int sz = strlen(arr);
//	judge(arr,sz);
//}