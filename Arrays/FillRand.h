#pragma once
#include"stdafx.h"
#include"Constants.h"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 10);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 10);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 1, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);