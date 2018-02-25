#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

#define PI 3.14

using namespace std;

//������� 1
bool IsPowerN(int K, int N)
{
	int result, power;
	result = 1; // ��������� �������� ����� N � ������� 0, �������� 2 � ������� 0 ����� 1
	power = 0; // ��������� ���������� �������

		while (result < K)
		{
			power++;
			result = result * N; // N � �������� power
		}

		if (result == K) //���� result ����� K, �� K �������� ������ N � �����-���� ������� 
			return 1;
		else
			return 0;
}

int powerN(int K, int N)
{
	int result, power;
	result = 1; 
	power = 0; 

		while (result < K)
		{
			power++;
			result = result * N; 
		}

		if (result == K) 
			return power; // ������� ������� �����
		else
			return 0;
}

//������� 2 
bool IsPrime(int N)
{
	bool flag = 0;
		if (N > 1)
		{
			for (int i = 2; i < (N / 2); i++)
			{
				if (N%i == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				return 1;
			else
				return 0;
		}
		else
			return 0;
}

//������� 3
int DigitN(int K, int N)
{
	int result, count = 0, temp;

	temp = K;

		while (temp > 0)
		{
			temp /= 10;
			count++;
		}

		if (count >= N)
		{
			for (int i = 0; i < N; i++)
			{
				result = K % 10;
				K /= 10;
			}
			return result;
		}
		else
			return -1;
}

//������� 4
double DegToRad(double D)
{
	if (D > 360) D = fmod(D, 360.0);
		return PI * D / 180.0;
}

//������� 5
double RadToDeg(double R)
{
	if (R > 2 * PI) R = fmod(R, 2 * PI);
		return R * 180.0 / PI;
}

//������� 6
unsigned long long Fact(int N)
{
	int Factorial = 1;

		for (int i = 1; i <= N; i++)
		{
			Factorial *= i;
		}
			return Factorial;
}

void fillArrayInteger(int * mas, int len, int *min, int *max)
{
	for (int i = 0; i < len; i++)
		mas[i] = rand() * (*max - *min) / RAND_MAX + *min;
}

void printArray(int * mas, int len)
{
	for (int i = 0; i < len; i++)
		cout << mas[i] << "\t";
	cout << endl;
}

void fillArrayDouble(double * mas, int len, double *min, double *max)
{
	for (int i = 0; i < len; i++)
		mas[i] = (double)rand() * (*max - *min) / RAND_MAX + *min;
}

void printArrayDouble(double * mas, int len)
{
	for (int i = 0; i < len; i++)
		cout << mas[i] << "\t";
	cout << endl;
}