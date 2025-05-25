#include"stdafx.h"

using namespace std;

int Summa(int sum)
{
	int max;
	int znachenie;

	cout << "Количество вводимых значений: "; cin >> max;
	cout << endl;
	for (int i = 0; i < max; i++)
	{
		cout << "Введите значение: "; cin >> znachenie;
		sum = sum + znachenie;
	}
	cout << "\n";
	cout << "Сумма введённых значений - " << sum;
	return sum;
}