#include"stdafx.h"
using namespace std;


int Print_massive_vvod(int arr[], int nomer)
{
	cout << "Введите массив: ";
	for (int i = 0; i < nomer; i++)
	{
		cin >> arr[i];
	}
	return nomer;
}
double Print_massive_random_double(double arr[], int nomer)
{
	cout << "Заполненный массив: ";
	for (int i = 0; i < nomer; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return nomer;
}
int Print_massive_random_int(int arr[], int nomer)
{
	cout << "Заполненный массив: ";
	for (int i = 0; i < nomer; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return nomer;
}

