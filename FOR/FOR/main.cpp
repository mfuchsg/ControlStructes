#include <iostream>

using namespace std;

#define tab "\t"

int main()
{
    setlocale(LC_ALL, "");
    int n; //Количество итераций
    cout << "Введите количество итераций: "; cin >> n;
    for(
        int i = 0;
        i < n;
        i++)
    {
        cout << i << tab;
    }
    cout << endl;
}
