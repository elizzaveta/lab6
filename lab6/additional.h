#pragma once
#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<double> Bernoulli_numbers(int n)
{
	double* numbers = new double[n + 1];
	numbers[0] = 1;
	double current_number = 1;

	for (int i = 1; i <= n; i++)
	{
		double S = 0;
		for (int j = 1; j <= i; j++)
		{
			double C = 1;
			for (int k = 1; k <= j + 1; k++)
				C *= (double)(i - k + 2) / k;
			S += C * numbers[i - j];
		}
		current_number = (-S) / (i + 1);
		numbers[i] = current_number;
	}
	vector<double> even_numbers;
	for (int i = 2; i <= n; i += 2)
		even_numbers.push_back(numbers[i]);

	return even_numbers;
}

long double fact1(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact1(N - 1);
}