#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>

using namespace std;

float exponentation(int x, int n)
{
	float result = 1;
	if (n == 0)
	{
		return 1;
	}
	else if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			result *= x;
		}
	}
	else if (n < 0)
	{
		for (int i = 0; i < -n; i++)
		{
			result /= x;
		}
	}
	return result;
}

long long factorial(int a)
{
	if (a == 0)
	{
		return 1;
	}
	else
	{
		return (a * factorial(a - 1));
	}
}

float square_root(float n)
{
	float x = 1;
	float next_x = ((x + n / x) / 2);
	while (abs(next_x - x) > numeric_limits <float>::epsilon())
	{
		x = next_x;
		next_x = ((x + n / x) / 2);
	}
	return next_x;
}

bool IsPrimeNumber(int n)
{
	if (n % 2 == 0)
	{
		return false;
	}

	for (int i = 3; i <= (int)square_root(n); i += 2)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main() {
	setlocale(0, "");
	cout << "2 � ������� 3 �����:   " << exponentation(2, 3) << endl;
	cout << "2 � ������� -3 �����:   " << exponentation(2, -3) << endl;
	cout << "��������� ����� 3 �����:   " << factorial(3) << endl;
	cout << "��������� ����� 9 �����:   " << factorial(9) << endl;
	cout << "���������� ������ �� ����� 2 �����:   " << square_root(2) << endl;
	cout << "���������� ������ �� ����� 256 �����:   " << square_root(256) << endl;
	if (IsPrimeNumber(1046527))
	{
		cout << "1046527 - ������� �����" << endl;
	}
	else
	{
		cout << "1046527 - ��������� �����" << endl;
	}
	if (IsPrimeNumber(49))
	{
		cout << "49 - ������� �����" << endl;
	}
	else
	{
		cout << "49 - ��������� �����" << endl;
	}
	_getch();
	return 0;
}
