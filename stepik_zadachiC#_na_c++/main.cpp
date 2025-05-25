#include"stdafx.h"
#include"Print.h"
#include"sum.h"
#include"Tasks.h"
using namespace std;

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


	int pervoe_sostavnoe = 0;
	int vtoroe_sostavnoe = 0;
	Intersting_number(pervoe_sostavnoe, vtoroe_sostavnoe); //https://stepik.org/lesson/87925/step/9?unit=64284

	int sum = 0;
	Summa(sum);
}



