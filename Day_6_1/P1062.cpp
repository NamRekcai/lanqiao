//输入一个正整数n
//计算1/1-2/3+3/5-4/7+5/9-6/11+···的前n项之和。结果保留十位小数

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1062()
{
	int n = 0;
	double res = 0;
	int i = 0;
	double j = 0;

	cin >> n;
	
	for (i = 1, j = 1; i <= n; i++, j += 2)
	{
		if (i % 2 == 0)
			res -= i / j;
		else
			res += i / j;

	}

	printf("%.10lf", res);

	return 0;
}