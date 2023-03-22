
//输入一个三位整数x(999=>x>=100)，将其分解出百位，十位，个位，并求出各位之积及各位之和，
//分别显示在两行上

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1008()
{
	//定义变量x
	int x = 0;

	//输入一个三位整数
	cin >> x;
	if (x >= 100 && x <= 999)
	{
		//将其分解出百位，十位，个位
		int a = x / 100;
		int b = x / 10 % 10;
		int c = x % 10;
		//求出各位之积及各位之和
		//分别显示在两行上
		cout << a * b * c << endl << a + b + c << endl;
	}
	
	return 0;
}