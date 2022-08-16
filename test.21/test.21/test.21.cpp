//#include<stdio.h>
//int bitManipulation2(int n, int i) {
//	// 在此处补充你的代码
//	int nx = 1; int a = n;
//	nx=nx << i;
//	a =a& nx;
//	if (a == 0)
//	{
//		return n + nx;
//	}
//	else
//	{
//		return n - nx;
//	}
//}
//int main()
//{
//	int n, i;
//	scanf("%d %d",&n,&i);
//	int ret=bitManipulation2(n, i);
//	printf("%d",ret);
//}
//#include<stdio.h>
//int bitManipulation3(int n, int i) {
//	// 在此处补充你的代码
//	unsigned int nx ; int a; int b = i; unsigned int sum = n; int c = i;//1000 0100 0100 1011 0000 0000 0000
//	//0001 0000 0000 0000
//	while (c--)
//	{
//		nx = 1;
//		a = n;
//		a = a >> b;
//		a=a&nx;
//		if (a == 0)
//		{
//			sum += (nx<<b);
//		}
//		else
//		{
//			sum -= (nx<<b);
//		}
//		b++;
//
//
//
//	}
//	int sum_1 = sum;
//	return sum_1;
//}
//int main()
//{
//	int n, i;
//	scanf("%d",&n,&i);
//	int ret=bitManipulation3(n,i);
//	printf("%d",ret);
//	
//}
//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = 0b10000000000000000000000000000001;
//	int c = -1;
//	printf("%d",a&c);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char aee[255];
//	
//	int sz = strlen(aee);
//	int i=0;
//		while (aee[i++] = getchar() != '\n')
//		{
//
//		}
//	char* a = aee;
//	int count = 0;
//	while (sz--)
//	{
//		if ('0' <= *a && *a < '9')
//		{
//			count++;
//		}
//		a++;
//	}
//	printf("%d",count);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100000];
//	int i = 0;
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	arr[i] = '\0';
//	int sz = strlen(arr);
//	char* a = arr;
//	char* b = arr;
//	int count = 0;
//	int j;
//	while (1)
//	{
//		b = arr;
//		count = 1;
//		for (j = 0; j < sz; j++)
//		{
//			if (a != b && *a == *b)
//			{
//				count++;
//			}
//			b++;
//			if (count > 1)
//			{
//				break;
//			}
//		}
//		
//		if (j == sz)
//		{
//			printf("%c",*a);
//			break;
//		}
//		a++;
//		if (*a == '\0')
//		{
//			printf("no");
//			break;
//		}
//		
//	}
//
//
//}
//#include <stdio.h>
//int main() 
//{
//	char a, b;
//	a = getchar();
//	b = getchar();
//	putchar(a);
//	putchar(b);
//	
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	char play1[10];
//	char play2[10];
//	while (scanf("%s %s", play1, play2), n--)
//	{
//		int a = strlen(play1);
//		int b = strlen(play2);
//		if (play1[0] == play2[0])
//		{
//			printf("Tie\n");
//		}
//		else if (a==8 )
//		{
//			if(b==5)
//				printf("Player1\n");
//			else
//				printf("Player2\n");
//		}
//		else if ( a == 5)
//		{
//			if(b==8)
//				printf("Player2\n");
//			else
//				printf("Player1\n");
//		}
//		else
//		{
//			if (b == 8)
//			{
//				printf("Player1\n");
//			}
//			else
//			{
//				printf("Player2\n");
//			}
//		}
//		
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char string[100];
//	char ch;
//	int i = 0,j;
//	char string1[100][200];
//	int size[10];
//	int count = 0;
//	int w=0;
//	while (1)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			
//			if (ch != ' ')
//			{
//				string[i] = ch;
//			}
//			
//			if (ch == ' ')
//			{
//			again:
//				string[i] = '\0';
//				for (j = 0; j <= i; j++)
//				{
//					string1[count][j] = string[j];
//				}
//				size[count] = strlen(string);
//				count++;
//				i = 0;
//			
//				break;
//			}
//			i++;
//		}
//		if (ch == '\n')
//		{
//			w++;
//			if(w==1)
//				goto again;
//			break;
//		}
//	}
//	int max = size[0];
//	int min = size[0];
//	int f=0,h=0;
//	for (j = 0; j < count; j++)
//	{
//		if (max < size[j])
//		{
//			max = size[j];
//			f = j;
//		}
//		if (min > size[j])
//		{
//			min = size[j];
//			h = j;
//		}
//	}
//	printf("%s\n",string1[f]);
//	printf("%s", string1[h]);
//}
//#include<stdio.h>
//int main()
//{
//	char string[200];
//	char ch;
//	int i=0;
//	while ((ch = getchar()) != '\n')
//	{
//		string[i] = ch;
//		i++;
//	}
//	string[i] = '\0';
//	char* sting = string;
//	while (*sting != '\0')
//	{
//		if (('a' <= *sting && *sting < 'z') || ('A' <= *sting && *sting < 'Z'))
//		{
//			*sting = (int)(*sting) + 1;
//		}
//		else if(*sting=='z')
//		{
//			*sting = 'a';
//		}
//		else if(*sting=='Z')
//		{
//			*sting = 'A';
//		}
//		sting++;
//	}
//	printf("%s",string);
//}
#include<stdio.h>
void dest(void* a, void* b)
{
	int* dest = (int*)a;
	int* dast = (int*)b;
	int n = 3;
	while (n--)
	{
		*dest++ = *dast;
	}
	
	
}
int main()
{
	int a[3] = {0};
	int b = 5;
	dest(a, &b);
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n",a[i]);
	}
}