#include <iostream>

using namespace std;

int main()
{
		int sum = 0, tmp = 0;
		for (int i = 1;i <= 100; ++i)
		{
		
			tmp += i; //tmp = (i*(i+1))/2;
			sum += tmp;
		}
	 printf("%d\n", sum);
	 return 0;
}
