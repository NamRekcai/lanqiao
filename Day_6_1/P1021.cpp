//��дһ��������ʾ�û�����������Ȼ����ת��������������

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1021()
{
	//����һ������day
	int day = 0;
	//��������
	cin >> day;
	//ת������������
	int week = day / 7;
	int cday = day & 7;

	cout << day << "����" << week << "��" << cday << "��" << endl;
	return 0;
}