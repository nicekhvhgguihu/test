//输入一个数判断是否是素数
#include<stdio.h>
#include<math.h>
void judeg(int x)
{
	int b = sqrt(x);
	int i;
	for (i = 2; i <= b; i++)
	{
		if (x % i == 0)
		{
			printf("not prime");
			break;
		}
		if (i == b)
		{
			printf("prime");
		}

	}
}
int main()
{
	int x;
	scanf("%d",&x);
	judeg(x);
}
//对二维数组的转置
#include<stdio.h>
void switch_1(int arr[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", arr[j][i]);
			if (j == 2)
			{
				printf("\n");
			}
			else
			{
				printf(" ");
			}
		}
	}

}
int main(void)
{
	int arr[3][3] = { 0 };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	switch_1(arr);
}
