#pragma once
#include"Constants.h"

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