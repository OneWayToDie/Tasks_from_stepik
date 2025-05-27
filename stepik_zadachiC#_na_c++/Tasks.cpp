#include"stdafx.h"

using namespace std;

double Zadacha_433(int studenti, int ballbI)
{
	double sum = ballbI;
	double AVG;
	for (int i = 1; i < studenti; i++)
	{
		cout << "Баллы студента n: "; cin >> ballbI;

		sum = sum + ballbI;
	}

	AVG = sum / studenti;
	cout << "Средний балл - " << AVG << endl;
	return ballbI;
}
int Zadacha_461(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	return a;
}
int Zadacha_462(int a, int b)
{
	int raznica = b - a;
	if (a <= b)
	{
		for (int i = 0; i < raznica; i++)
		{
			cout << b << " ";
			b = b - 1;
		}
	}
	else
	{
		cout << "Неверное условие";
	}
	return a;
}
int Zadacha_463(int stepenb)
{
	for (int i = 0; i < stepenb * stepenb; i++)
	{
		if (i * i <= stepenb * stepenb && i > 0)
		{
			cout << i * i << " ";
		}
	}
	return stepenb;
}
int Zadacha_464(int chislo, int predel)
{
	int res;
	for (int i = 0; i <= predel; i++)
	{
		res = chislo * i;
		cout << chislo << " * " << i << " = " << res << "\n";
	}
	return chislo;
}
int Zadacha_465(int x)
{
	int cnt = 0;
	int cnt2 = 0;
	for (int i = 0; i <= x; i++)
	{
		cnt2++;
		if (x % cnt2 == 0 && cnt2 > 0)
		{
			cnt++;
		}
	}
	cout << "Количество натуральных делителей числа X: " << cnt;
	return cnt;
}
int Zadacha_466(int n, int c, int d)
{
	for (int i = 0; i <= n; i++)
	{
		if (i % c == 0 && i % d != 0)
		{
			cout << "Число кратное c, но не кратное d - " << i << endl;
		}
	}
	return d;
}
int Artur_and_stradania(int arr[], const int nomer)
{
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < nomer; i++)
	{
		if (arr[i] % 7 == 0)
		{
			cnt1++;

		}
		if (arr[i] == 0)
		{
			cnt2++;
		}
	}
	if (cnt1 > 0 && cnt2 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return nomer;
}
double Artur_and_termometr(double arr[], const int t)
{
	double sum = 0;
	int min = arr[0];
	int max = arr[0];
	int cnt = 0;

	for (int i = 0; i < t; i++)
	{
		if (arr[i] > -50 && arr[i] < 100)
		{
			cnt++;
			sum = sum + arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[0];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Минимальная температура термометра: " << min << "\n";
	cout << "Максимальная температура термометра: " << max << "\n";
	cout << "Средняя температура:" << sum / cnt << "\n";
	return t;
}
int Analiz(int arr[], const int kolichestvo_chisel)
{
	int cnt = 0;
	for (int i = 0; i < 1; i++)
	{
		if (arr[0] + arr[1] + arr[2] == 8)
		{
			cnt++;
		}
	}
	if (cnt > 0)
	{
		cout << cnt << endl;
	}
	else
	{
		cout << "empty" << endl;
	}
	cout << "\n";
	return kolichestvo_chisel;
}
int Intersting_number(int pervoe_sostavnoe, int vtoroe_sostavnoe)
{
	pervoe_sostavnoe = 10;
	for (int i = 1; i < 10; i++)
	{
		pervoe_sostavnoe;
		for (int j = 0; j < 10; j++)
		{
			vtoroe_sostavnoe = pervoe_sostavnoe + j;
			if (vtoroe_sostavnoe == i * j * 2)
			{
				cout << "число - " << vtoroe_sostavnoe << endl;
			}
		}
		pervoe_sostavnoe += 10;

	}
	cout << endl;
	return vtoroe_sostavnoe;
}
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
	cout << "Сумма введённых значений - " << sum << "\n";
	return sum;
}
int Summa_uslovie(int sum, int kolichestvo)
{
	int chislo;
	for (int i = 0; i < kolichestvo; i++)
	{
		cout << "Введите число: "; cin >> chislo;
		if (chislo % 2 == 0 && chislo % 3 != 0)
		{
			sum = sum + chislo;
		}
	}
	cout << "Сумма чисел = " << sum << "\n";
	return sum;
}
int Number_of_numbers(int chislo, int kolichestvo)
{
	int cnt = 0;
	for (int i = 0; i < kolichestvo; i++)
	{
		cout << "Введите число: "; cin >> chislo;
		if (chislo % 10 == 0 || chislo == 0)
		{
			cnt++;
		}
	}
	cout << "Количество чисел оканчивающихся на 0 = " << cnt << endl;
	return cnt;
}
int Nuli(int cnt, int kolichestvo)
{
	int chislo; 
	for (int i = 0; i < kolichestvo; i++)
	{
		cout << "Введите число: "; cin >> chislo;
		if (chislo == 0)
		{
			cnt++;
		}
	}
	if (cnt > 0)
	{
		cout << "YES, Нулей введено - " << cnt << endl;
	}
	if (cnt == 0)
	{
		cout << "NO" << endl;
	}
	return cnt;
}
int Artur_and_Money(int stroka, int sum, int nominal_monetbi, int kolichestvo)
{
	stroka = 8;
	int all_sum = 0;
	for (int i = 1; i < stroka*2; i++)
	{
			if (i / 2 % 2 == 0)
			{
				cout << "Номинал монеты - "; cin >> nominal_monetbi;
				i++;
			}
			if (i / 2 % 2 == 1)
			{
				cout << "Количество монет номинала " << nominal_monetbi << " руб. - "; cin >> kolichestvo;
				i++;
				sum = nominal_monetbi * kolichestvo;
				sum = sum + all_sum;
			}
			all_sum = sum;
	}
	cout << "Общая сумма монет - " << all_sum << endl;
	return all_sum;
}
int Proizvedenie_chetnbix_chisel(int chislo)
{
	int sum = 1;
	for (int i = 1; i <= chislo; i ++)
	{
		if (i % 2 == 0)
		{
			sum = i * sum;
		}
	}
	cout << "Вывод суммы - " << sum << endl;
	return sum;
}
int Proizvedenie_na_otrezke(int celb_1, int celb_2)
{
	int proizvedenie;
	if (celb_1 == celb_2)
	{
		cout << "Произведение чисел на отрезке = " << celb_1;
	}
	else
	{
		for (int i = celb_1 + 1; i <= celb_2; i++)
		{
			proizvedenie = celb_1 * i;
			celb_1 = proizvedenie;

		}
		cout << "Произведение чисел на отрезке = " << proizvedenie << endl;
		return proizvedenie;
	}
}
int Proizvedenie_7(int celb_1, int celb_2)
{
	int proizvedenie = 1;
	for (int i = celb_1; i <= celb_2; i++)
	{
		if (i % 10 == 7 || i == 7)
		{
			cout << "Число для перемножения - " << i << endl;
			proizvedenie = proizvedenie * i;
		}
	}
	cout << "Произведение чисел оканчивающихся на 7 - " << proizvedenie << endl;
	return celb_1;
}
int Delenie(int chislo)
{
	int cnt = 0;
	while (chislo % 3 == 0)
	{
		chislo = chislo / 3;
		cnt++;
	}
	cout << "Число делится на 3 нацело - " << cnt << endl;
	return cnt;
}
int Kratnostb(int chislo)
{
	int kolichestvo;cout << "Введите количество чисел, нужное вам: "; cin >> kolichestvo;
	int sum = 0;
	for (int i = 0; i < kolichestvo; i++)
	{
		cout << "Введите числа: "; cin >> chislo;
		if(chislo % 2 == 0 && chislo % 3 != 0)
		{
			sum = sum + chislo;
		}
	}
	cout << "Сумма чисел равна = " << sum << endl;
	return sum;

	
	
}
int Search(int arr[], const int nomer)
{
	cout << "Вывод элементов массива, индексы которых кратны трём - ";
	for (int i = 0; i < nomer; i++)
	{
		if (i % 3 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	return nomer;
}
int Search_2(int arr[], const int nomer)
{
	cout << "Элементы массива, кратные трём - ";
	for (int i = 0; i < nomer; i++)
	{
		if (arr[i] % 3 == 0)
		{
			cout  << arr[i] << " ";
		}
	}
	cout << endl;
	return nomer;
}
int More_than_the_previous_one(int arr[], const int nomer)
{
	int cnt = 0;
	for (int i = 0; i < nomer; i++)
	{
		if (arr[i + 1] > arr[i])
		{
			cnt++;
		}
	}
	
	cout << "Количество элементов массива, больших предыдущего элемента - " << cnt << endl;
	return nomer;
}
int Index(int arr[], const int nomer)
{
	int min = arr[0];
	for (int i = 0; i < nomer; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Вывод индекса массива с минимальным значением: " << min << endl;
	return nomer;
}
int Umenbshenie_Arr(int arr[], const int nomer)
{
	int min = arr[0];
	for (int i = 0; i < nomer; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		
	}
	cout << "массив, в котором все элементы массива уменьшены на минимальный элемент массива: ";
	for (int i = 0; i < nomer; i++)
	{
		arr[min] = arr[i] - min;
		cout << arr[min] << " ";
	}
	cout << endl;
	return nomer;
}
int Raznostb_Arr(int arr[], const int nomer)
{
	int raznostb;
	int min = arr[0];
	int max = arr[0];
	int IndexMin;
	int IndexMax;
	for (int i = 0; i < nomer; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			IndexMin = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			IndexMax = i;
		}
	}
	cout << "Вывод индекса массива с минимальным значением: " << min << endl;
	cout << "Вывод индекса массива с минимальным значением: " << max << endl;
	raznostb = IndexMax - IndexMin;
	cout << "Разность - " << raznostb << endl;
	return nomer;
}
//int First_min_last_max(int arr[], const int nomer)
//{
//	int min = arr[0];
//	int max = arr[0];
//	int IndexMin;
//	int IndexMax;
//	for (int i = 0; i < nomer; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			IndexMin = i;
//		}
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//			IndexMax = i;
//		}
//
//	}
//	arr[IndexMax] = min;
//	arr[IndexMin] = max;
//
//
//	return nomer;
//}
int Palindrom_Arr(int arr[], const int nomer)
{
	bool sum = false;
	for (int i = 0; i < nomer; i++)
	{
		arr[i] == arr[nomer - 1 - i] ? sum = true : sum = false;
	}
	sum == true ? cout << "YES" : cout << "NO";
	cout << "\n";
	return nomer;
}
int Two_identical_elements_Arr(int arr[], int nomer)
{
	bool sovpadenie = false;
	for (int i = 0; i < nomer; i++)
	{
		for (int j = i+1; j < nomer; j++)
		{
			if (arr[j] == arr[i])
			{
				sovpadenie = true;
			}
		}
	}
	sovpadenie == true ? cout << "YES" : cout << "NO";
	cout << "\n";
	return nomer;
}
int The_only_elements_are(int arr[], const int nomer)
{

}