//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		int x;
//		scanf("%d", &x);
//		int i;
//		int arr[100];
//		int sum = 0;
//		if (x == 0)
//		{
//			break;
//		}
//		for (i = 0; i < x; i++)
//		{
//			scanf("%d",&arr[i]);
//		}
//		for (i = 0; i < x; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%d\n",sum);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int x,n=0;
//	scanf("%d",&x);
//	while (n < x)
//	{
//		n++;
//		int i,g,arr[100],sum=0;
//		scanf("%d",&g);
//		for (i = 0;i < g; i++)
//		{
//			scanf("%d",&arr[i]);
//		}
//		for (i = 0; i < g; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%d\n",sum);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (a < 2)
//	{
//		a++;
//		int b;
//		scanf("%d",&b);
//		int i,arr[100],sum=0;
//		for (i = 0; i < b; i++)
//		{
//			scanf("%d",&arr[i]);
//		}
//		for (i = 0; i < b; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%d\n",sum);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (a < 2)
//	{
//		
//		int b, c;
//		scanf("%d %d",&b,&c);
//		printf("%d",b+c);
//		if (a != 1)
//		{
//			printf("\n  \n");
//		}
//		a++;
//	}
//}
#include<stdio.h>
#include<assert.h>
char* strcpy(const char* a, const char* b);
int main()
{
	const char* a = "abcdef";
	const char* b = "def";
	char *c=strcpy(a,b);//寻找子集
	if (c==NULL)
	{
		printf("没有这个子集的存在");
	}
	else
	{
		printf("%s",c);
	}
}
char* strcpy(const char* a, const char* b)
{
	assert(a && b);
	char* c = (char*)a;
	char* d = (char*)b;
	
	while (*c)
	{
		char* e = c;
		while (*e == *d)
		{
			e++,d++;
		}
		c++;

	}
}