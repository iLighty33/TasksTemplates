// Персональный шаблон проекта C++
#include <iostream>

using namespace std;

template <typename T> T mean(T array[], int lenght) {
	T sum = 0; // Берется тип данных переданного массива и передаётся в сумму. Если тип данных вещественный, то и тип должен быть вещественный.
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}

/*
int mean(int array[], int lenght) {
	int sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}

float mean(float array[], int lenght) {
	float sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}*/



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задача 1
	cout << "Задача 1.\nИзначальный массив:\n";
	float z1[5] = { 4.1, 4.9, 2.02, 0.101, 1.2 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\nСреднее арифметическое элементов массива = " << mean(z1, 5) << endl;

	return 0;
}