#include<iostream>
using namespace std;

//#define FACTORIAL
//#define POWER

#ifdef FACTORIAL
int Factorial(int a, int f);

void main()
{
	setlocale(LC_ALL, "");

	int a;
	int f = 1;
	cout << "Введите предел факториала: "; cin >> a;
	cout << "Значение: " << Factorial(a, f) << endl;
}

int Factorial(int a, int f = 1)
{
	for (int i = 1; i <= a; i++) f *= i;
	return f;
}
#endif // FACTORIAL

#ifdef POWER
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");

	int a; // основание степени
	int b; // показатель степени
	int c = 1; // переменная для записи результата
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> b;
	cout << "Полученный результат: " << Power(a, b) << endl;
}
int Power(int a, int b)
{
	int c = 1;
	for (int i = 1; i <= b; i++) c *= a;
	return c;
}
#endif // POWER
