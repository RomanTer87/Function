#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 3;
const int COLS = 4;
int number_of_shifts;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 10); // +
void FillRand(double arr[], const int n); // +
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 10); //+
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 1, int maxRand = 100);  //+
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);  //+
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS); //+

void Print(const int arr[], const int n); //+
void Print(const double arr[], const int n); //+
void Print(const char arr[], const int n); //+
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS); //+
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS); //+
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS); //+

int sum(const int arr[], const int n); //+
int sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);//+
double sum(const double arr[], const int n); //+
double sum(const double arr[ROWS][COLS], const int ROWS, const int COLS); //+
char sum(const char arr[], const int n); //+
char sum(const char arr[ROWS][COLS], const int ROWS, const int COLS); //+

double Avg(const int arr[], const int n); //+
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS); //+

int minValueIn(const int arr[], const int n); //+
double minValueIn(const double arr[], const int n); //+
char minValueIn(const char arr[], const int n); //+
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS); //+
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS); //+
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS); //+

int maxValueIn(const int arr[], const int n); //+
double maxValueIn(const double arr[], const int n); //+
char maxValueIn(const char arr[], const int n); //+
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS); //+
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS); //+
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS); //+

void Sort(int arr[], const int n); //+
void Sort(double arr[], const int n); //+ 
void Sort(char arr[], const int n); //+
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS); //+
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS); // + но некоторые переменные в процессе сортировки становятся целочисленными
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS); // +

void shiftLeft(int arr[], const int n, int number_of_shifts); //+
void shiftLeft(double arr[], const int n, int number_of_shifts); //+
void shiftLeft(char arr[], const int n, int number_of_shifts); //+
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS); //+
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS); //+
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS); //+

void shiftRight(int arr[], const int n, int number_of_shifts); //+
void shiftRight(double arr[], const int n, int number_of_shifts); //+
void shiftRight(char arr[], const int n, int number_of_shifts); //+
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS); //+
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS); //+
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS); //+

void UniqueRand(int arr[], const int n); //+
void UniqueRand(double arr[], const int n); //+
void UniqueRand(char arr[], const int n); //+
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS); //+
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS); //+
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS); //+

void Search(int arr[], const int n); //+
void Search(double arr[], const int n); //+
void Search(char arr[], const int n); //+
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);

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
	cout << "Суума элементов массива: " << sum(arr, n) << endl;
	cout << "Среднее арифметическое значение: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Маскимальное значение в массиве:" << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shifts;
	cout << "Введите количество сдвигов "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif // 

	char i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов "; cin >> number_of_shifts;
	//shiftLeft(i_arr_2, ROWS, COLS);
	shiftRight(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//cout << "Сумма элементов массива: " << sum(i_arr_2, ROWS, COLS) << endl;
	//cout << "Среднее арифметическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//UniqueRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//Search(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
}
//rand(); // возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
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
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS * 1000);
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const char arr[], const int n)
{
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
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS)
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
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double sum(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double sum(const double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char sum(const char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char sum(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
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
double minValueIn(const double arr[], const int n)
{
	double min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
char minValueIn(const char arr[], const int n)
{
	char min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
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
double maxValueIn(const double arr[], const int n)
{
	double max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char maxValueIn(const char arr[], const int n)
{
	char max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
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
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
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
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buffer;
	}
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buffer;
	}
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//счетчик i выбирает элемент в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			// счетчик j перебирает элементы в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int buffer = arr[i];
			if (arr[j] < arr[i])
			{
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					// arr[i][j] - выбранный элемент
					// arr[k][l] - перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций" << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					int buffer = arr[i][j];
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций" << endl;
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций" << endl;
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
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 1000;
		arr[i] /= 100;
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
void UniqueRand(char arr[], const int n)
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
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true; //предполагаем что число уникальное.
				//но это нужно проверить
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS * 100);
				arr[i][j] /= 100;
				unique = true; //предполагаем что число уникальное.
				//но это нужно проверить
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true; //предполагаем что число уникальное.
				//но это нужно проверить
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false; // предположим что искомое число не встречалось в массиве ранее
		// но это нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //запоминаем что число встречалось ранее
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
		//if (count)printf("Значение %i повторяется %i раз\n", arr[i], cout);
		if (count) cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;
	}
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
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
		if (count) cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;
	}
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
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
		if (count) cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//1)Выясняем встречался ли элемент ранее:
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			//2)если елемент встречался ранее то мы уже вывели его на экран и второй раз этого делать не нужно
			//поэтому пропускаем следующий код:
			if (met_before)continue;
			//3) если же элемент ранее не встречался то нужно выяснить сколько раз он повторялся и 
			//вывести его на экран
			int count = 0; // счетчик повторений
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Значение %i повторяется %i раз\n", arr[i][j], count);
		}
	}
}