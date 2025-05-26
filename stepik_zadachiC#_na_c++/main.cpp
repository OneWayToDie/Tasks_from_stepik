#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Tasks.h"
using namespace std;



void main()
{
	setlocale(LC_ALL, "");
	
	int NUMBER;
	cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	if (NUMBER == 1)
	{
		int studenti; cout << " Введите количество студентов: "; cin >> studenti;
		int ballbI; cout << "Баллы студента n: "; cin >> ballbI;
		Zadacha_433(studenti, ballbI); cout << "\n\n"; //https://stepik.org/lesson/87132/step/11?unit=63522
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 2)
	{
		int a; cout << "Начальная точка: "; cin >> a;
		int b; cout << "Конечная точка: "; cin >> b;
		Zadacha_461(a, b); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/1?unit=1686079
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 3)
	{
		int a; cout << "Начальная точка: "; cin >> a;
		int b; cout << "Конечная точка: "; cin >> b;
		cout << "Вывод этого отрезка в обратную сторону: " << endl;
		Zadacha_462(a, b); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/2?unit=1686079
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 4)
	{
		int stepenb; cout << "Число возведённое в квадрат: "; cin >> stepenb;
		Zadacha_463(stepenb); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/3?unit=1686079
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 5)
	{
		int chislo; cout << "Таблица умножения для заданного числа: "; cin >> chislo;
		int predel; cout << "Предел, до которого нужно перемножать: "; cin >> predel;
		Zadacha_464(chislo, predel); cout << "\n\n";  //https://stepik.org/lesson/1663129/step/4?unit=1686079
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 6)
	{
		int x; cout << "Число X: "; cin >> x;
		Zadacha_465(x); cout << "\n\n"; //https://stepik.org/lesson/1663129/step/5?unit=1686079
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 7)
	{
		int n, c, d;
		cout << "Введите три числа: " << endl;
		cout << "n = "; cin >> n;
		cout << "c = "; cin >> c;
		cout << "d = "; cin >> d;
		Zadacha_466(n, c, d); //https://stepik.org/lesson/1663129/step/6?unit=1686079
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 8)
	{
		const int nomer = 10;
		int arr[nomer];
		Print_massive_vvod(arr, nomer);
		Artur_and_stradania(arr, nomer); cout << "\n\n"; //https://stepik.org/lesson/87044/step/5?unit=63440
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 9)
	{
		const int t = 5;
		double brr[t];
		FillRand_double(brr, t);
		Print_massive_random_double(brr, t);
		Artur_and_termometr(brr, t); //https://stepik.org/lesson/105966/step/8?unit=80496
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 10)
	{
		const int nomer = 10;
		int arr[nomer];
		const int kolichestvo_chisel = 3;
		FillRand_int(arr, kolichestvo_chisel);
		Print_massive_vvod(arr, kolichestvo_chisel);
		Analiz(arr, kolichestvo_chisel); //https://stepik.org/lesson/87925/step/8?unit=64284
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 11)
	{
		int pervoe_sostavnoe = 0;
		int vtoroe_sostavnoe = 0;
		Intersting_number(pervoe_sostavnoe, vtoroe_sostavnoe); //https://stepik.org/lesson/87925/step/9?unit=64284
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 12)
	{
		int sum = 0;
		Summa(sum); //https://stepik.org/lesson/87132/step/9?unit=63522
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 13)
	{
		int sum = 0;
		int kolichestvo;
		cout << "Введите количество чисел, которое хотите сложить - "; cin >> kolichestvo;
		cout << endl;
		Summa_uslovie(sum, kolichestvo); //https://stepik.org/lesson/87132/step/10?unit=63522
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 14)
	{
		int chislo = 0;
		int kolichestvo;
		cout << "Введите необходимое вам количество чисел: "; cin >> kolichestvo;
		cout << "\n";
		Number_of_numbers(chislo, kolichestvo); //https://stepik.org/lesson/87132/step/12?unit=63522
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 15)
	{
		int kolichestvo;
		int cnt = 0;
		cout << "Введите необходимое вам количество чисел: "; cin >> kolichestvo;
		cout << "\n";
		Nuli(cnt, kolichestvo); //https://stepik.org/lesson/87132/step/13?unit=63522
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 16)
	{
		int stroka = 8;
		int sum = 0;
		int nominal_monetbi = 0;
		int kolichestvo = 0;
		Artur_and_Money(stroka, sum, nominal_monetbi, kolichestvo); //https://stepik.org/lesson/87132/step/14?unit=63522
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 17)
	{
		int chislo; cout << "Введите число: "; cin >> chislo;
		Proizvedenie_chetnbix_chisel(chislo); //https://stepik.org/lesson/126880/step/3?unit=101078
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 18)
	{
		int celb_1; cout << "Введите первое число: "; cin >> celb_1;
		int celb_2; cout << "Введите второе число: "; cin >> celb_2;
		Proizvedenie_na_otrezke(celb_1, celb_2); //https://stepik.org/lesson/126880/step/4?unit=101078
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 19)
	{
		int celb_1; cout << "Введите первое число: "; cin >> celb_1;
		int celb_2; cout << "Введите второе число: "; cin >> celb_2;
		Proizvedenie_7(celb_1, celb_2); //https://stepik.org/lesson/126880/step/5?unit=101078
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 20)
	{
		int chislo; cout << "Введите число: "; cin >> chislo;
		Delenie(chislo); //https://stepik.org/lesson/87339/step/8?unit=63719
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;

	}
	if (NUMBER == 21)
	{
		int chislo = 0; 
		Kratnostb(chislo); //https://stepik.org/lesson/87340/step/4?unit=63720
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 22)
	{
		int MinRand = 0;
		int MaxRand = 100;
		const int nomer = 10;
		int arr[nomer];
		FillRand_int(arr, nomer, MinRand, MaxRand);
		Print_massive_random_int(arr, nomer);
		Search(arr, nomer); //https://stepik.org/lesson/87057/step/7?unit=63453
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 23)
	{
		int MinRand = 0;
		int MaxRand = 100;
		const int nomer = 7;
		int arr[nomer];
		FillRand_int(arr, nomer, MinRand, MaxRand);
		Print_massive_random_int(arr, nomer);
		Search_2(arr, nomer); //https://stepik.org/lesson/87057/step/8?unit=63453
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 24)
	{
		const int nomer = 5;
		int arr[nomer];
		Print_massive_vvod(arr, nomer);
		More_than_the_previous_one(arr, nomer); //https://stepik.org/lesson/87057/step/9?unit=63453
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
	if (NUMBER == 25)
	{
		int MinRand = 0;
		int MaxRand = 100;
		const int nomer = 7;
		int arr[nomer];
		FillRand_int(arr, nomer, MinRand, MaxRand);
		Print_massive_random_int(arr, nomer);
		Index(arr, nomer); //https://stepik.org/lesson/106615/step/4?unit=81139
		cout << "Введите номер задачи, которую хотите проверить: "; cin >> NUMBER;
	}
}



