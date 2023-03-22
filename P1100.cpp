//编写程序，输入自然数n，输出1~n以内的所有完数，并输出其因子。一个数若恰好等于它的各因子之和,
//即称其为完数，如6=1+2+3，其中1、2、3为因子，6为因子为和。
// (注:要求输出时按哪下格式连同完数的因子一同输出，每个完数输出占一行)


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1100()
{
	int n = 0;
	cin >> n;
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if(sum==i)
		{
			cout << i << "=";
			for (j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					if (j == 1)
						cout << j;
					else
						cout << "+" << j;
				}
			}
			cout << endl;
		}
	}



	return 0;
}