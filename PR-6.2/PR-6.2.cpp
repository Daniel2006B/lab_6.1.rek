#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Count(int* a, const int size) {

	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0)  // Перевірка, чи число непарне
			count+= 1;
	return count;
}

int main() {
    srand(time(0));  
    const int size = 15;  
    int a[size];  

    int Low = 1;  
    int High = 100;  

    Create(a, size, Low, High);
    cout << "generated array = " << endl;
    Print(a, size);
    
    cout << "number of odd numbers = " << Count(a, 15) << endl;

    return 0;
}
