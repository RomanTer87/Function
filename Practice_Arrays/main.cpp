#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};

	cout << "������� �������� �������: " << endl;
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

	cout << "����� ��������� �������: " << SUMM << endl;
	cout << "������� �������������� ��������: " << arithmetic_mean << endl;
	cout << "����������� ������� �������: " << min << endl;
	cout << "������������ ������� �������: " << max << endl;
}