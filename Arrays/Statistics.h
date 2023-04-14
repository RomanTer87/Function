#pragma once
#include"Constants.h"
#include"stdafx.h"

template<typename T> T sum(const T arr[], const int n);
template<typename T> T sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(const T arr[], const int n);
template<typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(const T arr[], const int n);
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T maxValueIn(const T arr[], const int n);
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);