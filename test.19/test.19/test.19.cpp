//#include<stdio.h>
//int main()
//{
//	int n, gy, dy, z = 0, i = 0;
//	scanf("%d",&n);
//	while (n>0)
//	{
//		scanf("%d %d",&gy,&dy);
//		n--;//相当于n=n-1
//		if (dy >= 60 && dy <= 90 && gy >= 90 && gy <= 140)
//		{
//			z++;//先当于z=z+1
//		}
//		else
//		{
//			z = 0;
//		}
//		
//	}
//	printf("%d", z);
//}
//#include<stdio.h>
//#include<malloc.h>
//void print(char *ret ,int count,int a,int b);
//int main(void)
//{
//	int a=1, b=1,count=1;
//	while (1)
//	{
//		scanf("%d %d",&a,&b);
//		if (a == 0 && b == 0)
//		{
//			break;
//		}
//		char* ret=(char *)malloc(a * b * sizeof(char));
//		if (ret == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			int i, j;
//			
//			for (i = 0; i < a; i++)
//			{
//				
//				for (j = 0; j < b; j++)
//				{
//					getchar();
//					scanf("%c",(ret+i*a+j));
//
//				}
//			}
//		}
//		//print(ret,count,a,b);
//		count++;
//		free(ret);
//		ret=NULL;
//
//	}
//
//}
//void print(char* ret, int count,int a,int b)
//{
//	int c = 0;
//	int d = 0;
//	int i, j;
//	if (c - 1 >= 0&&d-1>=0)
//	{
//		for (i = c - 1; i <= c + 1; i++)
//		{
//			for (j = d - 1; j <= d + 1; j++)
//			{
//				if(*(ret+i*b+j))
//			}
//		}
//	}
//}
//#include <stdio.h>
//void Minesweeper(int x, int y);//轰炸法
//
//
//void Sweepmine(int x, int y);//排雷法
//
//
//int    X, Y, M, N = 0;
//int    num_mine, num_safe; //分别记录雷快的数目，和安全块的数目
//int    num = 1;
//char    b[100][100];
///*-------------------------------------------------------------*/
//int main()
//{
//    while (scanf("%d%d", &X, &Y) && !(X == 0 && Y == 0))
//    {
//        num_mine = 0; num_safe = 0;
//        for (int i = 0; i < X; i++)
//        {
//            getchar(); /*clear data buffer cache*/
//            for (int j = 0; j < Y; j++)
//            {
//                scanf("%c", &b[i][j]);
//                if (b[i][j] == '.')
//                {
//                    b[i][j] = '0';
//                    num_safe++;
//                }
//                else
//                    num_mine++;
//            }
//        }
//        N++; /*the token of field;*/
//        if (num_mine <= num_safe) //判断用哪种方法
//        {
//            for (int i = 0; i < X; i++)
//                for (int j = 0; j < Y; j++)
//                    if (b[i][j] == '*')
//                        Minesweeper(i - 1, j - 1);
//            //printf( "Minesweeper!\n" );
//        }
//        else {
//            for (int i = 0; i < X; i++)
//                for (int j = 0; j < Y; j++)
//                    if (b[i][j] != '*')
//                        Sweepmine(i - 1, j - 1);
//            //printf( "Sweepmine!\n" );
//        }
//
//
//        printf("Field #%d:\n", N);
//        for (int i = 0; i < X; i++)
//            for (int j = 0; j < Y; j++)
//            {
//                printf("%c", b[i][j]); if ((j + 1) % Y == 0)
//                    printf("\n");
//            }
//        printf("\n");
//    }
//}
//
//
///*-------------------------------------------------------------*/
//void Minesweeper(int x, int y)
//{
//    for (int i = x; i <= x + 2; i++)
//        for (int j = y; j <= y + 2; j++)
//            if (i >= 0 && i < X && j >= 0 && j < Y && b[i][j] != '*')
//                b[i][j] += 1;
//    return;
//}
//
///*-------------------------------------------------------------*/
//void Sweepmine(int x, int y)
//{
//    for (int i = x; i <= x + 2; i++)
//        for (int j = y; j <= y + 2; j++)
//            if (i >= 0 && i < X && j >= 0 && j < Y && b[i][j] == '*')
//                b[x + 1][y + 1] += 1;
//    return;
//}
#include<stdio.h>
int main()
{
	int a; int arr[100][100];
	int d = 1,count=0,f;
	while (~(scanf("%d", &a)))
	{
		int i,j;
		d = 1;
		for (i = 0; i < a; i++)
		{
			count++;
			f = i;
			for (j = 0; j < count; j++)
			{
				
				arr[f--][j] = d;
				d++;
				if (i == 0 && j != 0)
				{
					break;
				}
			}
		}
		count = a;
		for (i = 0; i < a; i++)
		{
			
			for (j = 0; j <count; j++)
			{
				
				
				printf("%d",arr[i][j]);
				if (j != count - 1)
				{
					printf(" ");
				}

				if (j == (count - 1))
				{
					printf("\n");
				}
				
				
			}
			count--;
		}


	}
}