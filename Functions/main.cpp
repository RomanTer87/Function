#include<iostream>
using namespace std;

int Sum(int a, int b); // Прототип функции (Объявление функции - Function declaration
int Dif(int a, int b);
int Product(int a, int b);
double Quotient(double a, double b);
int Reminder(int a, int b);

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	
	int c = Sum(a, b);  // использование функции (вызов функции, Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Dif(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
	cout << a << " % " << b << " = " << Reminder(a, b) << endl;
}
int Sum(int a, int b) // реализация функции (определение функции, Function definition)
{
	int c = a + b;
	return c;
}
int Dif(int a, int b)
{
	//Difference - разность
	return a - b;
}
int Product(int a, int b)
{
	//Product - произведение
	return a * b;
}
double Quotient(double a, double b)
{
	//Quotient - частное
	return a / b;
}
int Reminder(int a, int b)
{
	return a % b;
}
