#include"Statistics.h"
#include"stdafx.h"

template<typename T> T sum(const T arr[], const int n)
{
	//���������� ����� ��������� �������:
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T sum(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T> double Avg(const T arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
template<typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template<typename T> T minValueIn(const T arr[], const int n)
{
	T min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
template<typename T> T maxValueIn(const T arr[], const int n)
{
	T max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}