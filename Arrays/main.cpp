#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 10);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS,const int COLS);

int sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);

void Sort(int arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

void UniqueRand(int arr[], const int n);
void Search(int arr[], const int n);

//#define ARRAYS_1

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAYS_1
	const int n = 10;
	int arr[n] = {};
	FillRand(arr, n, 0, 5);

	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << sum(arr, n) << endl;
	cout << "������� �������������� ��������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������:" << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shifts;
	cout << "������� ���������� ������� "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif // 

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}
//rand(); // ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
void Print(const int arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
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
int sum(const int arr[], const int n)
{
	//���������� ����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
int minValueIn(const int arr[], const int n)
{
	int min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		/*int buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = buffer;*/
		shiftLeft(arr, n, n - number_of_shifts);
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� i �������� ������� � ������� ����� ��������� ����������� �������� �� ������������
		for (int j = i + 1; j < n; j++)
		{
			// ������� j ���������� �������� � ������� ������������
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void UniqueRand(int arr[], const int n)
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
		bool met_before = false; // ����������� ��� ������� ����� �� ����������� � ������� �����
		// �� ��� ����� ���������
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //���������� ��� ����� ����������� �����
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)printf("�������� %i ����������� %i ���\n", arr[i], cout);
		if (count) cout << "�������� " << arr[i] << " ����������� " << count << " ���" << endl;
	}
}