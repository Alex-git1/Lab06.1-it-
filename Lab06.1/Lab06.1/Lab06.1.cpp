#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Create(int* p, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        p[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* p, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << p[i];
    }
    cout << endl;
}
int CountElements(int* p, const int size)
{
    int count_element = 0;
    for (int i = 0; i < size; i++)
        if (p[i] > 0 || i % 2 == 0)
            count_element++;
    return count_element;
}
int Sum(int* p, const int size, int& count_element)
{
    int S = 0;
    count_element = 0;
    for (int i = 0; i < size; i++)
        if (p[i] > 0 || i % 2 == 0)
        {
            S += p[i];
            count_element++;
            p[i] = 0;
        }
    return S;
}
void ReplaceElements(int* p, const int size)
{
    for (int i = 0; i < size; i++)
        if (p[i] > 0 || i % 2 == 0)
            p[i] = 0;
}
int main() {
    srand((unsigned)time(NULL));
    const int n = 24;  
    int p[n];
    int Low = -10;
    int High = 14;
    Create(p, n, Low, High);
    Print(p, n);
    int count_element = CountElements(p, n);
    int sum = Sum(p, n, count_element);
    ReplaceElements(p, n);
    cout << "S = " << sum << endl;
    cout << "Count of element = " << count_element << endl;
    Print(p, n);
    return 0;
}
