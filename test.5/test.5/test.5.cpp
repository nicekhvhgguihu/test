//#include<stdio.h>
//#include<math.h>
////宏定义求解面积和周长s
//#define area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))  
//#define S(a,b,c) (a+b+c)/2 
//int main()
//{
//	int a, b, c,s;
//	float d;
//	scanf("%d %d %d",&a,&b,&c);
//	s = S(a, b, c);
//	d = area(a, b, c, s);
//	printf("%.3f",d);
//}
//#include<stdio.h>
////宏定义的转换两值
//int tmp = 0;
//#define switch_1(a,b) ( tmp=b,b=a,a=tmp)
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	switch_1(a,b);
//	printf("%d %d",a,b);
//}
//#include<stdio.h>
////宏定义对润年的判断
//#define  LEAP_YEAR(y) if((y%4==0&&y%100!=0)||(y%400==0)){ printf("L");}else{printf("N");}
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	LEAP_YEAR(y);
//
//}
//#include<stdio.h>
////请设计输出实数的格式，包括：⑴一行输出一个实数；⑵一行内输出两个实数；⑶一行内输出三个实数。实数用"6.2f"格式输出
//int main()
//{
//	float x;
//	scanf("%f",&x);
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%6.2f",x);
//			if (j != i && i != 0)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
////宏定义和函数的区分和使用
//#define mul(x,y,z) (x>y?(x>z?x:z):(y>z?y:z))
//float judge(float x, float y, float z)
//{
//	return (x > y ? (x > z ? x : z) : (y > z ? y : z));
//}
//int main()
//{
//	float x, y, z;
//	scanf("%f %f %f",&x,&y,&z);
//	printf("%.3f\n",judge(x,y,z));
//	printf("%.3f\n",mul(x,y,z));
//
//}