// ������������ ������ ������� C++
#include <iostream>

using namespace std;

template <typename T> T mean(T array[], int lenght) {
	T sum = 0; // ������� ��� ������ ����������� ������� � ��������� � �����. ���� ��� ������ ������������, �� � ��� ������ ���� ������������.
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

	// ������ 1
	cout << "������ 1.\n����������� ������:\n";
	float z1[5] = { 4.1, 4.9, 2.02, 0.101, 1.2 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\n������� �������������� ��������� ������� = " << mean(z1, 5) << endl;

	return 0;
}