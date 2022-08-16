//#include<stdio.h>
//void def(int f)
//{
//	if (f == 4)
//	{
//		;
//	}
//	else if (f==2)
//	{
//		printf(" ");
//	}
//	else if ( f == 0)
//	{
//		printf("  ");
//
//	}
//}
//int main()
//{
//	char a;
//	scanf("%c",&a);
//	int i,j,f;
//	for (i = 0; i < 5; i++)
//	{
//		if (i == 2)
//		{
//			f = 4;
//		}
//		else if (i == 3||i==1)
//		{
//			f = 2;
//		}
//		else if (i == 4 || i == 0)
//		{
//			f = 0;
//			
//		}
//		def(f);
//		for (j = 0; j <= f; j++)
//		{
//			printf("%c",a);
//			
//		}
//		def(f);
//		printf("\n");
//		
//	}
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d %d", sizeof(float), sizeof(double));
//}
//#include<stdio.h>
//int main()
//{
//	long int a, b, c;
//	scanf("%ld %ld %ld",&a,&b,&c);
//	printf("%8ld %8ld %8ld",a,b,c);
//}
//#include<stdio.h>
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%.12lf", a);
//}
//#include<stdio.h>
//int main()
//{
//	char a;
//	int b;
//	float c;
//	double d;
//	scanf("%c %d %f %lf",&a,&b,&c,&d);
//	printf("%c %d %.6f %.6lf",a,b,c,d);
//}
//#include<stdio.h>
//int main()
//{
//	double r;
//	scanf("%lf",&r);
//	printf("%.2lf",(4*3.14*r*r*r)/3);
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int h, r; double v, pi, n;
//	pi = 3.14159;
//	cin >> h >> r;
//	v = pi * r * r * h / 1000;
//	n = 20 / v;
//	cout << ceil(n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if (n % 2 != 0)
//	{
//		printf("odd");
//	}
//	else
//	{
//		printf("even");
//	}
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	
//	while (~(scanf("%f %f %f", &a, &b, &c)))
//	{
//		float shi, xu, x1, x2;
//
//		if (b * b == 4 * a * c)
//		{
//			shi = -b / (2 * a);
//			xu = sqrt(4 * a * c - b * b) / (2 * a);
//			x1 = x2 = shi + xu;
//			printf("x1=x2=%.5f\n", x1, x2);
//		}
//		else if (b * b > 4 * a * c)
//		{
//			shi = -b / (2 * a);
//			xu = sqrt(b * b - 4*a*c) / (2 * a);
//			x1 = shi + xu;
//			x2 = shi - xu;
//			printf("x1=%.5f;x2=%.5f\n", x1, x2);
//		}
//		else
//		{
//			shi = -b / (2 * a);
//			if (shi == -0.00000)
//			{
//				shi = 0.00000;
//			}
//			xu = sqrt(4 * a * c - b * b) / (2 * a);
//			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", shi, xu, shi, xu);
//		}
//		printf("\n");
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	if (-1 <= a && a <= 1 && -1 <= b && b <= 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d",&a,&b,&c);
//	while (c>0)
//	{
//		if (c > b)
//			c -= b;
//		else
//		{
//			a--; break;
//		}
//	
//		a--;
//		if (a == 0)
//			break;
//	}
//	printf("%d",a);
//}
//#include<stdio.h>
//
//int main()
//{
//	int  a, b;
//	char c;
//	scanf("%d %d %c",&a,&b,&c);
//	if (c == '+'   )
//	{
//		printf("%d", a + b);
//	}
//	else if (c == '-')
//		printf("%d",a-b);
//	else if(c == '*')
//		printf("%d", a *b);
//	else if (c == '/')
//	{
//		if(b==0)
//			printf("Divided by zero!");
//		else
//			printf("%d", a / b);
//	}
//	else
//		printf("Invalid operator!");
//}