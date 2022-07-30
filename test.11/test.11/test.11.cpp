//#include<stdio.h>
//double fact(int x);
//int main()
//{
//	int x;
//
//	scanf("%d",&x);
//	
//	printf("sum=%.5lf",fact(x));
//}
// double fact(int x)
//{
//	int i,j;
//	double sum= 1;
//	double d=0;
//	for (i = 1; i <= x; i++)
//	{
//		sum = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum = sum * j;
//		}
//		d += (1.0 / sum);
//		
//	}
//	return d;
//}
//#include <stdio.h>
//double fact(int n);
//int main()
//{
//    int s, i;
//    double sum = 0;
//    scanf("%d", &s);
//    for (i = 1; i <= s; i++)
//    {
//        sum += 1.0 / fact(i);
//    }
//    printf("sum=%.5lf", sum);
//    return 0;
//}
//double fact(int n)
//{
//    int i;
//    double item = 1;
//    for (i = 1; i <= n; i++)
//    {
//        item *= i;
//    }
//    return item;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int i,x=0;
//	for (i = 0; i < 100; i++)
//	{
//		scanf("%d",&arr[i]);
//		if (arr[i] == 0)
//		{
//			x = i - 1;
//			break;
//		}
//	}
//	int count_1 = 0, count_2 = 0, count_3 = 0;
//	for (i = 0; i <= x; i++)
//	{
//		if (arr[i] >= 85)
//		{
//			count_1++;
//		}
//		else if (60 <= arr[i] && arr[i] <= 84)
//		{
//			count_2++;
//		}
//		else if (arr[i] < 60)
//		{
//			count_3++;
//		}
//	}
//	printf(">=85:%d\n",count_1);
//	printf("60-84:%d\n", count_2);
//	printf("<60:%d\n", count_3);
//}
//#include<stdio.h>
//int main()
//{
//    int number_1[6][6], i, j, n, max = 0, i_1, j_1;
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &number_1[i][j]);
//            if (max < number_1[i][j])
//            {
//                max = number_1[i][j];
//                i_1 = i;
//                j_1 = j;
//            }
//        }
//    }
//    printf("%d %d %d", max, i_1 + 1, j_1 + 1);
//}
//#include<stdio.h>
//int main() {
//    int a;
//    for (a = -100; a <= 150; a += 5) {
//        printf("c=%d->f=%d\n", a, 32 + a * 9 / 5);
//    }
//    return 0;
//}