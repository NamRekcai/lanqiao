//编写一个程序，提示用户输入天数，然后将其转换成周数和天数

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1021()
{
	//定义一个变量day
	int day = 0;
	//输入天数
	cin >> day;
	//转换周数和天数
	int week = day / 7;
	int cday = day & 7;

	cout << day << "天是" << week << "周" << cday << "天" << endl;
	return 0;
}