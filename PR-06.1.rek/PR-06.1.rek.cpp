#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    if (i < size) {
        a[i] = Low + rand() % (High - Low + 1);
        Create(a, size, Low, High, i + 1);
    }
}

void Print(int* a, const int size, int i)
{
    if (i < size) {
        cout << setw(4) << a[i];
        Print(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

int Sum(int* a, const int size, int i)
{
    if (i < size) {
        int res = a[i] + Sum(a, size, i + 1);
        if (a[i] < 0 || a[i] % 2 != 0) {
            return res;
        }
        else {
            return res - a[i];
        }
    }
    return 0;
}

int Count(int* a, const int size, int i)
{
    if (i < size) {
        int res = Count(a, size, i + 1);
        if (a[i] < 0 || a[i] % 2 != 0) {
            return res + 1;
        }
        return res;
    }
    return 0;
}

int main()
{
    const int n = 8;
    int a[n];
    int Low = -4;
    int High = 4;
    Create(a, n, Low, High, 0);
    Print(a, n, 0);

    int totalSum = Sum(a, n, 0);
    int totalCount = Count(a, n, 0);

    cout << "Total Sum: " << totalSum << endl;
    cout << "Total Count: " << totalCount << endl;

    return 0;
}
