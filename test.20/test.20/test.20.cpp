//#include<stdio.h>
//void find(int(* arr)[5]);
//int main()
//{
//	int arr[5][5];
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	find(arr);
//}
//void find(int(*arr)[5])
//{
//	int j = 0;
//	int i,a,max,count=0;
//	
//	while (1)
//	{
//		max = *arr[j];
//		count = 0;
//		 for (a = 1; a < 5; a++)
//		 {
//			 if (max < *(arr[j]+a))
//			 {
//				 max = *(arr[j]+a);
//				 count = a;
//			 }
//			 
//		 }
//		 
//		 
//		 
//		 for (i = 0; i < 5; i++)
//		 {
//			 if (max> arr[i][count])
//			 {
//				 break;
//			 }
//		 }
//		 if (i == 5)
//		 {
//			 printf("%d %d %d",j+1,count+1,max);
//			 break;
//		 }
//		 j++;
//		 if (j == 5)
//		 {
//			 printf("not found");
//			 break;
//		 }
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b,tmp,count=0;
//	scanf("%d %d",&a,&b);
//	int arr[100][100];
//	int arr1[100];
//	int i, j;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d",&arr[i][j]);
//			if (i > 0 && i < a - 1 && j>0 && j < b - 1)
//			{
//				arr1[count] = arr[i][j];
//				count++;
//			}
//		}
//	}
//	count = 0;
//	int d ;
//	for (i = 0; i < a; i++)
//	{
//		d = 0;
//		for (j = 0; j < b; j++)
//		{
//			if (i > 0 && i < a - 1 && j>0 && j < b - 1)
//			{
//				if (i == 1)
//				{
//					arr
//				}
//				
//			}
//		}
//	}
	/*for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("%d",arr[i][j]);
			
			if (j == b - 1)
			{
				printf("\n");
			}
			else
			{
				printf(" ");
			}
		}
	}*/
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	int i, j;
//	int arr[100][100];
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int count = 0;
//	while (1)
//	{
//		for (i = 0; i < a; i++)
//		{
//			printf("%d", arr[i][count]);
//			if (i != a - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//		count++;
//		if (count == b)
//		{
//			break;
//		}
//	}
//}
//#include<stdio.h>
//int mo(int k);
//int main()
//{
//	int a,k;
//	scanf("%d",&a);
//	while ((scanf("%d",&k), a--))
//	{
//		getchar();
//		int ret = mo(k);
//		printf("%d",ret);
//	}
//}
//int mo(int k)
//{
//	
//}
//#include<stdio.h>
//int main()
//{
//	long int a, b,c;
//	scanf("%ld %ld",&a,&b);
//	if (a < b)
//	{
//		long int tmp = b;
//		b = a;
//		a = tmp;
//
//	}
//	while (a % b )
//	{
//		c = a;
//		a = b;
//		b = c % b;
//
//	}
//	printf("%d", b);
//}
#include<stdio.h>
int bit(int n, int m, int t)
{
	n=n << t;//	  000000000000001000
	//			000000000000000001
	m = m >> t;// 000000000000010
	int d = 1;//  000000000000000001
	m = m & d;//00000000000
	m = m << t;
	return n+m;

}
int main()
{
	int n, m, i, t;
	scanf("%d %d %d %d",&n,&m,&i,&t);
	while (t--)
		printf("%d", bit(n, m, i));
}
//#include <iostream>
//using namespace std;
//
//int bitManipulation1(int n, int m, int i) {
//n=n >> i;
//	m = m >> i;
//	return (n | m) << i;
//}
//
//int main() {
//	int n, m, i, t;
//	cin >> t;
//	while (t--) { 
//		cin >> n >> m >> i;
//		cout << bitManipulation1(n, m, i) << endl;
//		int ret = bitManipulation1(n, m, i);
//		printf("%d",ret);
//	}
//	return 0;
//}