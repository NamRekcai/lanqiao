//我校每年实践学期第4周都会举办程序设计大赛，大赛获奖可给实践学期课程加分，假定加分办法如下:
//一等奖:加30分;二等奖:加20分;三等奖:加15分;优秀奖:加5分。
//加分后，课程总分不超过100分。
//编写程序，输入参赛者的原始课程成绩和所获奖级(1，2，3，4)，输出该参赛者实践学期的课程总分。

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main1054()
{
	//定义两个变量
	int score = 0;
	int jj = 0;
	//输入参赛者的原始课程成绩和所获奖级(1，2，3，4)
	cin >> score >> jj;
	//一等奖:加30分;二等奖:加20分;三等奖:加15分;优秀奖:加5分
	switch (jj)
	{
	case 1:
		score += 30;
		break;
	case 2:
		score += 20;
		break;
	case 3:
		score += 15;
		break;
	case 4:
		score += 5;
		break;
	}
	//加分后，课程总分不超过100分
	if (score > 100)
		score = 100;
	//输出该参赛者实践学期的课程总分
	cout << score << endl;
	return 0;
}
