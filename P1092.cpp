/**********************************************************题目(P1092) :
编写程序，输入一个正的偶数，输出该偶数的所有质因子，输出以等式的形式表示。
样例输入:
500
样例输出:
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
	//1.定义一个整型变量num
	int num = 0;
	int temp_num = 0;
	bool HeadJudge = true;
	//2.输入一个正的偶数
	cin >> num;
	//3.判断，用户输入的是不是一个正偶数
	if (num % 2 == 0 && num > 0)
	{
		//4.输出该偶数的所有质因子, 输出以等式的形式表示
		
		
		//4.1 判断—个数是不是质数
		for (temp_num = 2; num!=1; temp_num++)
		{
			if (isPrime(temp_num))
			{
				//4.2 判断—个数是不是因子
				while (num % temp_num == 0)
				{

					//4.3 输出格式的特殊化
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