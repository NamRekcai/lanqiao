//��д������������������a��n����a + aa + aaa + ... + aa...a(n��a)�Һ͡�



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1066()
{
	int a = 0;
	int n = 0;

	cin >> a >> n;

	int temp = 0;
	int num = 0;
	int res = 0;

	int i = 0;
	for (i = 0; i < n; i++)
	{
		temp = a * pow(10, i);
		num += temp;
		res += num;
	}

	cout << res << endl;

	return 0;
}