#include"stdafx.h"

using namespace std;

int Summa(int sum)
{
	int max;
	int znachenie;

	cout << "���������� �������� ��������: "; cin >> max;
	cout << endl;
	for (int i = 0; i < max; i++)
	{
		cout << "������� ��������: "; cin >> znachenie;
		sum = sum + znachenie;
	}
	cout << "\n";
	cout << "����� �������� �������� - " << sum;
	return sum;
}