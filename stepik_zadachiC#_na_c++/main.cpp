#include<iostream>
using namespace std;

double Zadacha_433(int studenti, int ballbI);
int Zadacha_461(int a, int b);
int Zadacha_462(int a, int b);
int Zadacha_463(int stepenb);
int Zadacha_464(int chislo, int predel);
int Zadacha_465(int x);
int Zadacha_466(int n, int c, int d);
int Artur_and_stradania(int arr[], const int nomer);
int Print_massive_vvod(int arr[], int nomer);
double Artur_and_termometr(double arr[], const int t);
void FillRand_double(double arr[], const int n, int MinRand = -500, int MaxRand = 500);
void FillRand_int(int arr[], const int n, int MinRand = 0, int MaxRand = 9);
double Print_massive_random_double(double arr[], int nomer);
int Print_massive_random_int(int arr[], int nomer);
int Analiz(int arr[], const int kolichestvo_chisel);


void main()
{
	setlocale(LC_ALL, "");

	int studenti; cout << " Введите количество студентов: "; cin >> studenti;
	int ballbI; cout << "Баллы студента n: "; cin >> ballbI;
	Zadacha_433(studenti, ballbI); cout << "\n\n"; //https://stepik.org/lesson/87132/step/11?unit=63522

	int a; cout << "Начальная точка: "; cin >> a;
	int b; cout << "Конечная точка: "; cin >> b;
	Zadacha_461(a, b); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/1?unit=1686079

	cout << "Вывод этого отрезка в обратную сторону: " << endl;
	Zadacha_462(a, b); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/2?unit=1686079

	int stepenb; cout << "Число возведённое в квадрат: "; cin >> stepenb;
	Zadacha_463(stepenb); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/3?unit=1686079

	int chislo; cout << "Таблица умножения для заданного числа: "; cin >> chislo;
	int predel; cout << "Предел, до которого нужно перемножать: "; cin >> predel;
	Zadacha_464(chislo, predel); cout << "\n\n";  //https://stepik.org/lesson/1663129/step/4?unit=1686079

	int x; cout << "Число X: "; cin >> x;
	Zadacha_465(x); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/5?unit=1686079

	int n, c, d;
	cout << "Введите три числа: " << endl;
	cout << "n = "; cin >> n;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	Zadacha_466(n, c, d); //https://stepik.org/lesson/1663129/step/6?unit=1686079

	const int nomer = 10; 
	int arr[nomer];
	Print_massive_vvod(arr, nomer);
	Artur_and_stradania(arr, nomer); cout << "\n\n"; //https://stepik.org/lesson/87044/step/5?unit=63440

	const int t = 5;
	double brr[t];
	FillRand_double(brr, t);
	Print_massive_random_double(brr, t);
	Artur_and_termometr(brr, t); //https://stepik.org/lesson/105966/step/8?unit=80496


	const int kolichestvo_chisel = 3;
	FillRand_int(arr, kolichestvo_chisel);
	Print_massive_vvod(arr, kolichestvo_chisel);
	Analiz(arr, kolichestvo_chisel); //https://stepik.org/lesson/87925/step/8?unit=64284
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
int Print_massive_vvod(int arr[], int nomer)
{
	cout << "Введите массив: ";
	for (int i = 0; i < nomer; i++)
	{
		 cin >> arr[i];
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
	cout << "Средняя температура:" << sum/cnt << "\n";
	return t;
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
void FillRand_double(double arr[], const int n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}
}
void FillRand_int(int arr[], const int n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
		
	}
}
int Analiz(int arr[], const int kolichestvo_chisel)
{
	int cnt = 0;
	for (int i = 0; i < 1; i++)
	{
		if (arr[0]+arr[1]+arr[2] == 8)
		{
			cnt++;
		}
	}
	if (cnt > 0)
	{
		cout << cnt;
	}
	else
	{
		cout << "empty";
	}
	return kolichestvo_chisel;
}