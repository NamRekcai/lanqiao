//编写程序，输入一个正整数n,求其反序数

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1056()
{
	//定义一个无符号整形变量n
	unsigned int n = 0;
	//输入一个正整数n
	cin >> n;
	//求其反序数
	while (n!=0)
	{
		cout << n % 10;
		n /= 10;
		
	}

	//while (1)
	//{
	//	int temp = n % 10;
	//	cout << temp;
	//	n /= 10;
	//	if (n == 0)
	//		break;
	//}
	return 0;
}