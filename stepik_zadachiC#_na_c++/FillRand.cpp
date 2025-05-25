#include"stdafx.h"
using namespace std;
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