#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	cout << "������� ����� ������� �� 1 �� 6 - ";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{
		case 1:
		{
			cout << "�������� ������� int f(int h, int m, int s), \n";
			cout << "������� ��������� ��� ����� ��������� (���� h, ������ m � ������� s) \n";
			cout << "� ���������� ���������� ������, ��������� � ������ ���.\n";
			float f, h, m, s;
			cout << "������� ���������� ����� - ";
			cin >> h;
			cout << "\n������� ���������� ����� - ";
			cin >> m;
			if (m >= 60)
			{
				m /= 60;
				h += m;
				s = ((h * 60) + m) * 60;
				cout << s;
			}
			else
			{
				s = ((h * 60) + m) * 60;
				cout << s;
			}
			
		} break;

		case 2:
		{
			cout << "�������� ������� int f(int m, int d), \n";
			cout << "������� ��������� ��� ����� ���������(����� m � ���� d) \n";
			cout << "� ���������� ���������� ����, ��������� � ������ ����.\n";
			cout << "�������, ��� � ������ ������ 30 ����\n";
		}

	}


}