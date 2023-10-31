#include <iostream>

using namespace std;

int Sum(int mas[], const int n);

int main()
{
	const int k = 11; // кількість елементів масиву

	int a[k] = { 3,5,7,9,11 }; // оголосили та ініціалізували масив

	cout << "S = " << Sum(a, k) << endl;

	return 0;
}

int Sum(int mas[], const int n) // ітераційний спосіб
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += mas[i];
	return s;
}

