#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

bool isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		return false;
	}
	return true;
}

int main1102()
{
	int m;
	cin >> m;
	int i;

	if (m > 6 && m % 2 == 0)
	{
		for (i = 1; i < m; i += 2)
		{
			if (isPrime(i) && isPrime(m - i))//两个都为素数
			{
				cout << m << "=" << i << "+" << m - i << endl;
			}
		}
	}
	return 0;
}