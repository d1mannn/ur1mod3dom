// ���� 1 ������ 3 ��������

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{	
	MyStart:
	setlocale(LC_ALL, "Rus");
	

	cout << "������� ����� ������� �� 1 �� 6 - ";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{
#pragma region TASK1
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
			cout << "������ ������ � ���������� - "<< s << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			s = ((h * 60) + m) * 60;
			cout << "������ ������ � ���������� - " << s << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}

	} break;
#pragma endregion

#pragma region TASK2
	case 2:
	{	
		task2:
		cout << "�������� ������� int f(int m, int d), \n";
		cout << "������� ��������� ��� ����� ���������(����� m � ���� d) \n";
		cout << "� ���������� ���������� ����, ��������� � ������ ����.\n";
		cout << "�������, ��� � ������ ������ 30 ����\n";
		int d, m;
		cout << "������� ���� (�� 30 ����) - ";
		cin >> d;
		cout << "\n������� ����� (�� 12 ���) - ";
		cin >> m;
		if ((d >= 1) && (d <= 30) && (m >= 1) && (m <=12))
		{
			m = (m * 30);
			d += m;
			cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "ERRORRRRRRRR\n";
			goto task2;

		}
	} break;
#pragma endregion

#pragma region TASK3
	case 3:
	{	
		task3:
		cout << "�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) \n";
		cout << "� ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ��� 31����\n";
		int d, m;
		cout << "������� ���� (�� 30 ����) - ";
		cin >> d;
		cout << "\n������� ����� (�� 12 ���) - ";
		cin >> m;
		int m30 = m * 30;
		int m31 = m * 31;

		if ((d >= 1) && (d <= 31) && (m >= 1) && (m <= 12))
		{
			switch (m)
			{ 
				case 1:
				{
					d += m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 2:
				{
					m *= 28;
					d += m;
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 3:
				{
					d = m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 4:
				{
					d += m30;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 5:
				{
					d += m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 6:
				{
					d += m30;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 7:
				{
					d += m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 8:
				{
					d += m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 9:
				{
					d += m30;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 10:
				{
					d += m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 11:
				{
					d += m30;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
				case 12:
				{
					d += m31;
					cout << "� ������ ���� ������ ���� � ���������� - " << d << "\n";
					cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
					cin >> yn;
					if (yn == 'y')
					{
						system("cls");
						goto MyStart;
					}
					else
					{
						return 0;
					}
				}break;
			}
		}
		else
		{
			cout << "ERRORRRRRRRR\n";
			goto task2;

		}
		

	} break;
#pragma endregion

#pragma region TASK4
	case 4:
	{
		task4:
		cout << "�������� ������� f(int& m1, int& m0, int N), \n";
		cout << "������� ���������� ������ � ��������� ����� ����������� ������������ ����� N.\n";
		int a;
		cout << "������� ���������� ����������� ����� - ";
		cin >> a;
		if (a >= 10 && a <= 99)
		{
			cout << "������ ����� ����� " << a << " - " << a / 10 << "\n";
			cout << "������ ����� ����� " << a << " - " << a % 10 << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "������� ������������ �����!!! \n";
			goto task4;
		}

	}break;
#pragma endregion

#pragma region TASK5
	case 5:
	{
		task5:
		cout << "�������� ������� int f(int m1, int m2, int m3),\n";
		cout << "������� ������� ���������� ����� �� ��������� ������ ���� ����� �����. \n";
		cout << "����������� �������� �������� if\n";
		cout << "������� ��������������� ��� ����� ����� ������ ������� enter \n";
		int m1, m2, m3;
		cin >> m1 >> m2 >> m3;
		if (m1 < m2 && m1 < m3)
		{
			cout << "���������� ����� - " << m1 << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else if (m2 < m1 && m2 < m3)
		{
			cout << "���������� ����� - " << m2 << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else if (m3 < m1 && m3 < m2)
		{
			cout << "���������� ����� - " << m3 << "\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "����� ����� ���� �����\n������� �� ������� ��������!!!\n";
			goto task5;
		}

	} break;
#pragma endregion

#pragma region TASK6
	case 6:
	{
		task6:
		cout << "�������� ������� f(int m, int n),\n";
		cout << "������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������\n";
		int m, n;
		cout << "������� ������ ����� - ";
		cin >> m;
		cout << "\n������� ������ ����� - ";
		cin >> n;
		if (n % m == 0)
		{
			cout << "������ ����� ������ �������\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "������ ����� �� ������ �������\n";
			cout << "������� ���������!!!\n���� ������ ��������� � ���� ������ ������� ������� y, ��� n ��� ������\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto MyStart;
			}
			else
			{
				return 0;
			}
		}


	}break;
#pragma endregion


	} 
	defaul:
	{cout << "������� ������������ �����\n";
	goto MyStart; }
	

	system ("pause");
}