//编写程序，从键盘上输入一个字符，若该字符是大写字母，在屏幕上输出对应的小写字母。
//若不是大写字母，请给出相应提示:“这不是一个大写字母”。


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1032()
{
	//定义一个字符型变量ch
	char ch = 0;
	//从键盘上输入一个字符
	cin >> ch;
	//判断：若该字符是大写字母，在屏幕上输出对应的小写字母
	if (ch>='A'&&ch<='Z')//等价于ch>=65&&ch<=90
	{
		int cha = 'a' - 'A';
		cout << (char)(ch + cha) << endl;
	}
	else
	{
		cout << "这不是一个大写字母" << endl;
	}
	//若不是大写字母，请给出相应提示

	return 0;
}