//��Уÿ��ʵ��ѧ�ڵ�4�ܶ���ٰ������ƴ����������񽱿ɸ�ʵ��ѧ�ڿγ̼ӷ֣��ٶ��ӷְ취����:
//һ�Ƚ�:��30��;���Ƚ�:��20��;���Ƚ�:��15��;���㽱:��5�֡�
//�ӷֺ󣬿γ��ֲܷ�����100�֡�
//��д������������ߵ�ԭʼ�γ̳ɼ������񽱼�(1��2��3��4)������ò�����ʵ��ѧ�ڵĿγ��ܷ֡�

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main1054()
{
	//������������
	int score = 0;
	int jj = 0;
	//��������ߵ�ԭʼ�γ̳ɼ������񽱼�(1��2��3��4)
	cin >> score >> jj;
	//һ�Ƚ�:��30��;���Ƚ�:��20��;���Ƚ�:��15��;���㽱:��5��
	switch (jj)
	{
	case 1:
		score += 30;
		break;
	case 2:
		score += 20;
		break;
	case 3:
		score += 15;
		break;
	case 4:
		score += 5;
		break;
	}
	//�ӷֺ󣬿γ��ֲܷ�����100��
	if (score > 100)
		score = 100;
	//����ò�����ʵ��ѧ�ڵĿγ��ܷ�
	cout << score << endl;
	return 0;
}