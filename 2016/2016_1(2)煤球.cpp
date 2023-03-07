#include <iostream>

using namespace std;

int sum, tmp;

int main()
{

	for(int i = 1; i <= 100; i++)
	{
			tmp += i;
			sum += tmp;
	}
	cout << sum << endl;
	return 0;
}
