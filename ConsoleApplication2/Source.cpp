#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	cout << "¬ведите номер задани€ от 1 до 6 - ";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{
		case 1:
		{
			cout << "Ќапишите функцию int f(int h, int m, int s), \n";
			cout << "котора€ принимает три целых аргумента (часы h, минуты m и секунды s) \n";
			cout << "и возвращает количество секунд, прошедших с начала дн€.\n";
			float f, h, m, s;
			cout << "¬ведите количество часов - ";
			cin >> h;
			cout << "\n¬ведите количество минут - ";
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
			cout << "Ќапишите функцию int f(int m, int d), \n";
			cout << "котора€ принимает два целых аргумента(мес€ц m и день d) \n";
			cout << "и возвращает количество дней, прошедших с начала года.\n";
			cout << "—читаем, что в каждом мес€це 30 дней\n";
		}

	}


}