//Дворников Даниил ИВТ-22
#include <iostream>
#include <iomanip>
#include <math.h>
#include "Ex_5_headers.h" //Заголовочный файл модуля с функциями

// раскомментировать строку ниже, чтобы отключить assert()
#define NDEBUG
#include <cassert> //Содержит макрос для тестирования

using namespace std;

const float eps = 10e-3; //Константа погрешности для проверок 

int main()
{
	float first_v, second_v; //Переменные 1 и 2 значения

	//Блоки проверок функций
	assert(fabs(arifmetic_mean(12.77, 142.06) - 77.42) < eps);
	assert(fabs(arifmetic_mean(1.054, -5.141) + 2.040) < eps);

	assert(fabs(geometric_mean(12.77, 142.06) - 42.59) < eps);
	assert(fabs(geometric_mean(1.054, 5.1410) - 2.330) < eps);

	cout << "Input: first value = "; //Блок ввода 1 значения
	cin >> first_v;
	cout << endl;

	cout << "Input: second value = "; //Блок ввода 2 значения
	cin >> second_v;
	cout << endl;

	cout << setw(12) << fixed << setprecision(2); // 12 позиций на всё число; два знака после запятой;

	cout << "Arifmetic mean = " << arifmetic_mean(first_v, second_v) << endl; // Вывод среднего арифметического
	cout << "Geometric mean = " << geometric_mean(first_v, second_v) << endl; // Вывод срднего геометрического

	system("PAUSE"); //Ожидание ввода в консоль

	return 0;
}