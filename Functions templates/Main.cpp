#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n); 
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(const T arr[], const int n);
template<typename T>void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(const T arr[], const int n);
template<typename T>double Avg(const T arr[], const int n);
template<typename T>T minValueIn(const T arr[], const int n);
template<typename T>T maxValueIn(const T arr[], const int n);
template<typename T>void Sort(T arr[], const int n);

template<typename T> void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������:  " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	cout << "����� ���������� �������: " << Sum(d_arr, SIZE) << endl;
	cout << "������� �������������� ���������� �������: " << Avg(d_arr, SIZE) << endl;
	cout << "����������� �������� � ������� �������: " << minValueIn(d_arr, SIZE) << endl;
	cout << "������������ �������� � ������� �������: " << maxValueIn(d_arr, SIZE) << endl;
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);
	
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);
	shiftRight(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); 


}
void FillRand(int arr[], const int n)
{
	//rand();	//���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	//rand();	//���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T> void Print(const T arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
template<typename T> T Sum(const T arr[], const int n)
{
	//���������� ����� ��������� �������:
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T> double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>T minValueIn(const T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T maxValueIn(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� 'i' �������� �������, � ������� ����� ��������� ����������� �������� �� ������������
		for (int j = i + 1; j < n; j++)
		{
			//������� 'j' ���������� ��������, � ������� ������������
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts)
{
	/*for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}*/

	shiftLeft(arr, n, n - number_of_shifts);
}