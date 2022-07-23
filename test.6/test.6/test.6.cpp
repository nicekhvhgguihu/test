//题目描述
//输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
//#include<stdio.h>
//void input(int *arr)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",arr++);
//	}
//}
//void deal_with(int arr[10])
//{
//	int tmp = arr[0];
//	int count = 0;
//	int tmc = arr[9];
//	int count_1 = 0;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (tmc < arr[i])
//		{
//			tmc = arr[i];
//			count_1 = i;
//		}
//		if (tmp > arr[i])
//		{
//			tmp = arr[i];
//			count = i;
//		}
//		
//	}
//	arr[count_1] = arr[9];
//	arr[9] = tmc;
//	arr[count] = arr[0];
//	arr[0] = tmp;
//
//}
//void print(int *arr)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d",*arr++);
//		if (i != 9)
//		{
//			printf(" ");
//		}
//	}
//
//}
//int main()
//{
//	int arr[10];
//	input(arr);
//	deal_with(arr);
//	print(arr);
//}


//#include<stdio.h>
////输入三个整数，按由小到大的顺序输出。
//void rank(int a, int b, int c)
//{
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("%d %d %d",c,b,a);
//		}
//		else
//		{
//			if (a > c)
//			{
//				printf("%d %d %d", b, c, a);
//			}
//			else
//			{
//				printf("%d %d %d", b, a, c);
//			}
//		}
//	}
//	else
//	{
//		if (a > c)
//		{
//			printf("%d %d %d", c, a, b);
//		}
//		else
//		{
//			if (c > b)
//			{
//				printf("%d %d %d", a, b, c);
//			}
//			else
//			{
//				printf("%d %d %d", a, c, b);
//			}
//		}
//	}
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d",&a,&b,&c);
//	rank(a,b,c);
//	
//	//0010
//	//0011
//}
//电报加密

//#include<stdio.h>
//int main()
//{
//	char x = 'a';
//	int a = x+1;
//	char b = a;
//	printf("%d",a);
//	printf("%c", b);
//}
//#include<stdio.h>
//#include<string.h>
//void judge(char arr[50], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		if ('a' <= arr[i] && arr[i] < 'z')
//		{
//			char a = arr[i];
//			int b = a + 1;
//			a = b;
//
//
//			arr[i] = a;
//		}
//		else if (arr[i] == 'z')
//		{
//			arr[i] = 'a';
//		}
//	}
//	printf("%s",arr);

//}
//int main()
//{
//	char arr[50];
//	gets_s(arr);
//	int sz = strlen(arr);
//	judge(arr, sz);
//}
//输入三个字符串，按由小到大的顺序输出
//#include<stdio.h>
//#include<string.h>
//void judge(char *(* arr3)[20])
//{
//	
//}
//int main()
//{
//	char arr[20];
//	char arr1[20];
//	char arr2[20];
//	gets_s(arr);
//	gets_s(arr1);
//	gets_s(arr2);
//	int sz = strlen(arr);
//	char* arr3[3][20] = { arr,arr1,arr2 };
//	judge(arr3);
//}
////
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[3][128], tmp[128];
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%s", a[i]);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        for (j = i + 1; j < 3; j++)
//        {
//            if (strcmp(a[i], a[j]) > 0)
//            {
//                memset(tmp, 0, sizeof(tmp));
//                strcpy(tmp, a[i]);
//                strcpy(a[i], a[j]);
//                strcpy(a[j], tmp);
//            }
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        printf("%s\n", a[i]);
//    }
//    return 0;
//}