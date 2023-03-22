#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1067()
{
	int n = 0;
	cin >> n;
	int a = 1;
	int a_1 = 1;
	int a_2 = 0;
	int i = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += a;
		a = a_1 + a_2;
		a_2 = a_1;
		a_1 = a;
	}

	cout << sum << endl;
	//a[0] = a[1] = 1;
	//for (i = 2; i < n; i++)
	//{
	//	a[i] = a[i - 1] + a[i - 2];
	//}

	return 0;
}