﻿#include<iostream>
using namespace std;


void ShiftLeft(int arr[], const int n, int number_of_shifts);
void ShiftRight(int arr[], const int n, int number_of_shifts);
void Rand (int arr[], const int n);
void RandUnique(int arr[], const int n);
void Print(int arr[], const int n);
void Search(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = {};
	//RandUnique(arr, n);
	Rand(arr, n);
	Print(arr, n);
	Search(arr, n);

	//#define ShiftLeft_ShiftRight
#ifdef ShiftLeft_ShiftRight

	//_____________________________________________________________________________
	// Домашнее задание по функциям ShiftLeft / ShiftRight

	int number_of_shifts;
	cout << "Введите размер отступа: "; cin >> number_of_shifts;
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	ShiftLeft(arr, n, number_of_shifts);
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);
#endif // ShiftLeft_ShiftRight

	//#define Arithmetic

#ifdef Arithmetic
	//_________________________________________________________________________________
// Домашнее задание по вычислению суммы элементов массива, среднего арифметического,
// минимального и максимального значения
	const int n = 5;
	int arr[n] = {};

	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int SUMM = 0;
	for (int i = 0; i < n; i++)
	{
		SUMM += arr[i];
	}
	double arithmetic_mean = 0;
	for (int i = 0; i < n; i++)
	{
		arithmetic_mean += arr[i];
	}
	arithmetic_mean = arithmetic_mean / n;
	int min = arr[0], max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Сумма элементов массива: " << SUMM << endl;
	cout << "Среднее арифметическое значение: " << arithmetic_mean << endl;
	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Максимальный элемент массива: " << max << endl;
#endif // Arithmetic


}
void ShiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int j = 0; j < number_of_shifts; j++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
void Rand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void RandUnique(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool Met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				Met_before = true;
			}
		}
		if (Met_before)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
	if (count) cout << "Значение" << arr[i] << " повтоярется" << count << " раз" << endl;
	}
}
