//编写程序，从键盘上输入一个字符，若该字符是数字字符，在屏幕上输出对应的整数数字。
//若不是数字字符，请给出相应提示:“这不是一个数字字符”。


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1034()
{
	//定义一个字符型变量ch
	char ch = 0;
	//输入一个字符
	cin >> ch;
	//该字符是数字字符，在屏幕上输出对应的整数数字
	if (ch >= '0' && ch <= '9')
	{
		int cha = ch - '0';
		cout << cha << endl;
	}
	//若不是数字字符，请给出相应提示:“这不是一个数字字符”。
	else
	{
		cout << "这不是一个数字字符" << endl;
	}
	return 0;
}