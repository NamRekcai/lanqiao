//��д��������һ��������n,���䷴����

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1056()
{
	//����һ���޷������α���n
	unsigned int n = 0;
	//����һ��������n
	cin >> n;
	//���䷴����
	while (n!=0)
	{
		cout << n % 10;
		n /= 10;
		
	}

	//while (1)
	//{
	//	int temp = n % 10;
	//	cout << temp;
	//	n /= 10;
	//	if (n == 0)
	//		break;
	//}
	return 0;
}