﻿//#include<stdio.h>
//int main()
//{
//	char s[] = "hello world";
//	char* p;
//	
//	for (p = s; *p != '\0'; (printf("%c", *p), p++));
//	
//}
//#include <iostream>
//using namespace std;
//int main() {
//	char s[] = "Hello";
//	char* p;
//	for (p=s;*p!='\0';p++
//		
//		)
//		cout << *p;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//void Print(const char* p1, const char* p2)
//{
//	for (;p1<p2;p1++)
//		cout << *p1;
//}
//int main()
//{
//	const char* s = "Tesla123";
//	Print(s, s + 5);
//	cout << endl;
//	Print(s, s + 3);
//	cout << endl;
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void ForEach(void* a, int width, int num,
//	void (*f)(void*)
//	)
//
//{
//	for (int i = 0; i < num; ++i)
//		f((char*)a + width * i);
//}
//
//void PrintSquare(void* p)
//{
//	int* q = (int*)p;
//	int n = *q;
//	cout << n * n << ",";
//}
//void PrintChar(void* p) {
//	char* q = (char*)p;
//	cout << *q << ",";
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	char s[] = "hello!";
//	ForEach(a, sizeof(int), 5, PrintSquare);
//	cout << endl;
//	ForEach(s, sizeof(char), 6, PrintChar);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//void Memcpy(char* src, char* dest, int n)
//{
//	int i;
//	
//	for (i = 0; i < n; i++)
//	{
//		*dest++ = *src++;
//	}
//}
//int Strlen(char* s)
//{
//	int i;
//	for (i = 0; s[i]; ++i);
//	return i;
//}
//int main()
//{
//	int a;
//	char s1[30];
//	char s2[30];
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; ++i) {
//		cin >> a;
//		int b = 99999999;
//		Memcpy((char*)&a, (char*)&b, sizeof(int));
//		cout << b << endl;
//	}
//	for (int i = 0; i < t; ++i) {
//		cin >> s1;
//		Memcpy(s1, s2, Strlen(s1) + 1);
//		cout << s2 << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void Double(int* p, int n)
//{
//	for (int i = 0; i < n; ++i)
//		p[i] *= 2;
//}
//
//
//int main()
//{
//	int a[3][4] = { { 1,2,3,4},{5,6,7,8},
//					{ 9,10,11,12 } };
//
//	Double(a[1],6
//		// 在此处补充你的代码
//	);
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 4; ++j)
//			cout << a[i][j] << ",";
//		cout << endl;
//	}
//
//	return 0;
//}
#include <iostream>
using namespace std;
void Memcpy(void* src, void* dest, int size)
{
	char* app = (char*)src;
	char* add = (char*)dest;
	int i;
	if (*add == 0 || app + size < add || add + size < app)
	{
		for (i = 0; i < size; i++)
		{
			*add++ = *app++;
		}
	}
	else
	{
		app = (char*)src + size;
		add = (char*)dest + size;
		while (*app == '\0' || *add == '\0')
		{
			if()
		}
		for (i = 0; i < size; i++)
		{
			*add-- = *app--;
		}
	}
	
}

void Print(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		cout << p[i] << ",";
	cout << endl;
}

int main()
{
	int a[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int b[10] = { 0 };
	Memcpy(a, b, sizeof(a));
	Print(b, n);

	int c[10] = { 1,2,3,4,5,6,7,8,9,10 };
	Memcpy(c, c + 5, 5 * sizeof(int)); //将c的前一半拷贝到后一半 
	Print(c, 10);

	char s[10] = "123456789";//123456789      //123434567
	Memcpy(s + 2, s + 4, 5); //将s[2]开始的5个字符拷贝到s[4]开始的地方 
	cout << s << endl;

	char s1[10] = "123456789";
	Memcpy(s1 + 5, s1 + 1, 4); //将s1[5]开始的4个字符拷贝到s1[1]开始的地方 
	cout << s1 << endl;


	return 0;
}