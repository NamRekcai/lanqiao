/**********************************************************��Ŀ(P1092) :
��д��������һ������ż���������ż�������������ӣ�����Ե�ʽ����ʽ��ʾ��
��������:
500
�������:
500=2*2*5*5*5
************************************************************************/


#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

bool isPrime(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}


int main()
{
	//1.����һ�����ͱ���num
	int num = 0;
	int temp_num = 0;
	bool HeadJudge = true;
	//2.����һ������ż��
	cin >> num;
	//3.�жϣ��û�������ǲ���һ����ż��
	if (num % 2 == 0 && num > 0)
	{
		//4.�����ż��������������, ����Ե�ʽ����ʽ��ʾ
		
		
		//4.1 �жϡ������ǲ�������
		for (temp_num = 2; num!=1; temp_num++)
		{
			if (isPrime(temp_num))
			{
				//4.2 �жϡ������ǲ�������
				while (num % temp_num == 0)
				{

					//4.3 �����ʽ�����⻯
					if (HeadJudge)
					{
						cout << num << "=" << temp_num;
						HeadJudge = false;
					}
					else
						cout << "*" << temp_num;
					num /= temp_num;
				}
			}
		}
		
		
		
	}
	


	return 0;
}