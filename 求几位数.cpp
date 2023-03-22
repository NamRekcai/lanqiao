#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0000()
{
	int n = 0;
	cin >> n;
	int i = 0;

	if (n)
		for (i = 0; n != 0; n /= 10, i++);
	else
		i = 1;

	

	cout << i << endl;

	return 0;
}