//��д����.��������������m��n(m <= n).
//��S= 1 / m+ 1 /(m + 1) + 1 / (m + 2) + .. + 1 / (n - 1)+ 1 / n���������10λС����


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1059()
{
	int m = 0, n = 0;
	double S = 0;

	cin >> m >> n;

	int i = 0;
	for (i = m; m <= n && i <= n; i++)
	{
		S += 1.0 / i;//����double i
	}

	printf("%.10lf", S);



	return 0;
}