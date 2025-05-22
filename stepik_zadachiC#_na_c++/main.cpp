#include<iostream>
using namespace std;

double Zadacha_433(int studenti, int ballbI);
int Zadacha_461(int a, int b);
int Zadacha_462(int a, int b);
int Zadacha_463(int stepenb);
int Zadacha_464(int chislo, int predel);
int Zadacha_465(int x);
int Artur_and_stradania(int arr[], const int nomer);
int Print_massive_vvod(int arr[], int nomer);
int Artur_and_termometr(int arr[], const int t);
void FillRand(int arr[], const int n, int MinRand = -500, int MaxRand = 500);
int Print_massive_random(int arr[], int nomer);


void main()
{
	setlocale(LC_ALL, "");

	int studenti; cout << " Введите количество студентов: "; cin >> studenti;
	int ballbI; cout << "Баллы студента n: "; cin >> ballbI;
	Zadacha_433(studenti, ballbI); cout << "\n\n";

	int a; cout << "Начальная точка: "; cin >> a;
	int b; cout << "Конечная точка: "; cin >> b;
	Zadacha_461(a, b); cout << "\n\n";

	cout << "Вывод этого отрезка в обратную сторону: " << endl;
	Zadacha_462(a, b); cout << "\n\n";

	int stepenb; cout << "Число возведённое в квадрат: "; cin >> stepenb;
	Zadacha_463(stepenb); cout << "\n\n";

	int chislo; cout << "Таблица умножения для заданного числа: "; cin >> chislo;
	int predel; cout << "Предел, до которого нужно перемножать: "; cin >> predel;
	Zadacha_464(chislo, predel); cout << "\n\n";

	int x; cout << "Число X: "; cin >> x;
	Zadacha_465(x); cout << "\n\n";

	const int nomer = 10; 
	int arr[nomer];
	Print_massive_vvod(arr, nomer);
	Artur_and_stradania(arr, nomer); cout << "\n\n";

	const int t = 5;
	int brr[t];
	FillRand(brr, t);
	Print_massive_random(brr, t);
	Artur_and_termometr(brr, t);
}

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
	for (int i = 0; i < stepenb*stepenb; i++)
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
int Print_massive_vvod(int arr[], int nomer)
{
	cout << "Введите массив: ";
	for (int i = 0; i < nomer; i++)
	{
		 cin >> arr[i];
	}
	return nomer;
}
int Artur_and_termometr(int arr[], const int t)
{
	int sum = 0;
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
	cout << "Средняя температура:" << sum/cnt << "\n";
	return t;
}
void FillRand(int arr[], const int n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}
}
int Print_massive_random(int arr[], int nomer)
{
	cout << "Заполненный массив: ";
	for (int i = 0; i < nomer; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return nomer;
}