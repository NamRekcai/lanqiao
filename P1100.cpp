//��д����������Ȼ��n�����1~n���ڵ���������������������ӡ�һ������ǡ�õ������ĸ�����֮��,
//������Ϊ��������6=1+2+3������1��2��3Ϊ���ӣ�6Ϊ����Ϊ�͡�
// (ע:Ҫ�����ʱ�����¸�ʽ��ͬ����������һͬ�����ÿ���������ռһ��)


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1100()
{
	int n = 0;
	cin >> n;
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if(sum==i)
		{
			cout << i << "=";
			for (j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					if (j == 1)
						cout << j;
					else
						cout << "+" << j;
				}
			}
			cout << endl;
		}
	}



	return 0;
}