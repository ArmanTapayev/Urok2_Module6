#pragma once

bool IsPowerN(int K, int N); //������� 1
int powerN(int K, int N); //������� 1
bool IsPrime(int N); //������� 2
int DigitN(int K, int N); //������� 3
double DegToRad(double D); //������� 4
double RadToDeg(double R); //������� 5
unsigned long long Fact(int N); //������� 6

void fillArrayInteger(int * mas, int len, int *min, int *max);
void printArray(int * mas, int len);

void fillArrayDouble(double * mas, int len, double *min, double *max);
void printArrayDouble(double * mas, int len);