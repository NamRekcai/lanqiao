#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;



int main(int argc,const char*argv[])
{
	for (int i = 1; i < 100; ++i)
	{
		for (int j = i; j < 100; ++j)
		{
			if ((i + j) * (j - i + 1) / 2 == 236)
				cout << i << " " << j << endl;
		}
	}
//·½·¨¶þ
	for (int i = 1; i < 100; ++i)
	{
		int t = i * (i - 1) / 2;
		if ((236 - t) % i == 0)
			cout << (236 - t) / i << " " << i << endl;
	}

	return 0;
}