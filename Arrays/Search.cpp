#include"Search.h"
#include"stdafx.h"

template<typename T> void Search(T arr[], const int n)
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
template<typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
			//if (count)printf("Значение %i повторяется %i раз\n", arr[i][j], count);
			if (count) cout << "Значение " << arr[i][j] << "повторяется " << count << " раз" << endl;
		}
	}
}