//Дворников Даниил ИВТ-22
#include <math.h>

///Функция вычисления среднего арифметического
float arifmetic_mean(float fst_v, float scd_v) {
	return (fst_v + scd_v) / 2;
}

///Функция вычисления среднего геометрического
float geometric_mean(float fst_v, float scd_v) {
	return sqrt(fst_v * scd_v);
}