#include<iostream>
using namespace std;

int SUMM(int a, int b);
int DIFF(int a, int b);
int UMNOZH(int a, int b);
double DELENIE(double a, double b);
int  FACTORIAL(int a);
int STEPEN(int a, int b);

void main()
{
	setlocale(LC_ALL, "");

	/*int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	cout << "Результат сложения: " << SUMM(a, b) << endl;
	cout << "Результат вычитания: " << DIFF(a, b) << endl;
	cout << "Результат умножения: " << UMNOZH(a, b) << endl;
	cout << "Результат деления: " << DELENIE(a, b) << endl;
	cout << "Введите число для определения его факториала: "; cin >> a;
	cout << "Факториал равен: " << FACTORIAL(a) << endl;
	cout << "Введите основание степени и степень: "; cin >> a >> b;
	cout << "Результат возведения в степень: " << STEPEN(a, b) << endl;*/
}
int SUMM(int a, int b)
{
	int c = a + b;
	return c;
}
int DIFF(int a, int b)
{
	int c = a - b;
	return c;
}
int UMNOZH(int a, int b)
{
	int c = a * b;
	return c;
}
double DELENIE(double a, double b)
{
	double c = a / b;
	return c;
}
int FACTORIAL(int a)
{
	int f = 1;
	for (int i = 1; i <= a; i++)
	{
		f *= i;
	}
	return f;
}
int STEPEN(int a, int b)
{
	int s = 1;
	for (int i = 0; i < b; i++)
	{
		s *= a;
	}
	return s;
}