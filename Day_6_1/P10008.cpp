
//����һ����λ����x(999=>x>=100)������ֽ����λ��ʮλ����λ���������λ֮������λ֮�ͣ�
//�ֱ���ʾ��������

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1008()
{
	//�������x
	int x = 0;

	//����һ����λ����
	cin >> x;
	if (x >= 100 && x <= 999)
	{
		//����ֽ����λ��ʮλ����λ
		int a = x / 100;
		int b = x / 10 % 10;
		int c = x % 10;
		//�����λ֮������λ֮��
		//�ֱ���ʾ��������
		cout << a * b * c << endl << a + b + c << endl;
	}
	
	return 0;
}