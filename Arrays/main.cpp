#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n] = {};
	//arr[2] = 123;   // обращение ко второму элементу массива на запись
	//cout << arr[2] << endl;  // обращение ко второму элементу массива на чтение
	//SIZE-1;
	//   n-1;

	//Ввод массива с клавиатуры
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}