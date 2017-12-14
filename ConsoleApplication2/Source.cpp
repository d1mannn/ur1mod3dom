// Урок 1 модуль 3 Домашняя

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
	

	cout << "Введите номер задания от 1 до 6 - ";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{
#pragma region TASK1
	case 1:
	{
		cout << "Напишите функцию int f(int h, int m, int s), \n";
		cout << "которая принимает три целых аргумента (часы h, минуты m и секунды s) \n";
		cout << "и возвращает количество секунд, прошедших с начала дня.\n";
		float f, h, m, s;
		cout << "Введите количество часов - ";
		cin >> h;
		cout << "\nВведите количество минут - ";
		cin >> m;
		if (m >= 60)
		{
			m /= 60;
			h += m;
			s = ((h * 60) + m) * 60;
			cout << "Прошло секунд в количестве - "<< s << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
			cout << "Прошло секунд в количестве - " << s << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
		cout << "Напишите функцию int f(int m, int d), \n";
		cout << "которая принимает два целых аргумента(месяц m и день d) \n";
		cout << "и возвращает количество дней, прошедших с начала года.\n";
		cout << "Считаем, что в каждом месяце 30 дней\n";
		int d, m;
		cout << "Введите день (до 30 дней) - ";
		cin >> d;
		cout << "\nВведите месяц (до 12 мес) - ";
		cin >> m;
		if ((d >= 1) && (d <= 30) && (m >= 1) && (m <=12))
		{
			m = (m * 30);
			d += m;
			cout << "С начала года прошло дней в количестве - " << d << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
		cout << "Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) \n";
		cout << "и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней\n";
		int d, m;
		cout << "Введите день (до 30 дней) - ";
		cin >> d;
		cout << "\nВведите месяц (до 12 мес) - ";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
					cout << "С начала года прошло дней в количестве - " << d << "\n";
					cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
		cout << "Напишите функцию f(int& m1, int& m0, int N), \n";
		cout << "которая возвращает первую и последнюю цифры двузначного натурального числа N.\n";
		int a;
		cout << "Введите двузначное натуральное число - ";
		cin >> a;
		if (a >= 10 && a <= 99)
		{
			cout << "Первое число числа " << a << " - " << a / 10 << "\n";
			cout << "Второе число числа " << a << " - " << a % 10 << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
			cout << "Введены недопустимые числа!!! \n";
			goto task4;
		}

	}break;
#pragma endregion

#pragma region TASK5
	case 5:
	{
		task5:
		cout << "Напишите функцию int f(int m1, int m2, int m3),\n";
		cout << "которая находит наименьшее число из заданного набора трех целых чисел. \n";
		cout << "Используйте условный оператор if\n";
		cout << "Введите последовательно три числа после кажого нажимая enter \n";
		int m1, m2, m3;
		cin >> m1 >> m2 >> m3;
		if (m1 < m2 && m1 < m3)
		{
			cout << "Наименьшее число - " << m1 << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
			cout << "Наименьшее число - " << m2 << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
			cout << "Наименьшее число - " << m3 << "\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
			cout << "Числа равны друг другу\nВведите их зачение повторно!!!\n";
			goto task5;
		}

	} break;
#pragma endregion

#pragma region TASK6
	case 6:
	{
		task6:
		cout << "Напишите функцию f(int m, int n),\n";
		cout << "которая определяет для пары целых чисел m и n, кратно ли второе число первому\n";
		int m, n;
		cout << "Введите первое число - ";
		cin >> m;
		cout << "\nВведите второе число - ";
		cin >> n;
		if (n % m == 0)
		{
			cout << "Второе число кратно первому\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
			cout << "Второе число не кратно первому\n";
			cout << "Задание завершено!!!\nЕсли хотите вернуться в меню выбора заданий введите y, или n для выхода\n";
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
	{cout << "Введены недопустимые числа\n";
	goto MyStart; }
	

	system ("pause");
}