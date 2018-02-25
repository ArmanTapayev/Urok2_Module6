#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

#define PI 3.14

using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int n;
	do
	{ 
		cout << "Работа содержит 6 заданий." << endl;
		cout << "Для завершения наберите 0." << endl;
		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
			{
				/*1. Описать функцию IsPowerN(K, N) логического типа, возвращающую True, 
				если целый параметр K (> 0) является степенью числа N (> 1), и False в противном случае.
				Дано число N (> 1) и набор из 10 целых положительных чисел. 
				С помощью функции IsPowerN найти количество степеней числа N в данном наборе.*/

				int K[20], len=20, minK=4, maxK=100, N, count=0;

				// вводим основание степени числа, то есть мы будем искать N 
				// в какой-либо степении равное числу K 
					while (1)
					{
						cout << "Введите число N (основание степени): "; 
						cin >> N;
						if (N > 1)
							break;
						cout << "N должно быть больше 1." << endl;
						cout << "Введите число еще раз." << endl;
					}
				

					fillArrayInteger(K, len, &minK, &maxK);

					cout << "Исходный набор чисел: " << endl;
					printArray(K, len);

						for (int i = 0; i < len; i++)
						{
							if (IsPowerN(K[i], N))
							{
								cout << K[i] << " равно " << N << " в степении " << powerN(K[i], N) << endl;
								count++;
							}
						}

						cout << endl;
						cout << "Количество степеней числа " << N << " в данном наборе равно " << count << endl;
		
				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 2:
			{
				/*2. Описать функцию IsPrime(N) логического типа, возвращающую True, если целый параметр N (> 1)
				является простым числом, и False в противном случае (число, большее 1, называется простым, 
				если оно не имеет положительных делителей, кроме 1 и самого себя). Дан набор из 10 целых чисел,
				больших 1. С помощью функции IsPrime найти количество простых чисел в данном наборе.*/

				int A[10] = { 0 }, len = 10, minA = 2, maxA = 50, count = 0;

					fillArrayInteger(A, len, &minA, &maxA);

					cout << "Исходный набор чисел: " << endl;

					printArray(A, len);

					cout << "Простые числа: ";

						for (int i = 2; i < len; i++)
						{
							if (IsPrime(A[i]))
							{
								count++;
								cout << A[i]<<"  ";
							}
						}

						cout << endl;

					cout << "Количество простых чисел в наборе: " << count << endl;

				system("pause");
				system("cls");
			}break;

			case 3:
			{
				/*3. Описать функцию DigitN(K, N) целого типа, возвращающую N-ю цифру 
				целого положительного числа K (цифры в числе нумеруются справа налево). 
				Если количество цифр в числе K меньше N, то функция возвращает –1. 
				Для каждого из пяти данных целых положительных чисел K1, K2, …, K5 
				вызвать функцию DigitN с параметром N, изменяющимся от 1 до 5.*/

				int A[5], N[5], len = 5, minA=10, maxA=50000, minN=1, maxN=6;

					fillArrayInteger(A, len, &minA, &maxA);
					fillArrayInteger(N, len, &minN, &maxN);

					cout << "Исходный набор цифр: " << endl;
					printArray(A, len);

					cout << "N-ая цифра: " << endl;
					printArray(N, len);
					cout << endl;

						for (int i = 0; i < len; i++)
						{
							cout << N[i] << " цифра числа " << A[i]<<" равна " << DigitN(A[i], N[i]) << endl;
						}

				system("pause");
				system("cls");
			}break;

			case 4:
			{
				/*4. Описать функцию DegToRad(D) вещественного типа, находящую величину
				угла в радианах, если дана его величина D в градусах 
				(D — вещественное число, 0 < D < 360). Воспользоваться следующим соотношением:
				180° = π радианов. В качестве значения π использовать 3.14.
				С помощью функции DegToRad перевести из градусов в радианы пять данных углов.*/

				double D[5], minD = 0, maxD = 360.0;
				int len = 5;

				cout.precision(4);

					fillArrayDouble(D, len, &minD, &maxD);

					cout << "Данные значения углов в градусах: " << endl;
					printArrayDouble(D, len);
					cout << endl;

						for (int i = 0; i < len; i++)
						{
							cout << "В " << D[i] << " градусах содержится " << DegToRad(D[i]) << " радиан." << endl;
						}

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				/*5. Описать функцию RadToDeg(R) вещественного типа, находящую величину угла 
				в градусах, если дана его величина R в радианах (R — вещественное число,
				0 < R < 2·π). Воспользоваться следующим соотношением: 180° = π радианов. 
				В качестве значения π использовать 3.14. С помощью функции RadToDeg перевести
				из радианов в градусы пять данных углов */

				double R[5], minR = 0, maxR = 2 * PI ;
				int len = 5;

					cout.precision(4);

					fillArrayDouble(R, len, &minR, &maxR);

					cout << "Данные значения углов в радианах: " << endl;
					printArrayDouble(R, len);
					cout << endl;

						for (int i = 0; i < len; i++)
						{
							cout << "В " <<R[i] << " радианах содержится " << RadToDeg(R[i]) << " градусов." << endl;
						}

				system("pause");
				system("cls");
			}break;

			case 6:
			{
				/*6. Описать функцию Fact(N) вещественного типа, вычисляющую значение 
				факториала N! = 1·2·…·N (N > 0 — параметр целого типа; вещественное 
				возвращаемое значение используется для того, чтобы избежать 
				целочисленного переполнения при больших значениях N). 
				С помощью этой функции найти факториалы пяти данных целых чисел.*/

				int N[5], len=5, minN=1, maxN=12;

					fillArrayInteger(N, len, &minN, &maxN);

					cout << "Исходный набор цифр: " << endl;
					printArray(N, len);

						for (int i = 0; i < len; i++)
						{
							cout <<"Факториал числа " << N[i] << " равен " << Fact(N[i]) << endl;
						}

				system("pause");
				system("cls");
			}break;

		}
	} while (n != 0);
}
