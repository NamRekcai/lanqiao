#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

int main1104()
{
	int a = 0;//20元有几张
	int b = 0;//10元有几张
	int c = 0;//5元有几张

	for (a = 1; a <= 5; a++)
		for (b = 1; b <= 10; b++)
			for (c = 1; c <= 20; c++)
				if (a * 20 + b * 10 + c * 5 == 100)
					cout << a << " " << b << " " << c << " " << endl;
	return 0;
}