//输入一个数判断是否是素数
//#include<stdio.h>
//#include<math.h>
//void judeg(int x)
//{
//	int b = sqrt(x);
//	int i;
//	for (i = 2; i <= b; i++)
//	{
//		if (x % i == 0)
//		{
//			printf("not prime");
//			break;
//		}
//		if (i == b)
//		{
//			printf("prime");
//		}
//
//	}
//}
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	judeg(x);
//}
////对二维数组的转置
//#include<stdio.h>
//void switch_1(int arr[3][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d", arr[j][i]);
//			if (j == 2)
//			{
//				printf("\n");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//	}
//
//}
//int main(void)
//{
//	int arr[3][3] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//
//	switch_1(arr);
//}
//写一函数，使输入的一个字符串按反序存放，在主函数中输入并输出反序后的字符串（不包含空格）。
//#include<stdio.h>
//#include<string.h>
//void switch_2( char arr[20], int sz)
//{
//	char p[20];
//	int i, j;
//	j = --sz;
//	for (i = 0; i <= sz; i++)
//	{
//		p[i] = arr[j--];
//	}
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c",p[i]);
//	}
//}
//int main()
//{
//	char arr[20] = "";//必须明确数组arr的内存多少，不然会出现内存加载不多，输入的数据过大，导致数组被撑大
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	//printf("%d",sz);
//
//	switch_2(arr,sz);
//}
//写一函数，将两个字符串连接
//#include<stdio.h>
//#include<string.h>
//void lianjie(int sz3, char *arr1,char* sz,int sz1,char* arr)
//{
//	arr = sz;
//	int i;
//	for (i = 0; i <= sz1; i++)
//	{
//		if (i < sz1)
//		{
//			*(++arr) = *arr1++;
//		}
//		else
//		{
//			*(++arr) = '\0';
//
//		}
//
//	}
//	
//	
//	
//}
//int main(void)
//{
//	char arr[30]="";
//	char arr1[30]="";
//	gets_s(arr);
//	int sz = strlen(arr);//计算arr里面数据的大小
//	gets_s(arr1);
//	int sz1 = strlen(arr1);//计算arr1里面数据的大小
//	lianjie(sz,arr1,&arr[--sz], sz1,arr);
//	
//	printf("%s",arr);
//}