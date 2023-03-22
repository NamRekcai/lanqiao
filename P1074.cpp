// 编写程序，输入n，输出100 - n之间所有的“水仙花”数，每行输出一个数。
//“水仙花”数是指该数的各位上数值的三次幂之和等于该数。
//如371是水仙花数，因为1的三次幂+7的三次幂+3的三次幂=371。

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;

int main1074()
{
	//定义整型变量n
	int n = 0;
	//输入n
	cin >> n;
	//求所有的“水仙花”数——各位上数值的三次幂之和等于该数
	int i = 0;
	for (i = 100; i <= n; i++)
	{
		if (pow(i / 100, 3) + pow(i / 10 % 10, 3) + pow(i % 10, 3) == i)
		{
			cout << i << endl;
		}
	}
	return 0;
}