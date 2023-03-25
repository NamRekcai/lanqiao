#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int mainP1100()
{

	int n = 0; int m = 0;//m代表头，n代表脚
	int chick = 0, rabbit = 0;
	cin >> m >> n;
	for (chick = 1; chick <= m; chick++)
	{
		rabbit = m - chick;
		if (2 * chick + 4 * rabbit == n)
		{
			cout << chick << " " << rabbit << endl;
			break;
		}
	}
	if (chick > m)
	{
		cout << "No" << endl;
	}

	return 0;
}