//��д��������������n����1!+2!+3!+����+n!�ĺ͡�


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int fact(int n)
{
	int rst = 1;
	for (int i = 1; i <= n; i++)
		rst *= i;
	return rst;

}


int main1111()
{
	int n;
	cin >> n;
	int sum = 0;
	int i = 1;
	for (i=1; i <= n; i++)
		sum += fact(i);
	cout << sum << endl;
	return 0;
}